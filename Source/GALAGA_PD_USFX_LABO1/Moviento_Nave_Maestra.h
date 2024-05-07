// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovementStrategy.h"
#include "Moviento_Nave_Maestra.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_PD_USFX_LABO1_API UMoviento_Nave_Maestra : public UActorComponent, public IMovementStrategy
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMoviento_Nave_Maestra();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	virtual void ExecuteMovement(float DeltaTime) override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	FVector NewPosition;
	float TimeSinceLastMove = 0.0f;
	float MoveInterval = 1.0f;


	FVector MovementDirection = FVector(1, 1, 0);  // Inicializa la dirección de movimiento hacia la derecha y hacia arriba
	float MovementSpeed = 300.0f;

		
};
