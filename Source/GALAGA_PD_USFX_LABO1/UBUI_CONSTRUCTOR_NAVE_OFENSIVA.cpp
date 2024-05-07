// Fill out your copyright notice in the Description page of Project Settings.


#include "UBUI_CONSTRUCTOR_NAVE_OFENSIVA.h"

// Sets default values
AUBUI_CONSTRUCTOR_NAVE_OFENSIVA::AUBUI_CONSTRUCTOR_NAVE_OFENSIVA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUBUI_CONSTRUCTOR_NAVE_OFENSIVA::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUBUI_CONSTRUCTOR_NAVE_OFENSIVA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AUBUI_CONSTRUCTOR_NAVE_OFENSIVA::Construir_Proyectil_Lazer()
{
	Nave_Maestra_Ofensiva->Set_Proyectil_DLazer("Proyectil_Lazer");
}

void AUBUI_CONSTRUCTOR_NAVE_OFENSIVA::Construir_Proyectil_Misil()
{
	Nave_Maestra_Ofensiva->Set_Proyectil_DMissil("Proyectil_Missil");
}

void AUBUI_CONSTRUCTOR_NAVE_OFENSIVA::Construir_Proyectil_Esfera_Energia()
{
	Nave_Maestra_Ofensiva->Set_Proyectil_DEnergia("_Proyectile_Esfera_Energia");
}

void AUBUI_CONSTRUCTOR_NAVE_OFENSIVA::Construir_Proyectil_Bomba()
{
	Nave_Maestra_Ofensiva->Set_Proyectil_DBomba("Proyectil_Bomba");
}

AP_BU_MASTER_SHIP_CONS_02* AUBUI_CONSTRUCTOR_NAVE_OFENSIVA::Get_Master_Maestra()
{
	return nullptr;
}

