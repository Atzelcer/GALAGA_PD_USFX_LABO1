#include "Movimiento_Giratorio_Nave_Master.h"
#include "GameFramework/Actor.h"

UMovimiento_Giratorio_Nave_Master::UMovimiento_Giratorio_Nave_Master()
{
	PrimaryComponentTick.bCanEverTick = true;
	RotationSpeed = 90.0f;  // Ajuste según necesidad
	MovementSpeed = 300.0f;  // Ajuste según necesidad
	ApexHeight = 100.0f;  // Altura del vértice de la parábola
}

void UMovimiento_Giratorio_Nave_Master::BeginPlay()
{
	Super::BeginPlay();

	// Calcula h y k para el vértice de la parábola
	VertexX = (MaxHorizontalRange + MinHorizontalRange) / 2; // Centro del rango horizontal
	VertexY = MaxVerticalRange;  // Punto más alto en el rango vertical

	// Coeficiente 'a' para que la parábola descienda hacia ambos extremos desde el vértice
	CoefficientA = -ApexHeight / pow((MaxHorizontalRange - VertexX), 2);
}

void UMovimiento_Giratorio_Nave_Master::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Movimiento horizontal
	FVector Location = GetOwner()->GetActorLocation();
	float NewX = Location.X + MovementSpeed * DeltaTime * CurrentHorizontalDirection;
	if (NewX > MaxHorizontalRange || NewX < MinHorizontalRange)
	{
		CurrentHorizontalDirection *= -1;  // Cambiar dirección
	}

	// Movimiento vertical parabólico basado en X
	float NewY = CoefficientA * pow(NewX - VertexX, 2) + VertexY;
	if (NewY < MinVerticalRange)  // Asegura que no baje más del mínimo
	{
		NewY = MinVerticalRange;
	}

	// Actualizar la ubicación
	Location.X = NewX;
	Location.Y = NewY;
	GetOwner()->SetActorLocation(Location);
}
