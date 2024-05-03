// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PROYECTIL_P.generated.h"

UCLASS(abstract)
class GALAGA_PD_USFX_LABO1_API APROYECTIL_P : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APROYECTIL_P();
	//|*| COMPONENTES DE RENDERIZADO |*|

//Componente raiz que controlara los demas componentes
	UPROPERTY(EditAnywhere, Category = "Projectile")
	USceneComponent* DefaulSceneRoot;

	//Componente de Malla para el proyectil
	UPROPERTY(EditAnywhere, Category = "Projectile")
	class UStaticMeshComponent* Projectil_Mesh;

	//Componente de Movimiento para el proyectil
	UPROPERTY(EditAnywhere, Category = "Projectile")
	class UProjectileMovementComponent* Projectil_Movement; // movimiento

	//Componente de colision para el proyectil
	UPROPERTY(EditAnywhere, Category = "Projectile")
	class UCapsuleComponent* Projectil_Collision; // para colisiones 

	//CREAR UN COMPONENTE DE COLISION Y SONIDO 

//Componente de sonido para el proyectil
	UPROPERTY(EditAnywhere, Category = "Projectile")
	class USoundBase* Projectil_Sound; // para sonido

	//Componente de partículas para la explosión
	UPROPERTY(EditAnywhere, Category = "Projectile")
	class UParticleSystem* Explosion_Particles; // para explosión

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor);
	virtual void Efectos_De_Colision();

};
