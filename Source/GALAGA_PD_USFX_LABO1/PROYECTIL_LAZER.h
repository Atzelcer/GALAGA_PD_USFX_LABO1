// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PROYECTIL_NAVE_P.h"
#include "PROYECTIL_LAZER.generated.h"


UCLASS()
class GALAGA_PD_USFX_LABO1_API APROYECTIL_LAZER : public APROYECTIL_NAVE_P
{
	GENERATED_BODY()

public:

	APROYECTIL_LAZER();

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	virtual void Efectos_De_Colision() override;
	
};
