// Fill out your copyright notice in the Description page of Project Settings.


#include "P_FM_ACTIVATION_NAVE.h"
#include "Engine/World.h"
#include "SHIP_P.h"

ASHIP_P* AP_FM_ACTIVATION_NAVE::MakeNave(FString NaveTypeName)
{
	float RandomSpawnY = FMath::RandRange(-1820, 1770);
	const FVector SpawnLocation = FVector(1770.0f, RandomSpawnY, 210.0f);
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);

	if (NaveTypeName.Equals("Nave_Enemiga_P"))
		return GetWorld()->SpawnActor<ASHIP_P>(SpawnLocation, Rotation);


    return nullptr;
}
