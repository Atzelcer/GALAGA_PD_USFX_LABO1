// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PROYECTIL_P.h"
#include "PROYECTIL_NAVE_P.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API APROYECTIL_NAVE_P : public APROYECTIL_P
{
	GENERATED_BODY()

public:

	APROYECTIL_NAVE_P();

	//Componente de Movimiento para el proyectil
   UPROPERTY(EditAnywhere, Category = "Projectile")
   class UProjectileMovementComponent* ProjectileMovement; // movimiento

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	virtual void Efectos_De_Colision() override;

	
};
