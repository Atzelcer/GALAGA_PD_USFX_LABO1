// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CANONES_ESPACIALES.h"
#include "CANONES_ESPACIALES_03.generated.h"


UCLASS()
class GALAGA_PD_USFX_LABO1_API ACANONES_ESPACIALES_03 : public ACANONES_ESPACIALES
{
	GENERATED_BODY()
	

public:
	ACANONES_ESPACIALES_03();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Disparar_Canones() const;
};
