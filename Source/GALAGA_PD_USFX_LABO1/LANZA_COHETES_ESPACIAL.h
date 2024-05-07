// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LANZA_COHETES_ESPACIAL.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API ALANZA_COHETES_ESPACIAL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALANZA_COHETES_ESPACIAL();

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	UStaticMeshComponent* Malla_Cohete;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Disparar_Cohetes()const ;
	
	float TiempoDesdeUltimoDisparo ;
	float TiempoDisparo ; // Tiempo entre disparos, en segundos

};
