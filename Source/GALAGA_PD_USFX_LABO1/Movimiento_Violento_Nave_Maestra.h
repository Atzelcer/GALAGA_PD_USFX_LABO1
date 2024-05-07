// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovementStrategy.h"
#include "Movimiento_Violento_Nave_Maestra.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_PD_USFX_LABO1_API UMovimiento_Violento_Nave_Maestra : public UActorComponent, public IMovementStrategy
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMovimiento_Violento_Nave_Maestra();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	virtual void ExecuteMovement(float DeltaTime) override;

private:
	FVector LastDirection;
	float ChangeDirectionInterval;
	float TimeSinceLastChange;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MaxSpeed = 600.0f;  // Max speed for violent movement

	UPROPERTY(EditAnywhere, Category = "Movement")
	float DirectionChangeFrequency = 0.5f;


		
};
