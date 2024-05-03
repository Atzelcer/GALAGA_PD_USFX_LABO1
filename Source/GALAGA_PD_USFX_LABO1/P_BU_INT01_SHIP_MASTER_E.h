// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PROYECTIL_P.h"
#include "Escudo_Nave_M.h"
#include "P_FM_FABRICA_NAVES.h"
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
	virtual void Construir_Escudo(AEscudo_Nave_M* Escudo) = 0;
	virtual void Construir_Proyectil(APROYECTIL_P* Proyectil) = 0;
	virtual void Construir_Fabrica_Naves(AP_FM_FABRICA_NAVES* Fabrica_Nave) = 0;
	virtual void Ubicacion_Nave_Maestra(FVector Posicion) = 0;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) = 0;
	virtual void BuildMesh() = 0;
	virtual void FireProjectile(float DeltaTime) = 0;

	virtual class AP_BU_MASTER_SHIP_CONS_02* Get_Master_Maestra() = 0;

};
