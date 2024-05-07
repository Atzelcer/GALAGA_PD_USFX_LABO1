// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "P_BU_INT01_SHIP_MASTER_E.h"
#include "P_BU_MASTER_SHIP_CONS_02.h"
#include "P_BU_INT02_ACC_SHIP_MASTER_E.h"
#include "P_BU_MASTER_SHIP_CONS.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AP_BU_MASTER_SHIP_CONS : public APawn, public IP_BU_INT01_SHIP_MASTER_E
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AP_BU_MASTER_SHIP_CONS();


	UPROPERTY(VisibleAnywhere, Category = "Nave_Maestra")
	class AP_BU_MASTER_SHIP_CONS_02* Nave_Maestra;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:


	virtual void Construir_Proyectil_Lazer() override;

	virtual void Construir_Proyectil_Misil() override;

	virtual void Construir_Proyectil_Esfera_Energia() override;

	virtual void Construir_Proyectil_Bomba() override;

	AP_BU_MASTER_SHIP_CONS_02* Get_Master_Maestra() override;


};
