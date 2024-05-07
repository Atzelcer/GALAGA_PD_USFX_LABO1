// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "S_P_INT_02_SISTEMA_DEFENSA.h"
#include "S_P_BUI_SISTEMA_DEFENSA_ACT.h"
#include "AAS_P_BUI_SISTEMA_DEFENSA_PASIVA.h"
#include "Torreta_Espacial.h"
#include "Torreta_Espacial_01.h"
#include "Torreta_Espacial_02.h"
#include "Torreta_Espacial_03.h"
#include "MINAS_ESPACIALES.h"
#include "MyMINAS_ESPACIALES_01.h"
#include "MyMINAS_ESPACIALES_02.h"
#include "MyMINAS_ESPACIALES_03.h"
#include "MyLANZA_COHETES_ESPACIAL_01.h"
#include "MyLANZA_COHETES_ESPACIAL_02.h"
#include "MyLANZA_COHETES_ESPACIAL_03.h"
#include "LANZA_COHETES_ESPACIAL.h"
#include "CANONES_ESPACIALES_01.h"
#include "CANONES_ESPACIALES_02.h"
#include "CANONES_ESPACIALES_03.h"
#include "CANONES_ESPACIALES.h"
#include "AAAS_P_BUI_SISTEMA_DEFENSA_FURIA.h"

#include "AS_P_BUI_SISTEMA_DEFENSA_CONST.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AAS_P_BUI_SISTEMA_DEFENSA_CONST : public APawn, public IS_P_INT_02_SISTEMA_DEFENSA
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAS_P_BUI_SISTEMA_DEFENSA_CONST();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	int Cantidad_Torretas01;

	int Cantidad_Canones01;

	int Cantidad_Lanza_Cohetes01;

	int Cantidad_Minas_Galacticas01;

	float Contador_Tiempo; // Tiempo acumulado para el siguiente spawn

	float Tiempo_Limite; // Tiempo deseado entre spawns, 10 segundos

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	class AMyMINAS_ESPACIALES_03* Minas_Galacticas;

	class ACANONES_ESPACIALES_02* Canones;

	class ATorreta_Espacial_02* Torretas;

	class AMyLANZA_COHETES_ESPACIAL_02* Lanza_Cohetes;



	float Tiempo_Transcurrido;

	int Contador;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	void Construir_Torretas(int Cantida_Torretas) override;

	void Construir_Canones(int Cantidad_Canones) override;

	void Construir_Lanza_Cohetes(int Cantidad_Lanza_Cohetes) override;

	void Construir_Minas_Galacticas(int Cantidad_Minas) override;


	//void Construir_Sistema_Defensa();



};
