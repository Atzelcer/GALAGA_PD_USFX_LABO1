// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CANONES_ESPACIALES.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API ACANONES_ESPACIALES : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACANONES_ESPACIALES();


	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	UStaticMeshComponent* Malla_Canone;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	void Disparar_Canones() const;

	float TiempoDesdeUltimoDisparo;

	float TiempoDisparo; // Tiempo entre disparos, en segundos
};
