// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "LIfes_Naves.generated.h"

UCLASS()
class GALAGA_PD_USFX_LABO1_API ULIfes_Naves : public UUserWidget
{
	GENERATED_BODY()

public:

	class AGALAGA_PD_USFX_LABO1GameMode* GameMode;

	class AGALAGA_PD_USFX_LABO1Pawn* Nave_Prin;

	class AP_BU_MASTER_SHIP_CONS_02* Nave_Maestra;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* Barra_Vida_NP;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* Barra_Vida_NM;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Nave_Principal;

	void NativeConstruct() override;

	void NativeTick(const FGeometry& Geometry, float DeltaTime) override;
	
};
