// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLANZA_COHETES_ESPACIAL_01.h"
#include "PROYECTIL_MISSIL_P.h"

AMyLANZA_COHETES_ESPACIAL_01::AMyLANZA_COHETES_ESPACIAL_01()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/ASSETS/TORRETAS/Mesh_Torretas/Torreta04/f2c5b633b188_Space_Turret__3d_as.f2c5b633b188_Space_Turret__3d_as'"));
	if (MeshAsset.Succeeded())
	{
		Malla_Cohete->SetStaticMesh(MeshAsset.Object);
		// Modificar la escala del componente de malla
		FVector NewScale(1.0f, 1.0f, 1.0f); // Escala modificada
		Malla_Cohete->SetWorldScale3D(NewScale);
	}
	TiempoDesdeUltimoDisparo = 0.0f;
	TiempoDisparo = 2.0f; // Tiempo entre disparos, en segundos
	InitialLifeSpan = 10;
}

void AMyLANZA_COHETES_ESPACIAL_01::BeginPlay()
{
	Super::BeginPlay();
}

void AMyLANZA_COHETES_ESPACIAL_01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoDesdeUltimoDisparo += DeltaTime;
	if (TiempoDesdeUltimoDisparo >= TiempoDisparo) {
		Disparar_Cohetes();
		TiempoDesdeUltimoDisparo = 0.0f; // Restablecer el contador
	}
}

void AMyLANZA_COHETES_ESPACIAL_01::Disparar_Cohetes() const
{
	const FVector ForwardDirection = GetActorForwardVector();
	const FVector SpawnLocation = GetActorLocation() + ForwardDirection * 400.0f;
	const FRotator FireRotation = ForwardDirection.Rotation();

	UWorld* const World = GetWorld();
	if (World != nullptr) {
		APROYECTIL_MISSIL_P* Proyectil = World->SpawnActor<APROYECTIL_MISSIL_P>(SpawnLocation, FireRotation);
		if (Proyectil) {
			UProjectileMovementComponent* ProjectileMovement = Proyectil->FindComponentByClass<UProjectileMovementComponent>();
			if (ProjectileMovement) {
				ProjectileMovement->SetVelocityInLocalSpace(FVector::ForwardVector * 1500.0f);
				ProjectileMovement->Activate();
			}
		}
	}
}
