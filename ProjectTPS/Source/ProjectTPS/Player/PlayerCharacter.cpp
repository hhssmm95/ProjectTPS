// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "PlayerAnimation.h"
#include "Kismet/KismetMathLibrary.h"
#include "PrimaryWeapon.h"
#include "../HitCameraShake.h"
#include "../HitEffect.h"
#include "../UI/MainHUDWidget.h"
#include "../UI/PlayerEquipWidget.h"
#include "../Monster/Monster.h"
#include "Components/WidgetComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh>		MeshAsset(TEXT("SkeletalMesh'/Game/SciFiSoldier/Meshes/SK_ScifiSoldierUE4.SK_ScifiSoldierUE4'"));

	static ConstructorHelpers::FClassFinder<UAnimInstance>		AnimAsset(TEXT("AnimBlueprint'/Game/Player/BPPlayerAnimation.BPPlayerAnimation_C'"));

	if (MeshAsset.Succeeded())
		GetMesh()->SetSkeletalMesh(MeshAsset.Object);

	if (AnimAsset.Succeeded())
		GetMesh()->SetAnimInstanceClass(AnimAsset.Class);

	static ConstructorHelpers::FClassFinder<APrimaryWeapon>		WeaponAsset(TEXT("Blueprint'/Game/Player/BP_KrissVector.BP_KrissVector_C'"));

	if (WeaponAsset.Succeeded())
		m_StartWeapon = WeaponAsset.Class;
	



	m_Arm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Arm"));
	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	//m_Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	m_AimLock = CreateDefaultSubobject<UWidgetComponent>(TEXT("AimLock"));
	m_AimAssistParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AimAssistParticle"));

	m_Camera->SetupAttachment(m_Arm);
	m_Arm->SetupAttachment(GetCapsuleComponent());
	m_AimLock->SetupAttachment(GetCapsuleComponent());
	m_AimAssistParticle->SetupAttachment(GetCapsuleComponent());
	//m_Scene->SetupAttachment(GetCapsuleComponent());
	//m_eDirection = EMoveDir::None;

	m_PlayerInfo = CreateDefaultSubobject<UPlayerInfo>(TEXT("PlayerInfo"));

	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->JumpZVelocity = 500.f;
	m_UpperYaw = 0.f;
	m_bMagEmpty = false;
	m_AutoShotRange = 3000.f;
	SetHPMax(1000);
	SetHP(1000);
	
	GetCapsuleComponent()->SetCollisionProfileName("PlayerBody");
	m_AimLock->SetWidgetSpace(EWidgetSpace::Screen);
	m_AimAssistTime = 10.f;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	m_pPlayerAnim = Cast<UPlayerAnimation>(GetMesh()->GetAnimInstance());


	FActorSpawnParameters	param;
	param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	m_PrimaryWeapon = GetWorld()->SpawnActor<APrimaryWeapon>(m_StartWeapon, FVector::ZeroVector,
		FRotator::ZeroRotator, param);

	m_PrimaryWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform,
		TEXT("RifleSocket"));

	m_PrimaryWeapon->SetActorRotation(FRotator(GetActorForwardVector().X, GetActorForwardVector().Y, 
		GetActorForwardVector().X));

	m_HUD = Cast<APlayerHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	m_HUD->UpdatePlayerHP(m_PlayerInfo->GetHPPercent());

	SetRemainMag(100);
	m_HUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetRemainMagText(GetRemainMag());
	m_AimLock->SetVisibility(false);
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Detection();

	if (m_bFire && !m_IsReloading)
	{
		int32 rand = FMath::RandRange(0, 3);

		if (m_bAimAssist)
			m_PrimaryWeapon->AutoFire(m_Camera->GetComponentLocation(), m_AssistLoc);
		else if(!m_bAimAssist && rand == 0 && m_PlayerInfo->GetAssultLevel() >= 2)
			m_PrimaryWeapon->ExplosiveFire(m_Camera->GetComponentLocation(), m_Camera->GetForwardVector());
		else
			m_PrimaryWeapon->Fire(m_Camera->GetComponentLocation(), m_Camera->GetForwardVector());

	}

	if (m_bAimAssist)
	{
		if (m_AimAssistTimeAcc >= m_AimAssistTime)
		{
			m_AimLock->SetVisibility(false);
			m_bAimAssist = false;
			m_AimAssistTimeAcc = 0.f;
			m_AimAssistParticle->SetVisibility(false);
		}
		m_AimAssistTimeAcc += DeltaTime;
	}
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &APlayerCharacter::MoveFront);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &APlayerCharacter::MoveSide);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &APlayerCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APlayerCharacter::LookUp);

	//PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &APlayerCharacter::AttackKey);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &APlayerCharacter::InputJump);
	PlayerInputComponent->BindAction(TEXT("Aim"), EInputEvent::IE_Pressed, this, &APlayerCharacter::AimPress);
	PlayerInputComponent->BindAction(TEXT("Aim"), EInputEvent::IE_Released, this, &APlayerCharacter::AimRelease);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &APlayerCharacter::PrimaryFire);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Released, this, &APlayerCharacter::PrimaryStop);
	PlayerInputComponent->BindAction(TEXT("SuppressorShot(Debug)"), EInputEvent::IE_Pressed, this, &APlayerCharacter::EquipSuppressor);
	PlayerInputComponent->BindAction(TEXT("AbilitySlot1"), EInputEvent::IE_Pressed, this, &APlayerCharacter::UseAbility1);
	PlayerInputComponent->BindAction(TEXT("AbilitySlot2"), EInputEvent::IE_Pressed, this, &APlayerCharacter::UseAbility2);

	PlayerInputComponent->BindAction(TEXT("Reload"), EInputEvent::IE_Pressed, this, &APlayerCharacter::ReloadStart);
	PlayerInputComponent->BindAction(TEXT("AbilityWindowToggle"), EInputEvent::IE_Pressed, this, &APlayerCharacter::AbilityWindowVisiblity).bExecuteWhenPaused = true;

	
}


