// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PROYECTIL_NAVE_P.h"
#include "PROYECTIL_BOMBA_EXP.generated.h"


UCLASS()
class GALAGA_PD_USFX_LABO1_API APROYECTIL_BOMBA_EXP : public APROYECTIL_NAVE_P
{
	GENERATED_BODY()

public:

	APROYECTIL_BOMBA_EXP();

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	virtual void Efectos_De_Colision() override;



};
