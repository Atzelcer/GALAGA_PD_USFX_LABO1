// Fill out your copyright notice in the Description page of Project Settings.


#include "AMyHUD.h"
#include "SlateBasics.h"
#include "SlateExtras.h"
#include "SlateOptMacros.h"
#include "Engine/Engine.h"


//void AAMyHUD::BeginPlay()
//{
//        Super::BeginPlay();
//        if (GEngine && GEngine->GameViewport)
//        {
//            LifeBarWidget = SNew(SSLiteBarWidget)
//                .CurrentHealth(75.0f)  // Salud inicial
//                .MaxHealth(100.0f);    // Salud máxima
//    
//            GEngine->GameViewport->AddViewportWidgetContent(
//                SNew(SWeakWidget).PossiblyNullContent(LifeBarWidget.ToSharedRef())
//            );
//        }
//
//    PlayerPawn = Cast<AP_BU_MASTER_SHIP_CONS_02>(GetWorld()->GetFirstPlayerController()->GetPawn());
//}
//
//void AAMyHUD::Tick(float DeltaTime)
//{
//    Super::Tick(DeltaTime);
//
//    if (PlayerPawn && LifeBarWidget.IsValid())  // Verifica que PlayerPawn no sea nulo
//    {
//        if (PlayerPawn->Vida >= 0)  // Asegúrate de que la vida no sea negativa
//        {
//            float MaxHealth = 1800.0f;  // Puedes hacer esto una variable miembro para evitar repetición
//            float HealthPercentage = FMath::Clamp(PlayerPawn->Vida / MaxHealth, 0.0f, 1.0f);  // Usa FMath::Clamp para mantener el valor entre 0 y 1
//            LifeBarWidget->SetCurrentHealth(HealthPercentage);
//        }
//    }
//}
//AAMyHUD::AAMyHUD()
//{
//	PrimaryActorTick.bCanEverTick = true;   
//}
