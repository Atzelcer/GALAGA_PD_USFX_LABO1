// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BUI_INT_NAVE_MAESTRA.h"
#include "BIU_SHIP_MASTER_OFENSIVA.h"
#include "UBUI_CONSTRUCTOR_NAVE_OFENSIVA.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AUBUI_CONSTRUCTOR_NAVE_OFENSIVA : public AActor, public IBUI_INT_NAVE_MAESTRA
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUBUI_CONSTRUCTOR_NAVE_OFENSIVA();

	UPROPERTY(VisibleAnywhere, Category = "Nave_Maestra")
	class ABIU_SHIP_MASTER_OFENSIVA* Nave_Maestra_Ofensiva;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Construir_Proyectil_Lazer() override;

	virtual void Construir_Proyectil_Misil() override;

	virtual void Construir_Proyectil_Esfera_Energia() override;

	virtual void Construir_Proyectil_Bomba() override;



	AP_BU_MASTER_SHIP_CONS_02* Get_Master_Maestra() override;



};
