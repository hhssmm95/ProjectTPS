
#pragma once

#include "../GameInfo.h"
#include "Animation/AnimInstance.h"
#include "RevenantAnim.generated.h"


UENUM(BlueprintType)
	 enum class EBossAnimType : uint8
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
class PROJECTTPS_API URevenantAnim : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		EBossAnimType m_eMonsterAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_HitMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		bool m_bDeath;

public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);

public:

	void ChangeAnimType(EBossAnimType AnimType)
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
		void AnimNotify_MonsterDeathEnd();
};
