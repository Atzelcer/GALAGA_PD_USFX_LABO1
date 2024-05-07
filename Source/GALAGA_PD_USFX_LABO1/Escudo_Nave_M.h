#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Escudo_Nave_M.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AEscudo_Nave_M : public AActor
{
    GENERATED_BODY()

public:
    AEscudo_Nave_M();

    UPROPERTY(VisibleAnywhere, Category = "Mesh")
    UStaticMeshComponent* Escudo_Mesh;

    UPROPERTY(VisibleAnywhere, Category = "Collision")
    UBoxComponent* Colision_Escudo;

    UPROPERTY(EditAnywhere, Category = "Config")
    float Health;

    UPROPERTY(EditAnywhere, Category = "Config")
    float Distancia_Escudo;

private:
    bool bIsShieldActive; // Controla si el escudo está activo

public:
    void ActivateShield();

    void DeactivateShield();
    
    void Damage(float DamageAmount);

    bool IsShieldActive() const;

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    void OnShieldOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
