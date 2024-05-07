#include "Movimiento_Giratorio_Nave_Master.h"
#include "GameFramework/Actor.h"

UMovimiento_Giratorio_Nave_Master::UMovimiento_Giratorio_Nave_Master()
{
	PrimaryComponentTick.bCanEverTick = true;
	RotationSpeed = 90.0f;  // Ajuste seg�n necesidad
	MovementSpeed = 300.0f;  // Ajuste seg�n necesidad
	ApexHeight = 100.0f;  // Altura del v�rtice de la par�bola
}

void UMovimiento_Giratorio_Nave_Master::BeginPlay()
{
	Super::BeginPlay();

	// Calcula h y k para el v�rtice de la par�bola
	VertexX = (MaxHorizontalRange + MinHorizontalRange) / 2; // Centro del rango horizontal
	VertexY = MaxVerticalRange;  // Punto m�s alto en el rango vertical

	// Coeficiente 'a' para que la par�bola descienda hacia ambos extremos desde el v�rtice
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
		CurrentHorizontalDirection *= -1;  // Cambiar direcci�n
	}

	// Movimiento vertical parab�lico basado en X
	float NewY = CoefficientA * pow(NewX - VertexX, 2) + VertexY;
	if (NewY < MinVerticalRange)  // Asegura que no baje m�s del m�nimo
	{
		NewY = MinVerticalRange;
	}

	// Actualizar la ubicaci�n
	Location.X = NewX;
	Location.Y = NewY;
	GetOwner()->SetActorLocation(Location);
}
