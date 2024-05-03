// Fill out your copyright notice in the Description page of Project Settings.


#include "SHIP_P.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GALAGA_PD_USFX_LABO1Pawn.h"

// Sets default values
ASHIP_P::ASHIP_P()
{
    // Para que se vea mejor los Fotogramas del videojuego
    PrimaryActorTick.bCanEverTick = true;


    // Crea un componente de escena que sirve como raíz del actor
    Scena = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    RootComponent = Scena;

    // Creando la Malla para la nave Padre
    Nave_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave_Mesh"));
    // Establecer la malla de la nave como el componente raíz de la nave
    Nave_Mesh->SetupAttachment(RootComponent);

    // Crear un componente de colisión en forma de caja y establecerlo como el componente raíz de la nave
    Colision_Nave = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision_Nave"));

    // Establecer la caja de colisión de la nave como el componente raíz de la nave
    Colision_Nave->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ASHIP_P::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASHIP_P::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASHIP_P::NotifyActorBeginOverlap(AActor* OtherActor)
{
}

void ASHIP_P::ComponentesUE_Sistema()
{
}

void ASHIP_P::Recibir_Danio()
{
}

