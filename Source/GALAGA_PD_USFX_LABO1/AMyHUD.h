// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SSLiteBarWidget.h"
#include "P_BU_MASTER_SHIP_CONS_02.h"
#include "LIfes_Naves.h"
#include "AMyHUD.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API AAMyHUD : public AHUD
{
    GENERATED_BODY()

public:
    AAMyHUD();

protected:
    // Usa TSubclassOf para especificar el tipo de clase que el Widget puede instanciar
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<UUserWidget> WidgetClass;

    // Instancia del widget de vida que se mostrará
    UPROPERTY()
    ULIfes_Naves* LifeWidget;

    virtual void BeginPlay() override;
};