// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MINAS_ESPACIALES.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AMINAS_ESPACIALES : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMINAS_ESPACIALES();


    FVector InitialLocation;
    float LifeTime;  // Tiempo de vida en segundos

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class UStaticMeshComponent* Malla_Mina;

    UPROPERTY(EditAnywhere, Category = "Effects")
    class UParticleSystem* ExplosionParticles;

    UPROPERTY(EditAnywhere, Category = "Effects")
    class USoundBase* ExplosionSound;


    UPROPERTY(EditAnywhere, Category = "Colision_Bomba")
    class USphereComponent* BombCollision;



protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;


    virtual void NotifyActorBeginOverlap(AActor* OtherActor) ;


    virtual void Componentes_Explosion();

    float TimeSinceSpawned;  // Tiempo acumulado desde que la bomba fue creada
    float ExplosionDelay;    // Tiempo en segundos para la explosión
    bool Conpuerta;
};
