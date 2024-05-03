// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "P_FM_FABRICA_NAVES.h"

#include "P_FM_ACTIVATION_NAVE.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AP_FM_ACTIVATION_NAVE : public AP_FM_FABRICA_NAVES
{
	GENERATED_BODY()
	
public:

	virtual ASHIP_P* MakeNave(FString NaveTypeName) override;

};