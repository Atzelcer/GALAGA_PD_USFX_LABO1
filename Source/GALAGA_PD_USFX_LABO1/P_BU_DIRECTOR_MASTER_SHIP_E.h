// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "P_BU_INT01_SHIP_MASTER_E.h"
#include "P_BU_MASTER_SHIP_CONS_02.h"
#include "BUI_INT_NAVE_MAESTRA.h"
#include "BIU_SHIP_MASTER_OFENSIVA.h"
#include "P_BU_DIRECTOR_MASTER_SHIP_E.generated.h"

/**
 * Clase del Director del patrón Builder.
 * Se encarga de coordinar la construcción de la nave maestra utilizando un constructor concreto.
*/

class IP_BU_INT01_SHIP_MASTER_E;

UCLASS()
class GALAGA_PD_USFX_LABO1_API AP_BU_DIRECTOR_MASTER_SHIP_E : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AP_BU_DIRECTOR_MASTER_SHIP_E();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void ConstruirNaveMaestra();
	void Set_Constructor_Nave_Maestra(AActor* Builder);


	class AP_BU_MASTER_SHIP_CONS_02* Obtener_Nave_Maestra();

	//class BIU_SHIP_MASTER_OFENSIVA* Obtener_Nave_Ofensiva();

private: 

	IP_BU_INT01_SHIP_MASTER_E* Constructor_Nave;

};
