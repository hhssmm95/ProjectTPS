// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimation.h"
#include "PlayerCharacter.h"
#include "Kismet/KismetMathLibrary.h"

UPlayerAnimation::UPlayerAnimation()
{

}

void UPlayerAnimation::NativeInitializeAnimation()
{
	//Super::NativeInitializeAnimation();

	//m_Direction = 0.f;
	//m_MoveSpeed = 0.f;

	//m_Yaw = 0.f;
	//m_Pitch = 0.f;


	m_ePlayerAnim = PlayerAnimType::Idle;
	////m_eAttackType = ShinbiAttackType::Attack1;

	//m_AttackSpeed = 1.f;
	////m_ContinuityAttack = false;
	//m_Falling = false;
	//m_Jump = false;
	//m_Ground = true;

}

void UPlayerAnimation::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	////TryGetPawnOwnder: AnimInstance를 가지고 있는 Pawn을 얻어온다.
	//if(!m_pPlayer)
	//	m_pPlayer = Cast<APlayerCharacter>(TryGetPawnOwner());

	//else
	//{
	//	


	//	UCharacterMovementComponent* pMovement = m_pPlayer->GetCharacterMovement();

	//	if (pMovement)
	//	{

	//		m_Falling = pMovement->IsFalling();
	//		m_Ground = pMovement->IsMovingOnGround();

	//		if (m_ePlayerAnim == PlayerAnimType::Jump)
	//			m_ePlayerAnim = PlayerAnimType::Idle;

	//		m_MoveSpeed = pMovement->Velocity.Size();

	//		if (m_MoveSpeed > 0.f)
	//			m_ePlayerAnim = PlayerAnimType::Run;


	//		FRotator AimRot = m_pPlayer->GetBaseAimRotation();
	//		FRotator NormalizedDeltaRot = UKismetMathLibrary::NormalizedDeltaRotator(AimRot, m_pPlayer->GetActorRotation());


	//		m_Pitch = NormalizedDeltaRot.Pitch;
	//		m_Yaw = NormalizedDeltaRot.Yaw;


	//		//m_Direction = CalculateDirection(pMovement->Velocity, FRotator(0.f, 0.f, 0.f));
	//		//CalculateDirection도 사용 가능
	//		switch (m_pPlayer->GetDirection())
	//		{
	//		case EMoveDir::None:
	//			m_Direction = 0.f;
	//			break;
	//		case EMoveDir::Forward:
	//			m_Direction = 0.f;
	//			break;
	//		case EMoveDir::ForwardRight:
	//			m_Direction = 45.f;
	//			break;
	//		case EMoveDir::Right:
	//			m_Direction = 90.f;
	//			break;
	//		case EMoveDir::BackwardRight:
	//			m_Direction = 135.f;
	//			break;
	//		case EMoveDir::Backward:
	//			m_Direction = 180.f;
	//			break;
	//		case EMoveDir::BackwardLeft:
	//			m_Direction = -135.f;
	//			break;
	//		case EMoveDir::Left:
	//			m_Direction = -90.f;
	//			break;
	//		case EMoveDir::ForwardLeft:
	//			m_Direction = -45.f;
	//			break;
	//		}





	//	}
	//}

}

void UPlayerAnimation::JumpStart()
{
	m_ePlayerAnim = PlayerAnimType::Jump;

}


void UPlayerAnimation::Death()
{
	m_ePlayerAnim = PlayerAnimType::Death;
}
