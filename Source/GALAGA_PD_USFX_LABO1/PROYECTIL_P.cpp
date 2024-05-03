// Fill out your copyright notice in the Description page of Project Settings.


#include "PROYECTIL_P.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"

// Sets default values
APROYECTIL_P::APROYECTIL_P()
{
	// Establece este actor para llamar a Tick() en cada cuadro
	PrimaryActorTick.bCanEverTick = true;

	// Creando la malla del proyectil
	Projectil_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectil_Mesh"));
	RootComponent = Projectil_Mesh;

	//// Controlando el movimiento del proyectil
	Projectil_Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectil_Movement"));
	Projectil_Movement->UpdatedComponent = Projectil_Mesh;
	Projectil_Movement->InitialSpeed = 0.f; // velocidad inicial
	Projectil_Movement->MaxSpeed = 0.f; // velocidad máxima
	Projectil_Movement->bRotationFollowsVelocity = true;
	Projectil_Movement->bShouldBounce = false; // no rebota
	Projectil_Movement->ProjectileGravityScale = 0.f; // sin gravedad

	// Creando el componente de colisión del proyectil
	Projectil_Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Projectil_Collision"));
	Projectil_Collision->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void APROYECTIL_P::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APROYECTIL_P::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APROYECTIL_P::NotifyActorBeginOverlap(AActor* OtherActor)
{
}

void APROYECTIL_P::Efectos_De_Colision()
{
}

