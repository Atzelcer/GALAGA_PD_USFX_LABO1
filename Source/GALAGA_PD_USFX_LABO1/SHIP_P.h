// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHIP_P.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API ASHIP_P : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASHIP_P();

    // |*| COMPONENTES DE RENDERIZADO O ESCENA PARA LA NAVE |*|

   // ~~ Componente raiz que controlara los demas componentes ~~ 
    UPROPERTY(EditAnywhere)
    USceneComponent* Scena;

    // ~~ Conponente de Malla para la nave ~~
    UPROPERTY(EditAnywhere, Category = "Componentes")
    class UStaticMeshComponent* Nave_Mesh;

    // ~~ Componente de Explosion ~~
    UPROPERTY(EditAnywhere, Category = "Componentes")
    class UParticleSystem* Explosion_Nave;

    // ~~ Componente de Colsion : tipo caja ~~
    UPROPERTY(EditAnywhere, Category = "Componentes")
    class UBoxComponent* Colision_Nave;

    // ~~ Componente de Sonido ~~
    UPROPERTY(EditAnywhere, Category = "Componentes")
    class USoundBase* Sonido_Nave;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

    // |*| DECLARACION DE ATRIBUTOS - PROPIEDADES |*|

    FString Identificador_Nave;
    float Velocity;
    float Resistencia;
    float Tiempo_Disparo;
    float Tiempo_Disparo_Generar;
    FVector Distancia_Disparo;
    // Vida de la nave
    float Life;

    //Variable para el danio 
    float Danio_Recibido;


    // |*|DECLARACION DE FUNCIONES - METODOS |*|
    // 
    //Metodo para la colision de la Nave
    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

    virtual void ComponentesUE_Sistema();

    // Metodo para hacer daño a la nave
    virtual void Recibir_Danio();

};
