// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimation.generated.h"

UENUM(BlueprintType)
enum class PlayerAnimType : uint8
{
	Idle,
	Run,
	Attack,
	Jump,
	Death,
};


UCLASS()
class PROJECTTPS_API UPlayerAnimation : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPlayerAnimation();


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_bIsDead;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		bool m_bHitReacting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class APlayerCharacter* m_pPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		PlayerAnimType	m_ePlayerAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_RifleFireMontage;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_HitMontage1;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_HitMontage2;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_HitMontage3;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_HitMontage4;



public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);

	void SetDead()
	{
		m_bIsDead = true;
	}


	//public:
		////void InputAttack();
	void JumpStart();
	void Death();
	void RifleFire();
	void RifleStop();
	void HitReaction();
};
