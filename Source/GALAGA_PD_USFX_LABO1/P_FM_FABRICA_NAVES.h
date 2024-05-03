// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SHIP_P.h"
#include "P_FM_FABRICA_NAVES.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AP_FM_FABRICA_NAVES : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AP_FM_FABRICA_NAVES();


	// Función pública que toma un nombre de tipo de nave y devuelve un puntero a una nave enemiga.
    // Este método esencialmente envuelve la llamada a MakeNave para crear una nave enemiga basada en el tipo especificado.
	ASHIP_P* getNave(FString TypeNave);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Método virtual puro definido para crear una nave enemiga. Requiere que las subclases proporcionen una implementación concreta para crear diferentes tipos de naves.
// Esta declaración hace que AP_FM_Fabrica_Naves_E sea abstracta, lo que significa que no se puede instanciar directamente.
	virtual ASHIP_P* MakeNave(FString NaveTypeName) PURE_VIRTUAL(AP_FM_FABRICA_NAVES::MakeNave, return nullptr;);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
