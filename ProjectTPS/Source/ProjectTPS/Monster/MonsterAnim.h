// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Animation/AnimInstance.h"
#include "MonsterAnim.generated.h"

UENUM(BlueprintType)
enum class EMonsterAnimType : uint8
{
	Idle,
	Walk,
	Run,
	Attack1,
	Attack2,
	Death
	
};

UCLASS()
class PROJECTTPS_API UMonsterAnim : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		EMonsterAnimType m_eMonsterAnim;



public:
	UMonsterAnim();

public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);

public:

	void ChangeAnimType(EMonsterAnimType AnimType)
	{
		m_eMonsterAnim = AnimType;
	}

public:

	UFUNCTION(BlueprintCallable)
		void AnimNotify_MonsterAttackEnd();
};
