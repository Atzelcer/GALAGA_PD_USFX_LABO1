// Fill out your copyright notice in the Description page of Project Settings.


#include "AS_P_BUI_SISTEMA_DEFENSA_CONST.h"
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

// Sets default values
AAS_P_BUI_SISTEMA_DEFENSA_CONST::AAS_P_BUI_SISTEMA_DEFENSA_CONST()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Tiempo_Limite = 10.f; // Tiempo máximo para generar una bomba
	//Tiempo_Transcurrido = 0.0f;

}

// Called when the game starts or when spawned
void AAS_P_BUI_SISTEMA_DEFENSA_CONST::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AAS_P_BUI_SISTEMA_DEFENSA_CONST::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Contador_Tiempo += DeltaTime;

	if (Contador_Tiempo >= Tiempo_Limite)
	{
		Contador_Tiempo = 0.f; // Reiniciar el contador de tiempo
		Construir_Minas_Galacticas(0.f); // Llamar a la función que genera la bomba
	}


}


// Called to bind functionality to input
void AAS_P_BUI_SISTEMA_DEFENSA_CONST::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);

}



void AAS_P_BUI_SISTEMA_DEFENSA_CONST::Construir_Torretas(int Cantida_Torretas)
{
	Cantidad_Torretas01 = Cantida_Torretas;

	UWorld* const World = GetWorld();
	float positionY = 1700.0f;
    if (World != nullptr) {
		for (int i = 0; i < Cantidad_Torretas01; i++) {
			FVector Location(-1750.0f, positionY, 210.0f);
			Torretas = World->SpawnActor<ATorreta_Espacial_02>(Location, FRotator(0.0f, 0.0f, 210.0f));
			positionY -= 400.0f; // Mueve la posición hacia abajo para la siguiente torreta
    }
}
}

void AAS_P_BUI_SISTEMA_DEFENSA_CONST::Construir_Canones(int Cantidad_Canones)
{
	Cantidad_Canones01 = Cantidad_Canones;

	UWorld* const World = GetWorld();
	float positionY = -1000.0f;

	if (World != nullptr) {
		for (int i = 0; i < Cantidad_Canones01; i++) {
			FVector Location(1850.0f, positionY, 210.0f);
			Canones = World->SpawnActor<ACANONES_ESPACIALES_02>(Location, FRotator(0.0f, 180.0f, 0.f));
			positionY += 400.0f; // Mueve la posición hacia arriba para el siguiente cañón
		}
	}


}


void AAS_P_BUI_SISTEMA_DEFENSA_CONST::Construir_Lanza_Cohetes(int Cantidad_Lanza_Cohetes)
{
	Cantidad_Lanza_Cohetes01 = Cantidad_Lanza_Cohetes;

	UWorld* const World = GetWorld();
	float positionX = -1000.0f;

	if (World != nullptr) {
		for (int i = 0; i < Cantidad_Lanza_Cohetes01; i++) {
			FVector Location(positionX, -1790.0f, 210.0f);
			Lanza_Cohetes = World->SpawnActor<AMyLANZA_COHETES_ESPACIAL_02>(Location, FRotator(0.0f, 90.0f, 0.0f));
			positionX += 400.0f; // Mueve la posición hacia la derecha para el siguiente lanzacohetes
		}
	}
}



void AAS_P_BUI_SISTEMA_DEFENSA_CONST::Construir_Minas_Galacticas(int Cantidad_Minas)
{
	Cantidad_Minas_Galacticas01 = Cantidad_Minas;

	UWorld* const World = GetWorld();

	if (World != nullptr) {
		for (int i = 0; i < Cantidad_Minas_Galacticas01; i++) {
			float RandomSpawnX = FMath::RandRange(-1700, 1700); // Rango aleatorio en el eje X
			float RandomSpawnY = FMath::RandRange(-1700, 1700); // Rango aleatorio en el eje Y
			FVector Location(RandomSpawnX, RandomSpawnY, 210.0f);
			Minas_Galacticas = World->SpawnActor<AMyMINAS_ESPACIALES_03>(Location, FRotator(0.0f, 0.0f, 0.0f));
		}
	}
}


