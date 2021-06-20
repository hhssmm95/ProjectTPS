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
	Suspicious,
	Skill1,
	Skill2,
	Skill3,
	Skill4
	
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
		UAnimMontage* m_RevenantReloadMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		bool m_bDeath;

	bool m_SkillEnd;
	bool m_bSkillPlaying;
public:
	UMonsterAnim();

public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);

public:
	void SetSkillPlaying(bool playing)
	{
		m_bSkillPlaying = playing;
	}
	bool GetSkillPlaying() const
	{
		return m_bSkillPlaying;
	}

	void ChangeAnimType(EMonsterAnimType AnimType)
	{
		m_eMonsterAnim = AnimType;
	}

	void SetDeath()
	{
		m_bDeath = true;
	}

	void ClearSkillEnd()
	{
		m_SkillEnd = false;
	}

	bool IsSkillEnd()
	{
		return m_SkillEnd;
	}

public:
	void MonsterHitReaction();
	void RevenantReloadMontage();

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
	UFUNCTION(BlueprintCallable)
		void AnimNotify_MonsterSkillEnd();
	UFUNCTION(BlueprintCallable)
		void AnimNotify_RevenantTeleport();
	UFUNCTION(BlueprintCallable)
		void AnimNotify_RevenantGrenade();
	UFUNCTION(BlueprintCallable)
		void AnimNotify_RevenantBackup();
	UFUNCTION(BlueprintCallable)
		void AnimNotify_RevenantSpecialBullet();
	UFUNCTION(BlueprintCallable)
		void AnimNotify_RevenantReloadEnd();
};
