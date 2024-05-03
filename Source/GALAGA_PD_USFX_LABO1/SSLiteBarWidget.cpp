// Fill out your copyright notice in the Description page of Project Settings.


#include "SSLiteBarWidget.h"
#include "SlateOptMacros.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Notifications/SProgressBar.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SSLiteBarWidget::Construct(const FArguments& InArgs)
{
    float HealthPercentage = InArgs._CurrentHealth / InArgs._MaxHealth;

    ChildSlot
        [
            SNew(SOverlay)
                + SOverlay::Slot()
                .HAlign(HAlign_Fill)  // Fill horizontally
                .VAlign(VAlign_Bottom)  // Align to bottom
                [
                    SNew(SBox)
                        .WidthOverride(40.f)
                        .HeightOverride(40.f)
                        .Padding(100.f)  // Añade padding alrededor del widget
                        [
                            SAssignNew(HealthBar, SProgressBar)
                                .Percent(HealthPercentage)
                                .FillColorAndOpacity(FLinearColor::Green)  // Color inicial
                        ]
                ]
        ];
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SSLiteBarWidget::SetCurrentHealth(float HealthPercentage)
{
    if (HealthBar.IsValid())
    {
        HealthBar->SetPercent(HealthPercentage);

        // Cambia el color de verde a rojo basado en la salud
        FLinearColor BarColor = FLinearColor::LerpUsingHSV(FLinearColor::Red, FLinearColor::Green, HealthPercentage);
        HealthBar->SetFillColorAndOpacity(BarColor);
    }
}
