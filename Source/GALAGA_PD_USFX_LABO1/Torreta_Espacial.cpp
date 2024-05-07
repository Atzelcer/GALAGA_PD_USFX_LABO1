// Fill out your copyright notice in the Description page of Project Settings.


#include "Torreta_Espacial.h"
#include "PROYECTIL_LAZER.h"

// Sets default values
ATorreta_Espacial::ATorreta_Espacial()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Crear y configurar el componente de malla estática
	Malla_Torreta = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/ASSETS/TORRETAS/Mesh_Torretas/Torreta10/115ebe1f1583_Space_Turret__3d_as.115ebe1f1583_Space_Turret__3d_as'"));
	RootComponent = Malla_Torreta;
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/ASSETS/Torreta03/Torreta01.Torreta01'"));
	//if (MeshAsset.Succeeded())
	//{
	//	Malla_Torreta->SetStaticMesh(MeshAsset.Object);
	//	// Modificar la escala del componente de malla
	//	FVector NewScale(1.0f, 1.0f, 1.0f); // Escala modificada
	//	Malla_Torreta->SetWorldScale3D(NewScale);
	//}

	//// Asegúrate de que Malla_Maestro_A ha sido creado antes de llamar a SetupAttachment
	//static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	//if (ParticleAsset.Succeeded())
	//{
	//	Part_Torreta = ParticleAsset.Object;

	//}

	//// Crear y configurar el componente de sonido
	//Sonido_Torreta = CreateDefaultSubobject<USoundBase>(TEXT("Sonido_Torreta"));
	//static ConstructorHelpers::FObjectFinder<USoundBase> SoundAsset(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion02.Explosion02'"));
	//if (SoundAsset.Succeeded())
	//{
	//	Sonido_Torreta = SoundAsset.Object;
	//}

	TiempoDesdeUltimoDisparo = 0.0f;
	TiempoDisparo = 2.0f; // Tiempo entre disparos, en segundos

}

// Called when the game starts or when spawned
void ATorreta_Espacial::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATorreta_Espacial::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoDesdeUltimoDisparo += DeltaTime;
	if (TiempoDesdeUltimoDisparo >= TiempoDisparo) {
		Disparar_Torreta();
		TiempoDesdeUltimoDisparo = 0.0f; // Restablecer el contador
	}
}

void ATorreta_Espacial::Disparar_Torreta() const
{
	const FVector ForwardDirection = GetActorForwardVector();
	const FVector SpawnLocation = GetActorLocation() + ForwardDirection * 400.0f;
	const FRotator FireRotation = ForwardDirection.Rotation();

	UWorld* const World = GetWorld();
	if (World != nullptr) {
		APROYECTIL_LAZER* Proyectil = World->SpawnActor<APROYECTIL_LAZER>(SpawnLocation, FireRotation);
		if (Proyectil) {
			UProjectileMovementComponent* ProjectileMovement = Proyectil->FindComponentByClass<UProjectileMovementComponent>();
			if (ProjectileMovement) {
				ProjectileMovement->SetVelocityInLocalSpace(FVector::ForwardVector * 1500.0f);
				ProjectileMovement->Activate();
			}
		}
	}
}

