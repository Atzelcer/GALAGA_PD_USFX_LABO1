// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "P_BU_INT02_ACC_SHIP_MASTER_E.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UP_BU_INT02_ACC_SHIP_MASTER_E : public UInterface
{
	GENERATED_BODY()
};


class GALAGA_PD_USFX_LABO1_API IP_BU_INT02_ACC_SHIP_MASTER_E
{
	GENERATED_BODY()

public:

	virtual void SetShieldDistance(float Distance) = 0;
	virtual void SetMesh(UStaticMeshComponent* Malla_Maestro) = 0;
	virtual void Caracteristicas_Nave_Maestra() = 0;
	//virtual void SetMeshVisibility(bool Visible) = 0;

};
