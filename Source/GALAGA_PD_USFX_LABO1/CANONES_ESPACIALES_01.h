// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CANONES_ESPACIALES.h"
#include "CANONES_ESPACIALES_01.generated.h"


UCLASS()
class GALAGA_PD_USFX_LABO1_API ACANONES_ESPACIALES_01 : public ACANONES_ESPACIALES
{
	GENERATED_BODY()

public:

	// Sets default values for this actor's properties
	ACANONES_ESPACIALES_01();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;


	void Disparar_Canones() const;

};
