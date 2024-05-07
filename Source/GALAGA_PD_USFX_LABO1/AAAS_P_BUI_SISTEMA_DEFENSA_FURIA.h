// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "S_P_INT_SISTEMA_DEFENSA.h"

#include "AAAS_P_BUI_SISTEMA_DEFENSA_FURIA.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA : public APawn,public IS_P_INT_SISTEMA_DEFENSA
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class AAS_P_BUI_SISTEMA_DEFENSA_CONST* Cons_Sis;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Set_Torretas() override;

	virtual void Set_Canones() override;

	virtual void Set_Lanza_Cohetes() override;

	virtual void Set_Minas_Galacticas() override;

	virtual class AAS_P_BUI_SISTEMA_DEFENSA_CONST* GetSistemaDefensa() override;

};
