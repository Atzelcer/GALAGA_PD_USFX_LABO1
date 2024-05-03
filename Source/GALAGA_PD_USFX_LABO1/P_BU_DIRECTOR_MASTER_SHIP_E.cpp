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
	//Super::BeginPlay();
	
}

// Called every frame
void AP_BU_DIRECTOR_MASTER_SHIP_E::Tick(float DeltaTime)
{
	/*Super::Tick(DeltaTime);*/

}

void AP_BU_DIRECTOR_MASTER_SHIP_E::ConstruirNaveMaestra(FVector Ubicacion_Nave)
{
	if (!Constructor)
	{
		UE_LOG(LogTemp, Error, TEXT("Constructor no definido. No se puede construir la nave maestra."));
		return;
	}

	Constructor->Ubicacion_Nave_Maestra(Ubicacion_Nave);
	Constructor->ConstruirEscudo(NewObject<AEscudo_Nave_M>(this));
	Constructor->ConstruirProyectil(NewObject<APROYECTIL_P>(this));
	Constructor->ConstruirFabricaNaves(NewObject<AP_FM_FABRICA_NAVES>(this));
	Constructor->CaracteristicasNaveMaestra();
}

void AP_BU_DIRECTOR_MASTER_SHIP_E::SetDirectorNaveMaestra(AActor* Builder)
{
	Constructor = Cast<ABIU_SHIP_MASTER_OFENSIVA>(Builder);
	if (!Constructor)
	{
		UE_LOG(LogTemp, Error, TEXT("El constructor asignado no es válido o no implementa IBUI_INT_NAVE_MAESTRA"));
	}
}

//AP_BU_MASTER_SHIP_CONS_02* AP_BU_DIRECTOR_MASTER_SHIP_E::Get_Nave_Maestra()
//{
//	if (P_BU_INT01_SHIP_MASTER_E)
//	{
//		return P_BU_INT01_SHIP_MASTER_E->Get_Master_Maestra();
//	}
//	UE_LOG(LogTemp, Error, TEXT("Get_Nave_Maestra(): Return nullptr"));
//	return nullptr;
//}

