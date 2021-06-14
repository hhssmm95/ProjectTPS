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


UENUM(BlueprintType)
enum class PlayerMoveType : uint8
{
	Run,
	Crouch
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		PlayerMoveType	m_ePlayerMove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_RifleFireMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_RifleFireAimMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_RifleReloadMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_RifleReloadAimMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_HitMontage1;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_HitMontage2;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_HitMontage3;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_HitMontage4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UAnimMontage* m_CloseAttackMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		bool m_bAiming;

	bool m_MagEmpty;


public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);

	void SetIsDead()
	{
		m_bIsDead = true;
	}

	void SetMagEmpty(bool empty)
	{
		m_MagEmpty = empty;
	}

	void SetAiming(bool aiming)
	{
		m_bAiming = aiming;
	}

	//public:
		////void InputAttack();

	void JumpStart();
	void Death();
	void RifleFire();
	void RifleAimFire();
	void RifleStop();
	void RifleAimStop();
	void HitReaction();
	void ReloadMontage();
	void ReloadAimMontage();
	void CloseAttack();

public:
	UFUNCTION(BlueprintCallable)
		void AnimNotify_ReloadEnd();
	UFUNCTION(BlueprintCallable)
		void AnimNotify_CloseAttack();
	UFUNCTION(BlueprintCallable)
		void AnimNotify_CloseAttackEnd();
};
