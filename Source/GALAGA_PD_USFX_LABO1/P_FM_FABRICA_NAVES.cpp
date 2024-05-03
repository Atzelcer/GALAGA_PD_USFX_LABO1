// Fill out your copyright notice in the Description page of Project Settings.


#include "P_FM_FABRICA_NAVES.h"

// Sets default values
AP_FM_FABRICA_NAVES::AP_FM_FABRICA_NAVES()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

ASHIP_P* AP_FM_FABRICA_NAVES::getNave(FString TypeNave)
{
	//Nos ayudara a gestenior la creacion de una nave Enemiga 
	//Para apuntar a cualquier subclase de ANave_Enemiga_P
	ASHIP_P* Nave = MakeNave(TypeNave);
	return Nave;
}

// Called when the game starts or when spawned
void AP_FM_FABRICA_NAVES::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP_FM_FABRICA_NAVES::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AP_FM_FABRICA_NAVES::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{

}

