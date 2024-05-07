// Fill out your copyright notice in the Description page of Project Settings.


#include "MOVIMIENTO_ALEATORIO.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UMOVIMIENTO_ALEATORIO::UMOVIMIENTO_ALEATORIO()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMOVIMIENTO_ALEATORIO::BeginPlay()
{
	Super::BeginPlay();
	NewPosition = GetOwner()->GetActorLocation(); // Inicializa la posición
	// ...
	
}


// Called every frame
void UMOVIMIENTO_ALEATORIO::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	ExecuteMovement(DeltaTime);

	// ...
}

void UMOVIMIENTO_ALEATORIO::ExecuteMovement(float DeltaTime)
{
	TimeSinceLastMove += DeltaTime;

//if (TimeSinceLastMove >= MoveInterval) {
//    // Genera nuevas posiciones dentro de los rangos dados
//    float NewX = FMath::RandRange(-240.0f, 1720.0f);
//    float NewY = FMath::RandRange(-1730.0f, 1730.0f);
//    NewPosition.X = NewX;
//    NewPosition.Y = NewY;
//
//    // Asignar la nueva posición manteniendo la misma altura (Z)
//    FVector CurrentPosition = GetOwner()->GetActorLocation();
//    NewPosition.Z = CurrentPosition.Z;
//    GetOwner()->SetActorLocation(NewPosition);
//
//    TimeSinceLastMove = 0.0f; // Restablecer el contador de tiempo
//}
}


