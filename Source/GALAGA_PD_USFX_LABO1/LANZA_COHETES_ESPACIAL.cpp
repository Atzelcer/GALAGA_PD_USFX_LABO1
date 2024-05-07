// Fill out your copyright notice in the Description page of Project Settings.


#include "LANZA_COHETES_ESPACIAL.h"
#include "PROYECTIL_MISSIL_P.h"

// Sets default values
ALANZA_COHETES_ESPACIAL::ALANZA_COHETES_ESPACIAL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Malla_Cohete = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_Cohete"));
	RootComponent = Malla_Cohete;



}

// Called when the game starts or when spawned
void ALANZA_COHETES_ESPACIAL::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALANZA_COHETES_ESPACIAL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoDesdeUltimoDisparo += DeltaTime;
	if (TiempoDesdeUltimoDisparo >= TiempoDisparo) {
		Disparar_Cohetes();
		TiempoDesdeUltimoDisparo = 0.0f; // Restablecer el contador
	}

}

void ALANZA_COHETES_ESPACIAL::Disparar_Cohetes() const
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

