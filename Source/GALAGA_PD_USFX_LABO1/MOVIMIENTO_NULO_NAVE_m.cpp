#include "MOVIMIENTO_NULO_NAVE_m.h"
#include "GameFramework/Actor.h"

UMOVIMIENTO_NULO_NAVE_m::UMOVIMIENTO_NULO_NAVE_m()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UMOVIMIENTO_NULO_NAVE_m::BeginPlay()
{
	Super::BeginPlay();
}

void UMOVIMIENTO_NULO_NAVE_m::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	ExecuteMovement(DeltaTime);
}

void UMOVIMIENTO_NULO_NAVE_m::ExecuteMovement(float DeltaTime)
{
	if (AActor* Owner = GetOwner()) {
		RunningTime += DeltaTime;
		float SineValue = FMath::Sin(RunningTime * WaveFrequency) * WaveAmplitude;  // Calcular la posición Y basada en una función sinusoidal
		FVector CurrentPosition = Owner->GetActorLocation();
		CurrentPosition.Y = SineValue;

		// Añadir movimiento en X
		CurrentPosition.X += MovementSpeed * DeltaTime;
		// Controlar los límites en X
		if (CurrentPosition.X > 800.0f) {
			CurrentPosition.X = -1800.0f;  // Resetear a la posición inicial si supera el máximo
		}

		Owner->SetActorLocation(CurrentPosition);
	}
}
