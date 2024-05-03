// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SHIP_P.h"
#include "SHIP_LEVEL_03.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API ASHIP_LEVEL_03 : public ASHIP_P
{
	GENERATED_BODY()

public: 

	// Sets default values for this actor's properties
	ASHIP_LEVEL_03();	

protected:
	// Metodo cuando se inicia el juego 
	virtual void BeginPlay() override;

public:
	//Para ejecutarse a cada fotograma 
	virtual void Tick(float DeltaTime) override;

public:
	//metodo para hacer danio a la nave
	virtual void Recibir_Danio() override;

	//metodo para colosionar con la nave 
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void ComponentesUE_Sistema() override;
	
};
