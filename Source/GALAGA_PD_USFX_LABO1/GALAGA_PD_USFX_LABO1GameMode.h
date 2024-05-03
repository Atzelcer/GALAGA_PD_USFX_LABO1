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

	class AP_BU_DIRECTOR_MASTER_SHIP_E* DiretorNaveMaestra; // Variable para el Director de Nave Maestra
	class ABIU_SHIP_MASTER_OFENSIVA* NaveMaestra_Game; //// Variable para la Nave Maestra 

	// Variables para la creacion de Naves
	float Iniciar_Nave_Generar;
	float Tope_Creacion_Nave;
	bool bNavesCazaCreadas; // Control de creación única de naves caza
	int32 NumNavesCaza;
	float DistanciaEntreNaves;
	int32 Nivel;
	float TiempoNivel;
};



