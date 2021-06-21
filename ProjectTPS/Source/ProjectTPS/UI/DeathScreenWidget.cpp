// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathScreenWidget.h"
#include "Components/TextBlock.h"


void UDeathScreenWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	m_DefeatText = Cast<UTextBlock>(GetWidgetFromName(TEXT("DefeatText")));
	m_RestartText = Cast<UTextBlock>(GetWidgetFromName(TEXT("RestartText")));

	m_FullText = TEXT("MISSION FAILED");
	m_IntervalTime = 0.2f;
	m_IntervalTimeAcc = 0.f;
	m_WriteCount = 0.f;
}

void UDeathScreenWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UDeathScreenWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (m_bPlayTextAnim)
	{
		if (m_IntervalTimeAcc >= m_IntervalTime)
		{
			m_IntervalTimeAcc = 0.f;
			m_CurrentText.AppendChar(m_FullText[m_WriteCount++]);
			m_DefeatText->SetText(FText::FromString(m_CurrentText));
			if (m_WriteCount >= 14)
			{
				m_bPlayTextAnim = false;
				m_bIsTextAnimEnd = true;
				m_RestartText->SetVisibility(ESlateVisibility::HitTestInvisible);
				return;
			}
		}
		m_IntervalTimeAcc += InDeltaTime;
	}

}


void UDeathScreenWidget::ShowDefeatText()
{
	if(!m_bPlayTextAnim && !m_bIsTextAnimEnd)
		m_bPlayTextAnim = true;
}

