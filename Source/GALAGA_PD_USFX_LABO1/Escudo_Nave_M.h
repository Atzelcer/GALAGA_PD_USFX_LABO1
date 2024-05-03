// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escudo_Nave_M.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AEscudo_Nave_M : public AActor
{
	GENERATED_BODY()
	
public:	

	AEscudo_Nave_M();

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	UStaticMeshComponent* Escudo_Mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
