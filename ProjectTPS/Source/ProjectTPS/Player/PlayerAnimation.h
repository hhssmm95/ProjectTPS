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

	//protected:

		/*
		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
			float m_Direction;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
			float m_MoveSpeed;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
			float m_AttackSpeed;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
			bool m_Falling;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
			bool m_Jump;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
			bool m_Ground;*/


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_bIsDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class APlayerCharacter* m_pPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		PlayerAnimType	m_ePlayerAnim;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_RifleFireMontage;
	//protected:

		/*UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
			float m_Yaw;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
			float m_Pitch;*/


public:
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
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
};
