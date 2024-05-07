// Fill out your copyright notice in the Description page of Project Settings.


#include "AMyHUD.h"
#include "SlateBasics.h"
#include "SlateExtras.h"
#include "SlateOptMacros.h"
#include "Engine/Engine.h"


AAMyHUD::AAMyHUD()
{
    // ConstructorHelpers se puede usar para encontrar la clase del widget si está en Blueprints
    static ConstructorHelpers::FClassFinder<UUserWidget> WidgetClassFinder(TEXT("/Game/PathToYourWidgetBlueprint"));
    WidgetClass = WidgetClassFinder.Class;

}

void AAMyHUD::BeginPlay()
{
    Super::BeginPlay();

    if (WidgetClass)
    {
        ULIfes_Naves* Widget = CreateWidget<ULIfes_Naves>(GetWorld(), WidgetClass);
        if (Widget)
        {
            Widget->AddToViewport();
            UE_LOG(LogTemp, Log, TEXT("Widget added to viewport"));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Failed to create widget"));
        }
    }
}
