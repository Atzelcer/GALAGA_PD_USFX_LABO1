// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "S_P_INT_SISTEMA_DEFENSA.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class US_P_INT_SISTEMA_DEFENSA : public UInterface
{
	GENERATED_BODY()
};



class GALAGA_PD_USFX_LABO1_API IS_P_INT_SISTEMA_DEFENSA
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void Set_Torretas() = 0;

	virtual void Set_Canones() = 0;

	virtual void Set_Lanza_Cohetes() = 0;

	virtual void Set_Minas_Galacticas() = 0;

	virtual class AAS_P_BUI_SISTEMA_DEFENSA_CONST* GetSistemaDefensa() = 0;

};
