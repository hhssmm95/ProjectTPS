// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "AIController.h"
#include "MonsterAIController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTTPS_API AMonsterAIController : public AAIController
{
	GENERATED_BODY()

public:
	AMonsterAIController();

//protected:
	//class UAISenseConfig_Sight* m_SightConfig;

public:
	class UBlackboardComponent* GetBlackboardComp()
	{
		return Blackboard;
	}

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UBehaviorTree* m_AITree;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UBlackboardData* m_AIBlackBoard;

protected:

	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

//public:
	//void PerceptionInit();
	
};
