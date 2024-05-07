// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MINAS_ESPACIALES.h"
#include "MyMINAS_ESPACIALES_03.generated.h"


UCLASS()
class GALAGA_PD_USFX_LABO1_API AMyMINAS_ESPACIALES_03 : public AMINAS_ESPACIALES
{
	GENERATED_BODY()
	
public:
	AMyMINAS_ESPACIALES_03();

	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;


	virtual void Componentes_Explosion() override;

};
