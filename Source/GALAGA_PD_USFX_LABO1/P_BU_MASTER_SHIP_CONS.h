// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "P_BU_INT01_SHIP_MASTER_E.h"
#include "P_BU_MASTER_SHIP_CONS_02.h"
#include "P_BU_INT02_ACC_SHIP_MASTER_E.h"
#include "P_BU_MASTER_SHIP_CONS.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AP_BU_MASTER_SHIP_CONS : public APawn, public IP_BU_INT01_SHIP_MASTER_E
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AP_BU_MASTER_SHIP_CONS();

	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* Malla_Maestro_A;*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	float Vida;

	float Tiempo_Disparo;
	FVector Distancia_Disparo;

	float Tiempo_Disparo_Generar;
	// Timer handle for controlling firing
	FTimerHandle FiringTimerHandle;


public:
	//Primera interfaz
	virtual void Construir_Escudo(AEscudo_Nave_M* Escudo) override;
	virtual void Construir_Proyectil(APROYECTIL_P* Proyectil) override;
	virtual void Construir_Fabrica_Naves(AP_FM_FABRICA_NAVES* Fabrica_Nave) override;

	virtual void Ubicacion_Nave_Maestra(FVector Posicion) override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void BuildMesh() override;
	virtual void FireProjectile(float DeltaTime) override;

	class UStaticMesh* Malla_Nave_Maestra_B = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/ASSETS/VARIOS_A/Nodriza1.Nodriza1'"));

	virtual class AP_BU_MASTER_SHIP_CONS_02* Get_Master_Maestra() override;

	AP_BU_MASTER_SHIP_CONS_02* NaveMaestra;

	class UStaticMesh* Malla_Maestro = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/ASSETS/VARIOS_A/Nodriza1.Nodriza1'"));
private:
	AEscudo_Nave_M* Escudo;
	APROYECTIL_P* Proyectil;
	AP_FM_FABRICA_NAVES* Fabrica_Nave;


};
