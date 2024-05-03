// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "P_FM_FABRICA_NAVES.h"
#include "P_FM_CREATE_SQUADRON_01.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AP_FM_CREATE_SQUADRON_01 : public AP_FM_FABRICA_NAVES
{
	GENERATED_BODY()

public:

	virtual ASHIP_P* MakeNave(FString NaveTypeName) override;
	
};
