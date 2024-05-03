// Fill out your copyright notice in the Description page of Project Settings.


#include "PROYECTIL_MISSIL_P.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
#include "GALAGA_PD_USFX_LABO1Pawn.h"

APROYECTIL_MISSIL_P::APROYECTIL_MISSIL_P()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/ASSETS/VARIOS_A/Missile.Missile'"));
	if (MeshAsset.Succeeded())
	{
		Projectil_Mesh->SetStaticMesh(MeshAsset.Object);

		// Modificar la escala del componente de malla
		FVector NewScale(3.0f, 5.0f, 5.0f); // Escala modificada
		Projectil_Mesh->SetWorldScale3D(NewScale);
	}

	// Inicializar el sistema de partículas para la explosión
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (ParticleAsset.Succeeded())
	{
		Explosion_Particles = ParticleAsset.Object;
	}

	// Inicializar el sonido de la colisión
	static ConstructorHelpers::FObjectFinder<USoundBase> SoundAsset(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
	if (SoundAsset.Succeeded())
	{
		Projectil_Sound = SoundAsset.Object;
	}


	//Determinando la velocidad del proyectil
	Projectil_Movement->InitialSpeed = 750.0f;
	Projectil_Movement->MaxSpeed = 850.0f;

	//Tiempo de vida del proyectil
	InitialLifeSpan = 6.0f;

	//Configurando el proyectil para que genere eventos de colision
	Projectil_Collision->SetCapsuleHalfHeight(160.0f);
	Projectil_Collision->SetCapsuleRadius(160.0f);
}

void APROYECTIL_MISSIL_P::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	//HandleCollision(OtherActor);
	AGALAGA_PD_USFX_LABO1Pawn* Nave_Principal = Cast<AGALAGA_PD_USFX_LABO1Pawn>(OtherActor);
	if (Nave_Principal)
	{
		//Nave_Principal->Damage();
		//DestroyPROYECTIL();
	}
}

void APROYECTIL_MISSIL_P::Efectos_De_Colision()
{
	if (Explosion_Particles != nullptr)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Particles, GetActorLocation());
	}

	if (Projectil_Sound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), Projectil_Sound, GetActorLocation());
	}

	this->Destroy();
}
