// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "S_P_INT_02_SISTEMA_DEFENSA.h"

#include "S_P_BUI_SISTEMA_DEFENSA_ACT.h"
#include "S_P_BUI_Director_Sistema_Defensa.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AS_P_BUI_Director_Sistema_Defensa : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AS_P_BUI_Director_Sistema_Defensa();


public:

	IS_P_INT_SISTEMA_DEFENSA* Construir_DefensaAA;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	void Set_Construir_Sistema_Defensa(AActor* Construir_SD);

	void Construir_Sistema_Defensa();

	class AAS_P_BUI_SISTEMA_DEFENSA_CONST* Obtener_Sistema_DefensaAA();

};
