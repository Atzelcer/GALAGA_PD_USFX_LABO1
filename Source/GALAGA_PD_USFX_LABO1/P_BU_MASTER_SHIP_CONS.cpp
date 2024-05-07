// Fill out your copyright notice in the Description page of Project Settings.


#include "P_BU_MASTER_SHIP_CONS.h"
#include "GALAGA_PD_USFX_LABO1Pawn.h"
#include "PROYECTIL_LAZER.h"
#include "PROYECTIL_MISSIL_P.h"
#include "PROYECTIL_ESFERA_ENERGIA.h"
#include "PROYECTIL_BOMBA_EXP.h"
#include "PROYECTIL_P.h"
#include "Escudo_Nave_M.h"
#include "P_FM_FABRICA_NAVES.h"


// Sets default values
AP_BU_MASTER_SHIP_CONS::AP_BU_MASTER_SHIP_CONS()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}


void AP_BU_MASTER_SHIP_CONS::BeginPlay()
{
    Super::BeginPlay();
    
	Nave_Maestra = GetWorld()->SpawnActor<AP_BU_MASTER_SHIP_CONS_02>(AP_BU_MASTER_SHIP_CONS_02::StaticClass(), FVector(1428.0, 0.0, 240.0), FRotator(0.f, 180.f, 0.f));

	Nave_Maestra->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}


// Called every frame
void AP_BU_MASTER_SHIP_CONS::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}


// Called to bind functionality to input
void AP_BU_MASTER_SHIP_CONS::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AP_BU_MASTER_SHIP_CONS::Construir_Proyectil_Lazer()
{
	Nave_Maestra->Set_Proyectil_DLazer("Proyectil_Lazer");
}

void AP_BU_MASTER_SHIP_CONS::Construir_Proyectil_Misil()
{
	Nave_Maestra->Set_Proyectil_DMissil("Proyectil_Missil");
}


void AP_BU_MASTER_SHIP_CONS::Construir_Proyectil_Esfera_Energia()
{
    Nave_Maestra->Set_Proyectil_DEnergia("_Proyectile_Esfera_Energia");
}



void AP_BU_MASTER_SHIP_CONS::Construir_Proyectil_Bomba()
{
	Nave_Maestra->Set_Proyectil_DBomba("Proyectil_Bomba");
}



AP_BU_MASTER_SHIP_CONS_02* AP_BU_MASTER_SHIP_CONS::Get_Master_Maestra()
{
    return Nave_Maestra;
}


