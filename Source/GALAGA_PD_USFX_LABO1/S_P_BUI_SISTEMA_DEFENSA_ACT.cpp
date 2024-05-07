// Fill out your copyright notice in the Description page of Project Settings.


#include "S_P_BUI_SISTEMA_DEFENSA_ACT.h"
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
#include "AS_P_BUI_SISTEMA_DEFENSA_CONST.h"

// Sets default values
AS_P_BUI_SISTEMA_DEFENSA_ACT::AS_P_BUI_SISTEMA_DEFENSA_ACT()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AS_P_BUI_SISTEMA_DEFENSA_ACT::BeginPlay()
{
	Super::BeginPlay();
	
	Cons_Sis = GetWorld()->SpawnActor<AAS_P_BUI_SISTEMA_DEFENSA_CONST>(AAS_P_BUI_SISTEMA_DEFENSA_CONST::StaticClass());
	Cons_Sis->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called every frame
void AS_P_BUI_SISTEMA_DEFENSA_ACT::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AS_P_BUI_SISTEMA_DEFENSA_ACT::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AS_P_BUI_SISTEMA_DEFENSA_ACT::Set_Torretas()
{

	Cons_Sis->Construir_Torretas(1);



}

void AS_P_BUI_SISTEMA_DEFENSA_ACT::Set_Canones()
{

	Cons_Sis->Construir_Canones(1);

}

void AS_P_BUI_SISTEMA_DEFENSA_ACT::Set_Lanza_Cohetes()
{
	Cons_Sis->Construir_Lanza_Cohetes(1);

}

void AS_P_BUI_SISTEMA_DEFENSA_ACT::Set_Minas_Galacticas()
{
	Cons_Sis->Construir_Minas_Galacticas(1);

}

AAS_P_BUI_SISTEMA_DEFENSA_CONST* AS_P_BUI_SISTEMA_DEFENSA_ACT::GetSistemaDefensa()
{
	return Cons_Sis;
}





