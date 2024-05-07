// Fill out your copyright notice in the Description page of Project Settings.


#include "Escudo_CE_Active.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UEscudo_CE_Active::UEscudo_CE_Active()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UEscudo_CE_Active::Escudo_Nave_Maestra()
{
	UWorld* TheWorld = GetWorld();
	if (TheWorld != nullptr) {
		tiempoAparecer++;
		if (tiempoAparecer >= 8) {
			FTransform TransformShield(this->GetComponentTransform());

			TransformShield.SetLocation(GetComponentLocation());
			TransformShield.SetRotation(FQuat(0.f, 90.f, 0.f, 90.f));
			//TransformBarrera
			TheWorld->SpawnActor(shieldSpawn, &TransformShield);
			tiempoAparecer = 0;
		}
	}
}


// Called when the game starts
void UEscudo_CE_Active::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEscudo_CE_Active::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

