// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PROYECTIL_LAZER.h"
#include "PROYECTIL_MISSIL_P.h"
#include "PROYECTIL_ESFERA_ENERGIA.h"
#include "PROYECTIL_BOMBA_EXP.h"
#include "BUI_INT_NAVE_MAESTRA.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBUI_INT_NAVE_MAESTRA : public UInterface
{
	GENERATED_BODY()
};

class GALAGA_PD_USFX_LABO1_API IBUI_INT_NAVE_MAESTRA
{
	GENERATED_BODY()

public:

	virtual void Construir_Proyectil_Lazer() = 0;

	virtual void Construir_Proyectil_Misil() = 0;

	virtual void Construir_Proyectil_Esfera_Energia() = 0;

	virtual void Construir_Proyectil_Bomba() = 0;


	virtual class AP_BU_MASTER_SHIP_CONS_02* Get_Master_Maestra() = 0;

};
