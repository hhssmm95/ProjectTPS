// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameInfo.h"
#include "GameFramework/GameModeBase.h"
#include "ProjectTPSGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class PROJECTTPS_API AProjectTPSGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AProjectTPSGameModeBase();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<ACharacter> m_PlayerCharacter;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
