// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LANZA_COHETES_ESPACIAL.h"
#include "MyLANZA_COHETES_ESPACIAL_01.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AMyLANZA_COHETES_ESPACIAL_01 : public ALANZA_COHETES_ESPACIAL
{
	GENERATED_BODY()
	

public:

	AMyLANZA_COHETES_ESPACIAL_01();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void Disparar_Cohetes()const override;
};
