// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "S_P_INT_02_SISTEMA_DEFENSA.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class US_P_INT_02_SISTEMA_DEFENSA : public UInterface
{
	GENERATED_BODY()
};


class GALAGA_PD_USFX_LABO1_API IS_P_INT_02_SISTEMA_DEFENSA
{
	GENERATED_BODY()

public:

	virtual void Construir_Torretas(int Cantida_Torretas) = 0;

	virtual void Construir_Canones(int Cantidad_Canones) = 0;

	virtual void Construir_Lanza_Cohetes(int Cantidad_Lanza_Cohetes) = 0;

	virtual void Construir_Minas_Galacticas(int Cantidad_Minas) = 0;
};
