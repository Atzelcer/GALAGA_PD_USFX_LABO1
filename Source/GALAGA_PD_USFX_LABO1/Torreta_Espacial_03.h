// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Torreta_Espacial_02.h"
#include "Torreta_Espacial_03.generated.h"


UCLASS()
class GALAGA_PD_USFX_LABO1_API ATorreta_Espacial_03 : public ATorreta_Espacial_02
{
	GENERATED_BODY()
	
public:

	ATorreta_Espacial_03();


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Disparar_Torreta()const;


};