void APlayerCharacter::MoveFront(float fScale)
{

	if (!m_bIsDead)
		AddMovementInput(GetActorForwardVector(), fScale);


}
void APlayerCharacter::MoveSide(float fScale)
{
	if (!m_bIsDead)
		AddMovementInput(GetActorRightVector(), fScale);

	
}

void APlayerCharacter::Turn(float fScale)
{

	if (!m_bIsDead)
	{
		AddControllerYawInput(fScale * 45.f * GetWorld()->GetDeltaSeconds());
	}

}

void APlayerCharacter::AddUpperYawInput(float fScale)
{
	if (fScale > 0.f || fScale < 0.f)
		m_UpperYaw += fScale;
}
void APlayerCharacter::LookUp(float fScale)
{

	if (!m_bIsDead)
	{
		//
		AddControllerPitchInput(fScale * 45.f * GetWorld()->GetDeltaSeconds());
	}
}

void APlayerCharacter::UseAbility1()
{
	if (m_Slot1AbilityEnable && m_eSlot1Ability != EAbility::None)
	{
		m_Slot1AbilityEnable = false;
		m_HUD->GetMainHUDWidget()->ActiveSlot1Cooltime(m_Slot1AbilityCooltime);

		switch (m_eSlot1Ability)
		{
		case EAbility::Assult1:
			m_PrimaryWeapon->BurstMode(m_Slot1AbilityCooltime);
			break;
		case EAbility::Assult2:
			break;
		case EAbility::Assult3:
			AimAssist();
			break;
		case EAbility::Defence1:
			break;
		case EAbility::Defence2:
			break;
		case EAbility::Defence3:
			break;
		case EAbility::Utility1:
			break;
		case EAbility::Utility2:
			break;
		case EAbility::Utility3:
			break;
		}
	}
}
void APlayerCharacter::UseAbility2()
{
	if (m_Slot2AbilityEnable && m_eSlot2Ability != EAbility::None)
	{
		m_Slot2AbilityEnable = false;
		m_HUD->GetMainHUDWidget()->ActiveSlot2Cooltime(m_Slot2AbilityCooltime);

		switch (m_eSlot2Ability)
		{
		case EAbility::Assult1:
			m_PrimaryWeapon->BurstMode(m_Slot2AbilityCooltime);
			break;
		case EAbility::Assult2:
			break;
		case EAbility::Assult3:
			AimAssist();
			break;
		case EAbility::Defence1:
			break;
		case EAbility::Defence2:
			break;
		case EAbility::Defence3:
			break;
		case EAbility::Utility1:
			break;
		case EAbility::Utility2:
			break;
		case EAbility::Utility3:
			break;
		}
	}
}

void APlayerCharacter::InputJump()
{
	if (!m_bIsDead)
	{
		Jump();
		m_pPlayerAnim->JumpStart();
	}
}

void APlayerCharacter::AimPress()
{
	if (!m_bIsDead)
	{
		m_IsAiming = true;
	}
}

void APlayerCharacter::AimRelease()
{
	if (!m_bIsDead)
	{
		m_IsAiming = false;
	}
}

