// Fill out your copyright notice in the Description page of Project Settings.


#include "Torreta_Espacial_01.h"
#include "PROYECTIL_LAZER.h"
#include "Components/StaticMeshComponent.h"

ATorreta_Espacial_01::ATorreta_Espacial_01()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/ASSETS/TORRETAS/Mesh_Torretas/Torreta07/1c55bc7e777c_Space_Turret_min.1c55bc7e777c_Space_Turret_min'"));
	if (MeshAsset.Succeeded())
	{
		Malla_Torreta->SetStaticMesh(MeshAsset.Object);
		// Modificar la escala del componente de malla
		FVector NewScale(1.0f, 1.0f, 1.0f); // Escala modificada
		Malla_Torreta->SetWorldScale3D(NewScale);
	}


}

void ATorreta_Espacial_01::BeginPlay()
{
	Super::BeginPlay();
}

void ATorreta_Espacial_01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoDesdeUltimoDisparo += DeltaTime;
	if (TiempoDesdeUltimoDisparo >= TiempoDisparo) {
		Disparar_Torreta();
		TiempoDesdeUltimoDisparo = 0.0f; // Restablecer el contador
	}
}

void ATorreta_Espacial_01::Disparar_Torreta() const
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
