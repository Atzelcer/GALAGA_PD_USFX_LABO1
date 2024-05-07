// Fill out your copyright notice in the Description page of Project Settings.


#include "Score.h"

static int Score = 0;

// Sets default values
AScore::AScore()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Score = Score;
}

// Called when the game starts or when spawned
void AScore::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AScore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AScore::setScore(int score)
{
	score = score;
}

int AScore::getScore()
{
	return Score;
}

