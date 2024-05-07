// Fill out your copyright notice in the Description page of Project Settings.


#include "AAAS_P_BUI_SISTEMA_DEFENSA_FURIA.h"

#include "AS_P_BUI_SISTEMA_DEFENSA_CONST.h"

// Sets default values
AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA::AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}

// Called when the game starts or when spawned
void AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA::BeginPlay()
{
	Super::BeginPlay();
	
	Cons_Sis = GetWorld()->SpawnActor<AAS_P_BUI_SISTEMA_DEFENSA_CONST>(AAS_P_BUI_SISTEMA_DEFENSA_CONST::StaticClass());
	Cons_Sis->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called every frame
void AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA::Set_Torretas()
{
	Cons_Sis->Construir_Torretas(6);

}

void AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA::Set_Canones()
{
	Cons_Sis->Construir_Canones(6);

}

void AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA::Set_Lanza_Cohetes()
{
	Cons_Sis->Construir_Lanza_Cohetes(6);

}

void AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA::Set_Minas_Galacticas()
{
	Cons_Sis->Construir_Minas_Galacticas(6);

}

AAS_P_BUI_SISTEMA_DEFENSA_CONST* AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA::GetSistemaDefensa()
{
	return Cons_Sis;
}

