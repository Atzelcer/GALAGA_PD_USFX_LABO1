// Fill out your copyright notice in the Description page of Project Settings.


#include "CANONES_ESPACIALES_01.h"
#include "PROYECTIL_ESFERA_ENERGIA.h"

ACANONES_ESPACIALES_01::ACANONES_ESPACIALES_01()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/ASSETS/TORRETAS/Mesh_Torretas/Torreta10/115ebe1f1583_Space_Turret__3d_as.115ebe1f1583_Space_Turret__3d_as'"));
	if (MeshAsset.Succeeded())
	{
		Malla_Canone->SetStaticMesh(MeshAsset.Object);
		// Modificar la escala del componente de malla
		FVector NewScale(1.0f, 1.0f, 1.0f); // Escala modificada
		Malla_Canone->SetWorldScale3D(NewScale);
	}

	InitialLifeSpan = 10;
}

void ACANONES_ESPACIALES_01::BeginPlay()
{
	Super::BeginPlay();
}

void ACANONES_ESPACIALES_01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoDesdeUltimoDisparo += DeltaTime;
	if (TiempoDesdeUltimoDisparo >= TiempoDisparo) {
		Disparar_Canones();
		TiempoDesdeUltimoDisparo = 0.0f;
	}
}

void ACANONES_ESPACIALES_01::Disparar_Canones() const
{
	const FVector ForwardDirection = GetActorForwardVector();
	const FVector SpawnLocation = GetActorLocation() + ForwardDirection * 400.0f;
	const FRotator FireRotation = ForwardDirection.Rotation();

	UWorld* const World = GetWorld();
	if (World != nullptr) {
		APROYECTIL_ESFERA_ENERGIA* Proyectil = World->SpawnActor<APROYECTIL_ESFERA_ENERGIA>(SpawnLocation, FireRotation);
		if (Proyectil) {
			UProjectileMovementComponent* ProjectileMovement = Proyectil->FindComponentByClass<UProjectileMovementComponent>();
			if (ProjectileMovement) {
				ProjectileMovement->SetVelocityInLocalSpace(FVector::ForwardVector * 1500.0f);
				ProjectileMovement->Activate();
			}
		}
	}
}