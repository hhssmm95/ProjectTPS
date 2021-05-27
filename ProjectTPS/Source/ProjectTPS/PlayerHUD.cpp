// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHUD.h"
#include "UI/MainHUDWidget.h"
#include "UI/PlayerHPWidget.h"


APlayerHUD::APlayerHUD()
{
	static ConstructorHelpers::FClassFinder<UMainHUDWidget>	MainWidgetClass(TEXT("WidgetBlueprint'/Game/UI/UI_MainHUDWidget.UI_MainHUDWidget_C'"));

	if (MainWidgetClass.Succeeded())
		m_MainHUDWidgetClass = MainWidgetClass.Class;
}

void APlayerHUD::BeginPlay()
{
	Super::BeginPlay();

	if (m_MainHUDWidgetClass)
	{
		m_MainHUDWidget = Cast<UMainHUDWidget>(CreateWidget(GetWorld(),
			m_MainHUDWidgetClass));

		if (m_MainHUDWidget)
		{
			m_MainHUDWidget->AddToViewport();
		}

	}
}


void APlayerHUD::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlayerHUD::UpdatePlayerHP(float HP)
{
	m_MainHUDWidget->GetPlayerHPWidget()->SetHPBar(HP);
}