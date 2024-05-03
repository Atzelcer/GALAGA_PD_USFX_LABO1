// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_PD_USFX_LABO1GameMode.h"
#include "GALAGA_PD_USFX_LABO1Pawn.h"
#include "P_FM_CREATE_SQUADRON_01.h"
#include "P_FM_CREATE_SQUADRON_02.h"
#include "P_FM_FABRICA_NAVES.h"
#include "P_BU_MASTER_SHIP_CONS.h"

#include "P_BU_DIRECTOR_MASTER_SHIP_E.h"
//#include "AMyHUD.h"

AGALAGA_PD_USFX_LABO1GameMode::AGALAGA_PD_USFX_LABO1GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our character class
	DefaultPawnClass = AGALAGA_PD_USFX_LABO1Pawn::StaticClass();

	// inicializando variables para spawnear naves
	Iniciar_Nave_Generar = 0.f;
	Tope_Creacion_Nave = 5.f;
	Nivel = 1;
	TiempoNivel = 0.0f;
	//HUDClass = AAMyHUD::StaticClass();
}

void AGALAGA_PD_USFX_LABO1GameMode::BeginPlay()
{
	Super::BeginPlay();
	//DiretorNaveMaestra = GetWorld()->SpawnActor<AP_BU_DIRECTOR_MASTER_SHIP_E>(AP_BU_DIRECTOR_MASTER_SHIP_E::StaticClass());
	//NaveMaestra_Game = GetWorld()->SpawnActor<AP_BU_MASTER_SHIP_CONS>(AP_BU_MASTER_SHIP_CONS::StaticClass());
	//DiretorNaveMaestra->SetDirectorNaveMaestra(NaveMaestra_Game);
	//DiretorNaveMaestra->ConstruirNaveMaestra(FVector(1428.0, 0.0, 210.0));

	// Crear el director
	DiretorNaveMaestra = GetWorld()->SpawnActor<AP_BU_DIRECTOR_MASTER_SHIP_E>(AP_BU_DIRECTOR_MASTER_SHIP_E::StaticClass());

	// Crear el constructor concreto (la nave ofensiva)
	NaveMaestra_Game = GetWorld()->SpawnActor<ABIU_SHIP_MASTER_OFENSIVA>(ABIU_SHIP_MASTER_OFENSIVA::StaticClass());

	// Configurar el constructor en el director
	DiretorNaveMaestra->SetDirectorNaveMaestra(NaveMaestra_Game);

	DiretorNaveMaestra->ConstruirNaveMaestra(FVector(1428.0, 0.0, 210.0));

	//// Construir la nave en la posición deseada
	//FVector UbicacionNave = FVector(1428.0, 0.0, 210.0); // Establece la ubicación según sea necesario
	//DiretorNaveMaestra->ConstruirNaveMaestra(UbicacionNave);

}


void AGALAGA_PD_USFX_LABO1GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	//// Incrementar el tiempo del nivel actual
	//TiempoNivel += DeltaTime;

	//if (GEngine)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, FString::Printf(TEXT("Nivel: %d"), Nivel), true);
	//}


	//if (GEngine)
	//{
	//	GEngine->AddOnScreenDebugMessage(1, 0.0f, FColor::Purple, FString::Printf(TEXT("Tiempo: %f"), TiempoNivel), true);
	//}



	//// Control del tiempo de nivel y cambio de nivel
	//if (Nivel == 1 && TiempoNivel > 15.0f) {
	//	Nivel = 2;  // Cambiar al nivel 2
	//}


	//if (Nivel == 2 && TiempoNivel >= 40.f)
	//{
	//	Nivel = 1;  // Cambiar al nivel 1
	//	TiempoNivel = 0.0f;  // Restablecer el timer para el nivel 1
	//}

	//// Control de creación de naves basado en intervalos configurables
	//Iniciar_Nave_Generar += DeltaTime;
	//if (Iniciar_Nave_Generar >= Tope_Creacion_Nave) {
	//	Iniciar_Nave_Generar = 0.f;
	//	float AparicionNave = FMath::RandRange(0.0f, 100.0f);  // Generar un número aleatorio entre 0 y 100

	//	AP_FM_FABRICA_NAVES* Fabrica_Naves = nullptr;
	//	// Crear naves según el nivel y la probabilidad
	//	if (Nivel == 1) {
	//		if (AparicionNave > 10) {  // probabilidad para Nave Caza and Nodriza
	//			Fabrica_Naves = GetWorld()->SpawnActor<AP_FM_CREATE_SQUADRON_01>(AP_FM_CREATE_SQUADRON_01::StaticClass());
	//			Fabrica_Naves->getNave("Nave_Nivel_01");

	//			Fabrica_Naves = GetWorld()->SpawnActor<AP_FM_CREATE_SQUADRON_01>(AP_FM_CREATE_SQUADRON_01::StaticClass());
	//			Fabrica_Naves->getNave("Nave_Nivel_02");
	//		}

	//	}
	//	if (Nivel == 2) {
	//		//if (AparicionNave < 30) {  // 30% probabilidad para Nave Espia
	//		//	Fabrica_Naves = GetWorld()->SpawnActor<ACreate_Naves_Niv_02>(ACreate_Naves_Niv_02::StaticClass());
	//		//	Fabrica_Naves->getNave("Nave_Espia");
	//		//}
	//		if (AparicionNave > 10) {  // probabilidad para Nave Elite and Espia
	//			Fabrica_Naves = GetWorld()->SpawnActor<AP_FM_CREATE_SQUADRON_02>(AP_FM_CREATE_SQUADRON_02::StaticClass());
	//			Fabrica_Naves->getNave("Nave_Nivel_03");

	//			Fabrica_Naves = GetWorld()->SpawnActor<AP_FM_CREATE_SQUADRON_02>(AP_FM_CREATE_SQUADRON_02::StaticClass());
	//			Fabrica_Naves->getNave("Nave_Nivel_04");
	//		}
	//	}
	//}

}
