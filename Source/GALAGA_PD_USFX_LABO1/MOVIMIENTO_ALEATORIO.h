// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MOVIMIENTO_ALEATORIO.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_PD_USFX_LABO1_API UMOVIMIENTO_ALEATORIO : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMOVIMIENTO_ALEATORIO();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
