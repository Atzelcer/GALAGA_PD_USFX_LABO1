// Fill out your copyright notice in the Description page of Project Settings.


#include "CANONES_ESPACIALES.h"
#include "PROYECTIL_ESFERA_ENERGIA.h"

// Sets default values
ACANONES_ESPACIALES::ACANONES_ESPACIALES()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Malla_Canone = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/ASSETS/Torreta02/327ca1207f93_Space_Turret__3d_as.327ca1207f93_Space_Turret__3d_as'"));
	RootComponent = Malla_Canone;
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/ASSETS/Torreta02/327ca1207f93_Space_Turret__3d_as.327ca1207f93_Space_Turret__3d_as'"));
	//if (MeshAsset.Succeeded())
	//{
	//	Malla_Canone->SetStaticMesh(MeshAsset.Object);
	//	// Modificar la escala del componente de malla
	//	FVector NewScale(1.0f, 1.0f, 1.0f); // Escala modificada
	//	Malla_Canone->SetWorldScale3D(NewScale);
	//}

	TiempoDesdeUltimoDisparo = 0.0f;
	TiempoDisparo = 2.0f; 

}

// Called when the game starts or when spawned
void ACANONES_ESPACIALES::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACANONES_ESPACIALES::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	TiempoDesdeUltimoDisparo += DeltaTime;
	if (TiempoDesdeUltimoDisparo >= TiempoDisparo) {
		Disparar_Canones();
		TiempoDesdeUltimoDisparo = 0.0f;
	}
}



void ACANONES_ESPACIALES::Disparar_Canones()const
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

