// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PROYECTIL_P.h"
#include "Escudo_Nave_M.h"
#include "P_FM_FABRICA_NAVES.h"
#include "PROYECTIL_LAZER.h"
#include "PROYECTIL_MISSIL_P.h"
#include "PROYECTIL_ESFERA_ENERGIA.h"
#include "MovementStrategy.h"
#include "PROYECTIL_BOMBA_EXP.h"
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

	virtual void Set_Proyectil_DEnergia(FString _Proyectile_Esfera_Energia) = 0;
	
	virtual void Set_Proyectil_DMissil(FString _Proyectile_Misil) = 0;
	
	virtual void Set_Proyectil_DLazer(FString _Proyectile_Lazer) = 0;
	
	virtual void Set_Proyectil_DBomba( FString _Proyectile_Bomba) = 0;

	virtual void Disparar_Proyectil(UClass* ProjectileClass) = 0;
	
	virtual void SetMovementStrategy(IMovementStrategy* NewStrategy) = 0;

	virtual void Caracteristicas_Nave_Maestra() = 0;

};
