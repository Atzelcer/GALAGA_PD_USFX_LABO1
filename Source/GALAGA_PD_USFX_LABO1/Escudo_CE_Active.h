// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Escudo_Nave_M.h"
#include "Escudo_CE_Active.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_PD_USFX_LABO1_API UEscudo_CE_Active : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEscudo_CE_Active();

	void Escudo_Nave_Maestra();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> shieldSpawn;
	//AGALAGA_USFX_L01Pawn* NaveControl;
	//tiempo importante para hacer aparecer el escudo
	UPROPERTY(VisibleAnywhere)
	int tiempoAparecer = 230;
	float estaWea = 0.0f;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;


	class USceneComponent* ShieldActiveComponent;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
