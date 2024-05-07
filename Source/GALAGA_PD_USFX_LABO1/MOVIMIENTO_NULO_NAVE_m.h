#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovementStrategy.h"
#include "MOVIMIENTO_NULO_NAVE_m.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GALAGA_PD_USFX_LABO1_API UMOVIMIENTO_NULO_NAVE_m : public UActorComponent, public IMovementStrategy
{
	GENERATED_BODY()

public:
	UMOVIMIENTO_NULO_NAVE_m();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void ExecuteMovement(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float WaveAmplitude = 1700.0f;  // Amplitud de la onda sinusoidal

	UPROPERTY(EditAnywhere, Category = "Movement")
	float WaveFrequency = 0.5f;  // Frecuencia de la onda sinusoidal

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MovementSpeed = 100.0f;  // Velocidad de movimiento en X

private:
	float RunningTime = 0.0f;  // Tiempo acumulado para el cálculo de la posición sinusoidal
};
