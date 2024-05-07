// Fill out your copyright notice in the Description page of Project Settings.


#include "MINAS_ESPACIALES.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"

#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AMINAS_ESPACIALES::AMINAS_ESPACIALES()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Malla_Mina = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_Mina"));
	RootComponent = Malla_Mina;
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	//if (MeshAsset.Succeeded())
	//{
	//	Malla_Mina->SetStaticMesh(MeshAsset.Object);
	//	// Modificar la escala del componente de malla
	//	FVector NewScale(1.0f, 1.0f, 1.0f); // Escala modificada
	//	Malla_Mina->SetWorldScale3D(NewScale);
	//}

	//Creando el componente de colisión del proyectil
	BombCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Colision_Bomba"));
	BombCollision->SetupAttachment(RootComponent);
	BombCollision->InitSphereRadius(100.f);

	LifeTime = 1.98f; // Tiempo de vida inicial de la bomba
	//VidBom = 30.0f; // Vida inicial de la bomba

	TimeSinceSpawned = 0.0f;  // Tiempo acumulado desde que la bomba fue creada
	ExplosionDelay = 5.0f;    // Tiempo en segundos para la explosión

	Conpuerta = true;

}

// Called when the game starts or when spawned
void AMINAS_ESPACIALES::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMINAS_ESPACIALES::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMINAS_ESPACIALES::NotifyActorBeginOverlap(AActor* OtherActor)
{
}

void AMINAS_ESPACIALES::Componentes_Explosion()
{
	if (ExplosionParticles) {
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionParticles, GetActorLocation());
	}
	if (ExplosionSound) {
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplosionSound, GetActorLocation());
	}
	// Destruir la bomba al impactar con un objeto
	Destroy();
}

