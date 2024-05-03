// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "P_BU_INT02_ACC_SHIP_MASTER_E.h"
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

	// ~~ Componente de Colsion : tipo caja ~~
	UPROPERTY(EditAnywhere, Category = "Componentes")
	class UBoxComponent* Colision_Nave;

	// ~~ Componente de Sonido ~~
	UPROPERTY(EditAnywhere, Category = "Componentes")
	class USoundBase* Sonido_Nave;

	//UPROPERTY(EditAnywhere, Category = "Componentes")
	//class UMOVIMIENTO_ALEATORIO* MovimientoAleatorio;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CheckHealth();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	void Componentes_Destruccion();

	//float Danio;
	void Damage(float Danio);

	UPROPERTY()
	float Vida;

	virtual void SetShieldDistance(float Distance) override;
	virtual void SetMesh(UStaticMeshComponent* Malla_Maestro) override;
	virtual void Caracteristicas_Nave_Maestra() override;

	void SetMeshScale(const FVector& Scale);

};
