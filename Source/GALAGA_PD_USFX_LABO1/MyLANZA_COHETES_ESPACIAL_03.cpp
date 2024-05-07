// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLANZA_COHETES_ESPACIAL_03.h"
#include "PROYECTIL_MISSIL_P.h"

AMyLANZA_COHETES_ESPACIAL_03::AMyLANZA_COHETES_ESPACIAL_03()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/ASSETS/TORRETAS/Mesh_Torretas/Torreta06/226dfeb1035e_dame_una_nave_espac.226dfeb1035e_dame_una_nave_espac'"));
	if (MeshAsset.Succeeded())
	{
		Malla_Cohete->SetStaticMesh(MeshAsset.Object);
		// Modificar la escala del componente de malla
		FVector NewScale(1.0f, 1.0f, 1.0f); // Escala modificada
		Malla_Cohete->SetWorldScale3D(NewScale);
	}
	TiempoDesdeUltimoDisparo = 0.0f;
	TiempoDisparo = 2.0f; // Tiempo entre disparos, en segundos
}

void AMyLANZA_COHETES_ESPACIAL_03::BeginPlay()
{
	Super::BeginPlay();
}

void AMyLANZA_COHETES_ESPACIAL_03::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoDesdeUltimoDisparo += DeltaTime;
	if (TiempoDesdeUltimoDisparo >= TiempoDisparo) {
		Disparar_Cohetes();
		TiempoDesdeUltimoDisparo = 0.0f; // Restablecer el contador
	}
}

void AMyLANZA_COHETES_ESPACIAL_03::Disparar_Cohetes() const
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
