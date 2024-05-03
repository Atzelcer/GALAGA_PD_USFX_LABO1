// Fill out your copyright notice in the Description page of Project Settings.


#include "P_FM_CREATE_SQUADRON_02.h"
#include "SHIP_LEVEL_03.h"
#include "SHIP_LEVEL_04.h"

ASHIP_P* AP_FM_CREATE_SQUADRON_02::MakeNave(FString NaveTypeName)
{
	float RandomSpawnY = FMath::RandRange(-1820, 1770);
	const FVector SpawnLocation = FVector(1770.0f, RandomSpawnY, 210.0f);
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);

	if (NaveTypeName.Equals("Nave_Nivel_03"))
		return GetWorld()->SpawnActor<ASHIP_LEVEL_03>(SpawnLocation, Rotation);

	if (NaveTypeName.Equals("Nave_Nivel_04"))
		return GetWorld()->SpawnActor<ASHIP_LEVEL_04>(SpawnLocation, Rotation);\

	return nullptr;
}