void APlayerCharacter::MagEmpty()
{
	m_bMagEmpty = true;
	m_pPlayerAnim->SetMagEmpty(true);
}
void APlayerCharacter::ReloadStart()
{
	
	m_pPlayerAnim->ReloadMontage();
	m_IsReloading = true;
}

void APlayerCharacter::ReloadEnd()
{
	m_pPlayerAnim->SetMagEmpty(false);
	m_PrimaryWeapon->Reload();
	m_IsReloading = false;
	m_bMagEmpty = false;
}
void APlayerCharacter::PrimaryFire()
{
	if (!m_bIsDead)
	{
		m_bFire = true;
		//m_PrimaryWeapon->Fire();
		m_pPlayerAnim->RifleFire();
	}
}

void APlayerCharacter::PrimaryStop()
{
	if (!m_bIsDead)
	{
		m_bFire = false;
		m_pPlayerAnim->RifleStop();
	}
}

void APlayerCharacter::EquipSuppressor()
{
	if (!m_bIsDead)
	{
		m_PrimaryWeapon->EquipSuppressor();
	}
}


float APlayerCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent,
	AController* EventInstigator, AActor* DamageCauser)
{
	Damage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	AddHP((int32)-Damage);

	m_pPlayerAnim->HitReaction();


	GetController<APlayerController>()->ClientStartCameraShake(UHitCameraShake::StaticClass(),
		0.5f, ECameraShakePlaySpace::CameraLocal);


	return Damage;
}

void APlayerCharacter::AddHP(int32 HP)
{
	m_PlayerInfo->AddHP(HP);

	m_HUD->UpdatePlayerHP(m_PlayerInfo->GetHPPercent());
}

void APlayerCharacter::EmitHitEffect(FVector ImpactLoc, FRotator Rot)
{

	FActorSpawnParameters	params;
	params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AHitEffect* pEffect = GetWorld()->SpawnActor<AHitEffect>(AHitEffect::StaticClass(),
		ImpactLoc, Rot, params);

	pEffect->SetActorScale3D(FVector(0.1f, 0.1f, 0.1f));

	pEffect->LoadParticle(m_HitParticle);
	pEffect->LoadSound(m_HitSound);
	
	int32 RandSound = FMath::FRandRange(0, 3);

	switch (RandSound)
	{
	case 0: 
		pEffect->LoadAdditionalSound1(m_HurtSound1);
		break;
	case 1:
		pEffect->LoadAdditionalSound1(m_HurtSound2);
		break;
	case 2:
		pEffect->LoadAdditionalSound1(m_HurtSound3);
		break;
	}

}

void APlayerCharacter::ShowHitMark()
{
	m_HUD->BodyShot();
}
void APlayerCharacter::ShowHeadShotMark()
{
	m_HUD->HeadShot();
}


void APlayerCharacter::AbilityWindowVisiblity()
{
	m_HUD->AbilityWindowToggle();
}

void APlayerCharacter::AimAssist()
{
	m_bAimAssist = true;
	m_AimAssistParticle->SetVisibility(true);
}

void APlayerCharacter::Detection()
{
	if (m_bAimAssist)
	{
		FVector StartLoc = m_Camera->GetComponentLocation();
		FVector EndLoc = StartLoc + m_Camera->GetForwardVector() * m_AutoShotRange;

		TArray<AActor*> IgnoreActor;
		IgnoreActor.Add(this);

		FHitResult result;

		bool bHit = UKismetSystemLibrary::CapsuleTraceSingle(GetWorld(), StartLoc, EndLoc, 600, 500,
			UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_GameTraceChannel7), true, IgnoreActor,
			EDrawDebugTrace::ForDuration, result, true, FLinearColor::Red, FLinearColor::Green, 0.01f);

		if (bHit)
		{
			AMonster* pMonster = Cast<AMonster>(result.Actor);
			FVector vLoc = m_Camera->GetRelativeLocation() - pMonster->GetActorLocation();
			FVector TargetLoc = pMonster->GetActorLocation() + FVector(0.f, 0.f, 68.f);
			m_AimLock->SetVisibility(true);
			/*m_AimLock->SetRelativeRotation(UKismetMathLibrary::FindLookAtRotation(m_Camera->GetRelativeLocation(),
				m_AimLock->GetRelativeLocation()));*/
			m_AimLock->SetWorldLocation(TargetLoc);
			m_AimLock->SetWorldRotation(FRotator(vLoc.Normalize()));
			m_AssistLoc = TargetLoc;
		}
		else
		{
			m_AimLock->SetVisibility(false);
		}


	}
}