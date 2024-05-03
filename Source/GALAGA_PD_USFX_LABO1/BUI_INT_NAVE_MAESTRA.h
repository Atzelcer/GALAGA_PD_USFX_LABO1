// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PROYECTIL_P.h"
#include "Escudo_Nave_M.h"
#include "P_FM_FABRICA_NAVES.h"
#include "BUI_INT_NAVE_MAESTRA.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBUI_INT_NAVE_MAESTRA : public UInterface
{
	GENERATED_BODY()
};

class GALAGA_PD_USFX_LABO1_API IBUI_INT_NAVE_MAESTRA
{
	GENERATED_BODY()

public:
    virtual void ConstruirEscudo(AEscudo_Nave_M* Escudo) = 0;
    virtual void ConstruirProyectil(APROYECTIL_P* Proyectil) = 0;
    virtual void ConstruirFabricaNaves(AP_FM_FABRICA_NAVES* Fabrica_Nave) = 0;
    virtual void SetShieldDistance(float Distance) = 0;
    virtual void Ubicacion_Nave_Maestra(FVector Posicion) = 0;
    virtual void CaracteristicasNaveMaestra() = 0;
    virtual void FireProjectile() = 0;
	virtual void Componentes_Destruccion() = 0;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) = 0;
};
