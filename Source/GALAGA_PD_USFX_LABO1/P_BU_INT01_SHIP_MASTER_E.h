// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PROYECTIL_LAZER.h"
#include "PROYECTIL_MISSIL_P.h"
#include "PROYECTIL_ESFERA_ENERGIA.h"
#include "PROYECTIL_BOMBA_EXP.h"
#include "P_BU_INT01_SHIP_MASTER_E.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UP_BU_INT01_SHIP_MASTER_E : public UInterface
{
	GENERATED_BODY()
};

class GALAGA_PD_USFX_LABO1_API IP_BU_INT01_SHIP_MASTER_E
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//Primera interfaz
	
	virtual void Construir_Proyectil_Lazer() = 0;
	
	virtual void Construir_Proyectil_Misil() = 0;
	
	virtual void Construir_Proyectil_Esfera_Energia() = 0;

	virtual void Construir_Proyectil_Bomba() = 0;



	virtual class AP_BU_MASTER_SHIP_CONS_02* Get_Master_Maestra() = 0;

};
