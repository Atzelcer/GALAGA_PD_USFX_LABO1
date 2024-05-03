// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PROYECTIL_NAVE_P.h"
#include "PROYECTIL_MISSIL_P.generated.h"


UCLASS()
class GALAGA_PD_USFX_LABO1_API APROYECTIL_MISSIL_P : public APROYECTIL_NAVE_P
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APROYECTIL_MISSIL_P();

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	virtual void Efectos_De_Colision() override;
	
};
