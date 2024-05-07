// Fill out your copyright notice in the Description page of Project Settings.


#include "Movimiento_Violento_Nave_Maestra.h"

#include "Kismet/GameplayStatics.h"


// Sets default values for this component's properties
UMovimiento_Violento_Nave_Maestra::UMovimiento_Violento_Nave_Maestra()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	ChangeDirectionInterval = 0.1f;
	TimeSinceLastChange = 0.0f;

	// ...
}


// Called when the game starts
void UMovimiento_Violento_Nave_Maestra::BeginPlay()
{
	Super::BeginPlay();
	LastDirection = FVector(FMath::RandRange(-1, 1), FMath::RandRange(-1, 1), 0).GetClampedToMaxSize(1.0f);
}


// Called every frame
void UMovimiento_Violento_Nave_Maestra::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    ExecuteMovement(DeltaTime);
}

void UMovimiento_Violento_Nave_Maestra::ExecuteMovement(float DeltaTime)
{
    TimeSinceLastChange += DeltaTime;
    if (TimeSinceLastChange >= ChangeDirectionInterval)
    {
        LastDirection = FVector(FMath::RandRange(-1, 1), FMath::RandRange(-1, 1), 0).GetClampedToMaxSize(1.0f);
        TimeSinceLastChange = 0.0f;
        ChangeDirectionInterval = FMath::FRandRange(0.1, DirectionChangeFrequency);  // Randomize time until next direction change
    }

    FVector CurrentLocation = GetOwner()->GetActorLocation();
    FVector NewLocation = CurrentLocation + LastDirection * MaxSpeed * DeltaTime;
    NewLocation.X = FMath::Clamp(NewLocation.X, -240.0f, 1720.0f);
    NewLocation.Y = FMath::Clamp(NewLocation.Y, -1730.0f, 1730.0f);

    GetOwner()->SetActorLocation(NewLocation);
}
