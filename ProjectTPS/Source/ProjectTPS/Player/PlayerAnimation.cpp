// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimation.h"
#include "PlayerCharacter.h"
#include "Kismet/KismetMathLibrary.h"

UPlayerAnimation::UPlayerAnimation()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage>		RifleFireAsset(TEXT("AnimMontage'/Game/Player/Animation/Player_RifeFire.Player_RifeFire'"));

	if (RifleFireAsset.Succeeded())
		m_RifleFireMontage = RifleFireAsset.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage>		ReloadAsset(TEXT("AnimMontage'/Game/Player/Animation/Player_Reload_Rifle_Hip_Montage.Player_Reload_Rifle_Hip_Montage'"));

	if (ReloadAsset.Succeeded())
		m_RifleReloadMontage = ReloadAsset.Object;

	m_bHitReacting = false;
	m_MagEmpty = false;
	m_bIsDead = false;
}

void UPlayerAnimation::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();


	m_ePlayerAnim = PlayerAnimType::Idle;

}

void UPlayerAnimation::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

}

void UPlayerAnimation::JumpStart()
{
	if (!m_bIsDead)
	{
		m_ePlayerAnim = PlayerAnimType::Jump;
	}

}


void UPlayerAnimation::Death()
{
	m_ePlayerAnim = PlayerAnimType::Death;
}

void UPlayerAnimation::RifleFire()
{
	if (!m_bIsDead)
	{
		if (!m_MagEmpty && !Montage_IsPlaying(m_RifleReloadMontage))
			Montage_Play(m_RifleFireMontage);
	}
}

void UPlayerAnimation::RifleStop()
{
	Montage_Stop(0.2f, m_RifleFireMontage);
}

void UPlayerAnimation::ReloadMontage()
{
	if (!m_bIsDead)
	{
		Montage_Play(m_RifleReloadMontage);
	}
}

void UPlayerAnimation::HitReaction()
{
	if (!m_bIsDead)
	{
		int32	iRand = FMath::RandRange(0, 3);

		switch (iRand)
		{
		case 0:
			Montage_Play(m_HitMontage1);
			break;

		case 1:
			Montage_Play(m_HitMontage2);
			break;

		case 2:
			Montage_Play(m_HitMontage3);
			break;

		case 3:
			Montage_Play(m_HitMontage4);
			break;
		}
	}
}

void UPlayerAnimation::AnimNotify_ReloadEnd()
{
	m_pPlayer = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
	m_pPlayer->ReloadEnd();
}