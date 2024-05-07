// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Torreta_Espacial.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API ATorreta_Espacial : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATorreta_Espacial();


	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	UStaticMeshComponent* Malla_Torreta;

	//UPROPERTY(EditAnywhere, Category = "Componentes")
	//class UParticleSystem* Part_Torreta;

	//UPROPERTY(EditAnywhere, Category = "Componentes")
	//class UCapsuleComponent* Collision_Torreta; // para colisiones

	//// ~~ Componente de Sonido ~~
	//UPROPERTY(EditAnywhere, Category = "Componentes")
	//class USoundBase* Sonido_Torreta;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Disparar_Torreta()const;

	float TiempoDesdeUltimoDisparo ;
	float TiempoDisparo ; // Tiempo entre disparos, en segundos


};
