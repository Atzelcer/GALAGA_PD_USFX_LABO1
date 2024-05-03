// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Notifications/SProgressBar.h"

class GALAGA_PD_USFX_LABO1_API SSLiteBarWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSLiteBarWidget)
		: _CurrentHealth(100.0f), _MaxHealth(100.0f) {}
		SLATE_ARGUMENT(float, CurrentHealth)
		SLATE_ARGUMENT(float, MaxHealth)
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);
	// Función para establecer la salud actual
	void SetCurrentHealth(float HealthPercentage);

protected:
	TSharedPtr<SProgressBar> HealthBar;  // Widget de la barra de progreso
};
