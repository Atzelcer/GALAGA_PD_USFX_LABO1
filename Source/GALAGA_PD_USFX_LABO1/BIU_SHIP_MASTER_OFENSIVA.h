// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BUI_INT_NAVE_MAESTRA.h"
#include "BIU_SHIP_MASTER_OFENSIVA.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API ABIU_SHIP_MASTER_OFENSIVA : public APawn, public IBUI_INT_NAVE_MAESTRA
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABIU_SHIP_MASTER_OFENSIVA();


	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class UStaticMeshComponent* Malla_Maestro_A;

	UPROPERTY(EditAnywhere, Category = "Componentes")
	class UParticleSystem* Explosion_Nave;

	// ~~ Componente de Colsion : tipo caja ~~
	UPROPERTY(EditAnywhere, Category = "Componentes")
	class UBoxComponent* Colision_Nave;

	// ~~ Componente de Sonido ~~
	UPROPERTY(EditAnywhere, Category = "Componentes")
	class USoundBase* Sonido_Nave;

	float Vida;

	float Tiempo_Disparo;
	FVector Distancia_Disparo;

	float Tiempo_Disparo_Generar;
	// Timer handle for controlling firing
	FTimerHandle FiringTimerHandle;

	virtual void ConstruirEscudo(AEscudo_Nave_M* Escudo) override;
	virtual void ConstruirProyectil(APROYECTIL_P* Proyectil) override;
	virtual void ConstruirFabricaNaves(AP_FM_FABRICA_NAVES* Fabrica_Nave) override;
	virtual void Ubicacion_Nave_Maestra(FVector Posicion) override;
	virtual void SetShieldDistance(float Distance) override;
	virtual void CaracteristicasNaveMaestra() override;
	virtual void FireProjectile() override;
	virtual void Componentes_Destruccion() override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	void Damage(float Danio);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
