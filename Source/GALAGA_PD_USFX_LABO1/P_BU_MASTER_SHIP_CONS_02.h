// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "P_BU_INT02_ACC_SHIP_MASTER_E.h"
#include "Moviento_Nave_Maestra.h" 
#include "Movimiento_Violento_Nave_Maestra.h"
#include "MovementStrategy.h"
#include "MOVIMIENTO_ALEATORIO.h"
#include "MOVIMIENTO_NULO_NAVE_m.h"
#include "P_BU_MASTER_SHIP_CONS_02.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AP_BU_MASTER_SHIP_CONS_02 : public APawn, public IP_BU_INT02_ACC_SHIP_MASTER_E
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AP_BU_MASTER_SHIP_CONS_02();

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	UStaticMeshComponent* Malla_Maestro_A;

	UPROPERTY(EditAnywhere, Category = "Componentes")
	class UParticleSystem* Explosion_Nave;

	UPROPERTY(EditAnywhere, Category = "Componentes")
	class UCapsuleComponent* ShipEnemyCollision; // para colisiones

	// ~~ Componente de Sonido ~~
	UPROPERTY(EditAnywhere, Category = "Componentes")
	class USoundBase* Sonido_Nave;

	//La integracion de los componentes de actor es vital para el funcionamiento de la nave
	//Y tambien para que se el Patron Strategy funcione correctamente

	// Componente de movimiento personalizado
	UPROPERTY(VisibleAnywhere, Category = "Custom Components")
	UMoviento_Nave_Maestra* MovimientoComponent;

	// Componente de movimiento personalizado
	UPROPERTY(VisibleAnywhere, Category = "Custom Components")
	UMovimiento_Violento_Nave_Maestra* MovimientoViolentoComponent;

	// Componente de movimiento personalizado
	UPROPERTY(VisibleAnywhere, Category = "Custom Components")
	UMOVIMIENTO_ALEATORIO* MovimientoAleatorioComponent;

	// Componente de movimiento personalizado
	UPROPERTY(VisibleAnywhere, Category = "Custom Components")
	UMOVIMIENTO_NULO_NAVE_m* MovimientoNuloComponent;

	UPROPERTY(EditAnywhere, Category = "Componentes")
	UMOVIMIENTO_ALEATORIO* MovimientoAleatorio;

	FString Proyectile_Lazer;
	FString Proyectile_Misil;
	FString Proyectile_Esfera_Energia;
	FString Proyectile_Bomba;

	class AScore* Score_Juego;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	IMovementStrategy* CurrentMovementStrategy;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	void Componentes_Destruccion();

	//float Danio;
	void Damage(float Danio);
	float Vida;

	float VidaMaxima = 1800;

	FTimerHandle FiringTimerHandle;

	float TiempoAcumuladoDisparo;
	float  Tiempo_Disparo ;
	float Danio_Recibido ;
	float Tiempo_Disparo_Generar ;
	FVector Distancia_Disparo ;
	float TiempoDesdeUltimoDisparo;


	virtual void Disparar_Proyectil(UClass* ProjectileClass) override;

	virtual void Set_Proyectil_DEnergia(FString _Proyectile_Esfera_Energia) override;

	virtual void Set_Proyectil_DMissil(FString _Proyectile_Misil) override;
	
	virtual void Set_Proyectil_DLazer(FString _Proyectile_Lazer) override;
	
	virtual void Set_Proyectil_DBomba(FString _Proyectile_Bomba) override;

	virtual void Caracteristicas_Nave_Maestra() override;



	virtual void SetMovementStrategy(IMovementStrategy* NewStrategy) override;

};
