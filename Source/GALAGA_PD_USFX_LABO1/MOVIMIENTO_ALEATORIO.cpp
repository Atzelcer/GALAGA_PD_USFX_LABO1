// Fill out your copyright notice in the Description page of Project Settings.


#include "MOVIMIENTO_ALEATORIO.h"

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

	// ...
	
}


// Called every frame
void UMOVIMIENTO_ALEATORIO::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

