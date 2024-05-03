// Fill out your copyright notice in the Description page of Project Settings.


#include "Escudo_Nave_M.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEscudo_Nave_M::AEscudo_Nave_M()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Inicializar el componente de malla del escudo
	Escudo_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShieldMesh"));
	RootComponent = Escudo_Mesh;

	// Cargar el mesh del escudo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShieldMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	if (ShieldMeshAsset.Succeeded())
	{
		Escudo_Mesh->SetStaticMesh(ShieldMeshAsset.Object);
		Escudo_Mesh->SetWorldScale3D(FVector(-10.f, 20.f, 10.f)); // Escalar la malla

	}

}

// Called when the game starts or when spawned
void AEscudo_Nave_M::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscudo_Nave_M::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

