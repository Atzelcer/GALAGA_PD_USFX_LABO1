#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Movimiento_Giratorio_Nave_Master.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GALAGA_PD_USFX_LABO1_API UMovimiento_Giratorio_Nave_Master : public UActorComponent
{
	GENERATED_BODY()

public:
	UMovimiento_Giratorio_Nave_Master();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float RotationSpeed;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MovementSpeed;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MaxHorizontalRange;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MinHorizontalRange;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MaxVerticalRange;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MinVerticalRange;

	UPROPERTY(EditAnywhere, Category = "Parabola")
	float ApexHeight;  // Height of the vertex above the base line

private:
	float VertexX;  // X-coordinate of the parabola's vertex
	float VertexY;  // Y-coordinate of the parabola's vertex
	float CoefficientA;  // Coefficient 'a' in the parabola equation
	int CurrentHorizontalDirection = 1;  // Direction of horizontal movement (1 for right, -1 for left)
};
