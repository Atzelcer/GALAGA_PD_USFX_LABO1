// Fill out your copyright notice in the Description page of Project Settings.


#include "S_P_BUI_Director_Sistema_Defensa.h"

// Sets default values
AS_P_BUI_Director_Sistema_Defensa::AS_P_BUI_Director_Sistema_Defensa()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AS_P_BUI_Director_Sistema_Defensa::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AS_P_BUI_Director_Sistema_Defensa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AS_P_BUI_Director_Sistema_Defensa::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AS_P_BUI_Director_Sistema_Defensa::Set_Construir_Sistema_Defensa(AActor* Construir_SD)
{
	Construir_DefensaAA = Cast<IS_P_INT_SISTEMA_DEFENSA>(Construir_SD);

	if (!Construir_DefensaAA)
	{
		UE_LOG(LogTemp, Warning, TEXT("No se pudo obtener el sistema de defensa"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Sistema de defensa obtenido"));
	}
}

void AS_P_BUI_Director_Sistema_Defensa::Construir_Sistema_Defensa()
{
	//Registrar si el Constructor es NULL
	if (!Construir_DefensaAA) {
		UE_LOG(LogTemp, Error, TEXT("ConstruirAlojamiento(): ConstructorDeAlojamiento es NULL, asegurese de que este inicializado."));
		return;
	}

	Construir_DefensaAA->Set_Torretas();

	Construir_DefensaAA->Set_Canones();

	Construir_DefensaAA->Set_Lanza_Cohetes();
	
	Construir_DefensaAA->Set_Minas_Galacticas();



}

AAS_P_BUI_SISTEMA_DEFENSA_CONST* AS_P_BUI_Director_Sistema_Defensa::Obtener_Sistema_DefensaAA()
{
	if (Construir_DefensaAA)
	{
		return Construir_DefensaAA->GetSistemaDefensa();
	}

	//Registrar si el Constructor es NULL
	UE_LOG(LogTemp, Error, TEXT("Obtener_Sistema_Defensa(): Devuelve nullptr"));
	return nullptr;
}




