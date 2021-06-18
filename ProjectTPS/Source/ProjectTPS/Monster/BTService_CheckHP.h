// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "BehaviorTree/BTService.h"
#include "BTService_CheckHP.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTTPS_API UBTService_CheckHP : public UBTService
{
	GENERATED_BODY()
	
public:
	UBTService_CheckHP();
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_Phase2Percent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_Phase3Percent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_Phase4Percent;

	bool phase2enable;
	bool phase3enable;
	bool phase4enable;

	bool phase2Init;
	bool phase3Init;
	bool phase4Init;


protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

};
