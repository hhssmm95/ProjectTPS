// Copyright Epic Games, Inc. All Rights Reserved.


#include "ProjectTPSGameModeBase.h"


AProjectTPSGameModeBase::AProjectTPSGameModeBase()
{
	//static ConstructorHelpers::FClassFinder<ACharacter> PlayerAsset(TEXT("Blueprint'/Game/Player/BPPlayerCharacter.BPPlayerCharacter_C'"));

	//if (PlayerAsset.Succeeded())
		//m_PlayerCharacter = PlayerAsset.Class;



}

void AProjectTPSGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//DefaultPawnClass = m_PlayerCharacter;

	FInputModeGameOnly inputMode;
	GetWorld()->GetFirstPlayerController()->SetInputMode(inputMode);
}
