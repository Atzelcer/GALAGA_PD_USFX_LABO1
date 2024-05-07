// Fill out your copyright notice in the Description page of Project Settings.


#include "LIfes_Naves.h"
#include "GALAGA_PD_USFX_LABO1GameMode.h"
#include "Engine/World.h"
#include "Components/TextBlock.h"
#include "P_BU_MASTER_SHIP_CONS_02.h"
#include "GALAGA_PD_USFX_LABO1Pawn.h"

void ULIfes_Naves::NativeConstruct()
{
	AGameModeBase* Mode = GetWorld()->GetAuthGameMode();

	if (Mode != nullptr) 
	{
		GameMode = Cast<AGALAGA_PD_USFX_LABO1GameMode>(Mode);
	}

	APawn* pawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (pawn != nullptr)
	{
		Nave_Prin = Cast<AGALAGA_PD_USFX_LABO1Pawn>(pawn);
	}

	APawn* Nave_Enemiga = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (pawn != nullptr)
	{
		Nave_Maestra = Cast<AP_BU_MASTER_SHIP_CONS_02>(Nave_Enemiga);
	}

}

void ULIfes_Naves::NativeTick(const FGeometry& Geometry, float DeltaTime)
{
	if (GameMode != nullptr) 
	{
		FString Vida_Nave = FString::SanitizeFloat(Nave_Prin->Health);
		FText Vida_Nave_Text = FText::FromString(Vida_Nave);
		Nave_Principal->SetText(Vida_Nave_Text);
	}

	if (Nave_Prin )
	{
		float precent = Nave_Prin->Health / Nave_Prin->HealthMax;
		Barra_Vida_NP->SetPercent(precent);
	}


	if (Nave_Maestra != nullptr)
	{
		float precent02 = Nave_Maestra->Vida / Nave_Maestra->VidaMaxima;
		Barra_Vida_NM->SetPercent(precent02);
	}

}
