// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GALAGA_PD_USFX_LABO1GameMode.generated.h"

UCLASS(MinimalAPI)
class AGALAGA_PD_USFX_LABO1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGALAGA_PD_USFX_LABO1GameMode();

	virtual void Tick(float DeltaTime) override;

private:


	virtual void BeginPlay() override;


	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class AS_P_BUI_SISTEMA_DEFENSA_ACT* Sistema_DefensaAA01; // Variable para el Sistema de Defensa


	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA* Sistema_DefensaAA02; // Variable para el Sistema de Defensa Furia

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA* Sistema_DefensaAA03; // Variable para el Sistema de Defensa Pasiva


	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class AS_P_BUI_Director_Sistema_Defensa* DirectorSistemaDefensa; // Variable para el Director del Sistema de Defensa


	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class AP_BU_DIRECTOR_MASTER_SHIP_E* DirectorNaveMaestra; // Variable para el Director de Nave Maestra

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class AP_BU_MASTER_SHIP_CONS* Nave_Maestra_Game; //// Variable para la Nave Maestra 

	// Variables para la creacion de Naves
	float Iniciar_Nave_Generar;
	float Tope_Creacion_Nave;
	bool bNavesCazaCreadas; // Control de creación única de naves caza
	int32 NumNavesCaza;
	float DistanciaEntreNaves;
	int32 Nivel;
	float TiempoNivel;
private:
	bool bHasSpawnedSistemaDefensaAA01 = false;
	bool bHasSpawnedSistemaDefensaAA02 = false;
	bool bHasSpawnedSistemaDefensaAA03 = false;

	float TimerSistemaDefensaAA01 = 10.0f;  // 10 segundos para spawnear el primer sistema
	float TimerSistemaDefensaAA02 = 30.0f;  // 20 segundos para spawnear el segundo sistema
	float TimerSistemaDefensaAA03 = 20.0f;  // 30 segundos para spawnear el tercer sistema

	float CurrentTime = 0.0f;  // Contador de tiempo actual

};



