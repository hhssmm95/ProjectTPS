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
	Death,
	Suspicious
	
};

UCLASS()
class PROJECTTPS_API UMonsterAnim : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		EMonsterAnimType m_eMonsterAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_HitMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		bool m_bDeath;
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

	void SetDeath()
	{
		m_bDeath = true;
	}

public:
	void MonsterHitReaction();


	UFUNCTION(BlueprintCallable)
		void AnimNotify_MonsterAttackEnd();
	UFUNCTION(BlueprintCallable)
		void AnimNotify_MonsterNearAttack();
	UFUNCTION(BlueprintCallable)
		void AnimNotify_MonsterLongAttack();
	UFUNCTION(BlueprintCallable)
		void AnimNotify_MonsterSuspectEnd();
	UFUNCTION(BlueprintCallable)
		void AnimNotify_MonsterDeathEnd();
};
