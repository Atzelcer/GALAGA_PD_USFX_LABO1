// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MovementStrategy.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMovementStrategy : public UInterface
{
	GENERATED_BODY()
};


class GALAGA_PD_USFX_LABO1_API IMovementStrategy
{
	GENERATED_BODY()

public:
	virtual void ExecuteMovement(float DeltaTime) = 0;
};
