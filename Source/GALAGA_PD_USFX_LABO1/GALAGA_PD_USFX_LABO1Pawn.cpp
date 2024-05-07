// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_PD_USFX_LABO1Pawn.h"
#include "GALAGA_PD_USFX_LABO1Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Components/CapsuleComponent.h"
#include "PROYECTIL_P.h"

#include "Particles/ParticleSystem.h"
#include "UObject/ConstructorHelpers.h"
#include "Movimiento_Giratorio_Nave_Master.h"

const FName AGALAGA_PD_USFX_LABO1Pawn::MoveForwardBinding("MoveForward");
const FName AGALAGA_PD_USFX_LABO1Pawn::MoveRightBinding("MoveRight");
const FName AGALAGA_PD_USFX_LABO1Pawn::FireForwardBinding("FireForward");
const FName AGALAGA_PD_USFX_LABO1Pawn::FireRightBinding("FireRight");

AGALAGA_PD_USFX_LABO1Pawn::AGALAGA_PD_USFX_LABO1Pawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// campo de colision
	//ShipCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision Player"));
	//ShipCollision->SetCapsuleHalfHeight(15.0f);
	//ShipCollision->SetCapsuleRadius(35.0f);

	// creamos el efecto de explosion
	static ConstructorHelpers::FObjectFinder<UParticleSystem> AssetExplosion(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (AssetExplosion.Succeeded())
	{
		ShipExplosion = AssetExplosion.Object;
	}
	// creando sonido de explosion
	static ConstructorHelpers::FObjectFinder<USoundBase> ExplosionAudioAA(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
	if (ExplosionAudioAA.Succeeded())
	{
		ExplosionSoundShip = ExplosionAudioAA.Object;
	}

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;

	HealthMax = 1000;
	Health = 1000;
}

void AGALAGA_PD_USFX_LABO1Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
}

void AGALAGA_PD_USFX_LABO1Pawn::Damage(float _Damage)
{
	Health -= _Damage;
}

void AGALAGA_PD_USFX_LABO1Pawn::DestroyAndExplosion()
{
	//Efecto de Explosion 
	if (ShipExplosion)
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosion, GetActorTransform());
	//Sonido de la explosion

	if (ExplosionSoundShip != nullptr)
		UGameplayStatics::PlaySoundAtLocation(this, ExplosionSoundShip, GetActorLocation());

	//Para que se destruya la nave principal
	//this->Destroy();

}

void AGALAGA_PD_USFX_LABO1Pawn::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//AGALAGA_PD_USFX_LABO1Projectile* Proyectil = Cast<AGALAGA_PD_USFX_LABO1Projectile>(OtherActor);
	//if (Proyectil)
	//{
	//	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Colision con el Projectile"));
	//	//Proyectil->Destroy();
	//	Damage(45.f);
	//}

}

void AGALAGA_PD_USFX_LABO1Pawn::Tick(float DeltaSeconds)
{
	// Mostrar la salud actual en la pantalla usando un mensaje de depuración:
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("Health: %f"), Health));
	}

	//if (Health <= 0) 
	//{
	//	DestroyAndExplosion();

	//}

	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	
	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);
}

void AGALAGA_PD_USFX_LABO1Pawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AGALAGA_PD_USFX_LABO1Projectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGALAGA_PD_USFX_LABO1Pawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}

void AGALAGA_PD_USFX_LABO1Pawn::ShotTimerExpired()
{
	bCanFire = true;
}

