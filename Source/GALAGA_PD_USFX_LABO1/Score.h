// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Score.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AScore : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AScore();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// metodos accesores para el puntaje
	void setScore(int score);
	int getScore();
};
