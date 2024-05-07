// Fill out your copyright notice in the Description page of Project Settings.


#include "Torreta_Espacial_03.h"
#include "PROYECTIL_LAZER.h"

ATorreta_Espacial_03::ATorreta_Espacial_03()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/ASSETS/TORRETAS/Mesh_Torretas/Torreta09/c5fe1313a873_Space_Turret__3d_as.c5fe1313a873_Space_Turret__3d_as'"));
	if (MeshAsset.Succeeded())
	{
		Malla_Torreta->SetStaticMesh(MeshAsset.Object);
		// Modificar la escala del componente de malla
		FVector NewScale(3.0f, 3.0f, 3.0f); // Escala modificada
		Malla_Torreta->SetWorldScale3D(NewScale);
	}
}

void ATorreta_Espacial_03::BeginPlay()
{
	Super::BeginPlay();

}

void ATorreta_Espacial_03::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoDesdeUltimoDisparo += DeltaTime;
	if (TiempoDesdeUltimoDisparo >= TiempoDisparo) {
		Disparar_Torreta();
		TiempoDesdeUltimoDisparo = 0.0f; // Restablecer el contador
	}
}

void ATorreta_Espacial_03::Disparar_Torreta() const
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
