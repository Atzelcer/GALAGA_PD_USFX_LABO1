// Fill out your copyright notice in the Description page of Project Settings.


#include "P_BU_DIRECTOR_MASTER_SHIP_E.h"

// Sets default values
AP_BU_DIRECTOR_MASTER_SHIP_E::AP_BU_DIRECTOR_MASTER_SHIP_E()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AP_BU_DIRECTOR_MASTER_SHIP_E::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP_BU_DIRECTOR_MASTER_SHIP_E::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AP_BU_DIRECTOR_MASTER_SHIP_E::Set_Constructor_Nave_Maestra(AActor* Builder)
{

	Constructor_Nave = Cast<IP_BU_INT01_SHIP_MASTER_E>(Builder);

	if (!Constructor_Nave)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Lanzamiento no valido! ERROR INESPERADO ")));
		UE_LOG(LogTemp, Error, TEXT("El constructor asignado no es válido o no implementa IBUI_INT_NAVE_MAESTRA"));
	}
}



void AP_BU_DIRECTOR_MASTER_SHIP_E::ConstruirNaveMaestra()
{

	if (!Constructor_Nave)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Lanzamiento no valido! ERROR INESPERADO ")));
		UE_LOG(LogTemp, Error, TEXT("El constructor asignado no es válido o no implementa IBUI_INT_NAVE_MAESTRA"));
		return;
	}
	Constructor_Nave->Construir_Proyectil_Lazer();
	Constructor_Nave->Construir_Proyectil_Misil();
	Constructor_Nave->Construir_Proyectil_Esfera_Energia();
	Constructor_Nave->Construir_Proyectil_Bomba();
}


AP_BU_MASTER_SHIP_CONS_02* AP_BU_DIRECTOR_MASTER_SHIP_E::Obtener_Nave_Maestra()
{
	if (Constructor_Nave)
	{
		return Constructor_Nave->Get_Master_Maestra();
	
	}
	//Registrar si el Constructor es NULL
	UE_LOG(LogTemp, Error, TEXT("Obtener_Nave_Maestra(): Devuelve nullptr"));
	return nullptr;
}
