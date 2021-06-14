// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "PlayerAnimation.h"
#include "Kismet/KismetMathLibrary.h"
#include "PrimaryWeapon.h"
#include "../HitCameraShake.h"
#include "../HitEffect.h"
#include "../EffectNormal.h"
#include "../UI/MainHUDWidget.h"
#include "../UI/PlayerEquipWidget.h"
#include "../Monster/Monster.h"
#include "Components/WidgetComponent.h"
#include "Perception/AISense_Damage.h"

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
	m_TimeAccelParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TimeAccelParticle"));
	m_PostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcess"));

	m_Camera->SetupAttachment(m_Arm);
	m_PostProcess->SetupAttachment(GetCapsuleComponent());
	m_Arm->SetupAttachment(GetCapsuleComponent());
	m_AimLock->SetupAttachment(GetCapsuleComponent());
	m_AimAssistParticle->SetupAttachment(GetCapsuleComponent());
	m_TimeAccelParticle->SetupAttachment(m_Camera);
	//m_Scene->SetupAttachment(GetCapsuleComponent());
	//m_eDirection = EMoveDir::None;

	m_PlayerInfo = CreateDefaultSubobject<UPlayerInfo>(TEXT("PlayerInfo"));

	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->JumpZVelocity = 500.f;
	m_UpperYaw = 0.f;
	m_bMagEmpty = false;
	m_AutoShotRange = 3000.f;
	SetHPMax(1000.f);
	SetHP(1000.f);
	
	GetCapsuleComponent()->SetCollisionProfileName("PlayerBody");
	m_AimLock->SetWidgetSpace(EWidgetSpace::Screen);
	m_AimAssistTime = 10.f;
	m_ShieldTime = 10.f;
	m_OverloadTime = 10.f;
	SetAbilityPoint(9);
	m_bDashEnable = true;
	m_DashEnableTime = 3.f;
	m_DashingTime = 0.25f;

	m_bTimeAccel = false;
	m_TimeAccelTime = 5.f; 
	//m_TimeAccelParticle->bAutoActivate = false;
	m_TimeAccelParticle->SetVisibility(false);
	m_PostProcess->bEnabled = false;

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

	//m_PrimaryWeapon->SetActorRotation(FRotator(GetActorForwardVector().X, GetActorForwardVector().Y, 
	//	GetActorForwardVector().X));
	m_PrimaryWeapon->SetActorRotation(GetActorRotation());
	m_HUD = Cast<APlayerHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	m_HUD->UpdatePlayerHP(m_PlayerInfo->GetHPPercent());

	SetRemainMag(100);
	m_HUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetRemainMagText(GetRemainMag());
	m_AimLock->SetVisibility(false);
	
	m_NightVision = Cast<UPostProcessComponent>(GetDefaultSubobjectByName(TEXT("PP_NighTvision")));
	m_ThermalVision = Cast<UPostProcessComponent>(GetDefaultSubobjectByName(TEXT("PP_ThermalVision")));
	m_ScopeParticle = Cast<UParticleSystemComponent>(GetDefaultSubobjectByName(TEXT("ScopeParticle")));
	m_bCloseAttackEnable = true;
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Detection();

	if (m_bFire && !m_IsReloading)
	{
		int32 rand = FMath::RandRange(0, 3);

		if (!m_IsAiming)
		{
			if (m_bAimAssist)
			{
				m_PrimaryWeapon->AutoFire(m_Camera->GetComponentLocation(), m_AssistLoc);
			}
			else if (!m_bAimAssist && rand == 0 && m_PlayerInfo->GetAssultLevel() >= 2)
				m_PrimaryWeapon->ExplosiveFire(m_Camera->GetComponentLocation(), m_Camera->GetForwardVector());
			else
				m_PrimaryWeapon->Fire(m_Camera->GetComponentLocation(), m_Camera->GetForwardVector());
		}
		else
		{
			if (m_bAimAssist)
			{
				m_PrimaryWeapon->AutoFire(m_PrimaryWeapon->GetCameraLoc(), m_AssistLoc);
			}
			else if (!m_bAimAssist && rand == 0 && m_PlayerInfo->GetAssultLevel() >= 2)
				m_PrimaryWeapon->ExplosiveFire(m_PrimaryWeapon->GetCameraLoc(), m_PrimaryWeapon->GetCameraForward());
			else
				m_PrimaryWeapon->Fire(m_PrimaryWeapon->GetCameraLoc(), m_PrimaryWeapon->GetCameraForward());

		}
	}
	if (m_bIsRightDashing)
	{
		if (m_DashingTimeAcc >= m_DashingTime)
		{
			m_bIsRightDashing = false;
			m_DashingTimeAcc = 0.f;
			GetCharacterMovement()->MaxAcceleration = 2048.f;
			GetCharacterMovement()->MaxWalkSpeed = 500.f;
			m_bIsDashing = false;
		}
		AddMovementInput(GetActorRightVector());

		FVector vLoc = GetMesh()->GetSocketLocation(TEXT("BoosterRSocket"));

		if (m_ThrusterParticle)
		{
			m_Thruster->SetActorLocation(vLoc);
		}
		m_DashingTimeAcc += DeltaTime;
	}

	if (m_bIsLeftDashing)
	{
		if (m_DashingTimeAcc >= m_DashingTime)
		{
			m_bIsLeftDashing = false;
			m_DashingTimeAcc = 0.f;
			GetCharacterMovement()->MaxAcceleration = 2048.f;
			GetCharacterMovement()->MaxWalkSpeed = 500.f;
			m_bIsDashing = false;
		}
		AddMovementInput(-GetActorRightVector());
		FVector vLoc = GetMesh()->GetSocketLocation(TEXT("BoosterLSocket"));

		if (m_Thruster)
		{
			m_Thruster->SetActorLocation(vLoc);
		}
		m_DashingTimeAcc += DeltaTime;
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

	if (m_bTimeAccel)
	{
		if (m_TimeAccelTimeAcc >= m_TimeAccelTime)
		{
			m_bTimeAccel = false;
			m_TimeAccelTimeAcc = 0.f;
			UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1.0f);
			this->CustomTimeDilation = 1.f;
			m_PrimaryWeapon->CustomTimeDilation = 1.f;
			m_TimeAccelParticle->SetVisibility(false);
			m_PostProcess->bEnabled = false;
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_TimeAccelOffSound, GetActorLocation());
		}
		m_TimeAccelTimeAcc += DeltaTime;
	}

	if (m_bShield)
	{
		if (m_ShieldTimeAcc >= m_ShieldTime)
		{
			if (m_bOverload && (float)m_ShieldHP / (float)m_ShieldHPMax > 0.3f)
			{
				GetMesh()->SetCustomDepthStencilValue(5);
			}
			else if (m_bOverload && (float)m_ShieldHP / (float)m_ShieldHPMax <= 0.3f)
			{
				GetMesh()->SetCustomDepthStencilValue(6);
			}
			else if (!m_bOverload)
			{
				GetMesh()->SetRenderCustomDepth(false);
			}
			m_bShield = false;
			m_ShieldTimeAcc = 0.f;
		}
		m_ShieldTimeAcc += DeltaTime;
	}

	if (m_bOverload)
	{
		if (m_OverloadTimeAcc >= m_OverloadTime)
		{
			if (m_bShield && (float)m_ShieldHP / (float)m_ShieldHPMax > 0.3f)
			{
				GetMesh()->SetCustomDepthStencilValue(5);
			}
			else if (m_bShield && (float)m_ShieldHP / (float)m_ShieldHPMax <= 0.3f)
			{
				GetMesh()->SetCustomDepthStencilValue(6);
			}
			else if(!m_bShield)
			{
				GetMesh()->SetRenderCustomDepth(false);
			}
				m_bOverload = false;
				m_OverloadTimeAcc = 0.f;
			
		}
		m_OverloadTimeAcc += DeltaTime;
	}

	if (!m_bIsDead)
	{
		if (m_HPRegenTimeAcc >= m_HPRegenTime)
		{
			if (m_bOverload)
				AddHP(m_PlayerInfo->GetHPRegen()* 20.f);
			else if (!m_bOverload && m_PlayerInfo->GetDefenceLevel() >= 2)
				AddHP(m_PlayerInfo->GetHPRegen()*1.75f);
			else if(!m_bOverload && m_PlayerInfo->GetDefenceLevel() < 2)
				AddHP(m_PlayerInfo->GetHPRegen());
			m_HPRegenTimeAcc = 0.f;

		}
		if (GetHP() >= GetHPMax())
			SetHP(GetHPMax());
		m_HPRegenTimeAcc += DeltaTime;
		m_HUD->UpdatePlayerHP(m_PlayerInfo->GetHPPercent());
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
	PlayerInputComponent->BindAxis(TEXT("SelectGear"), this, &APlayerCharacter::WheelEvent);

	//PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &APlayerCharacter::AttackKey);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &APlayerCharacter::InputJump);
	PlayerInputComponent->BindAction(TEXT("Aim"), EInputEvent::IE_Pressed, this, &APlayerCharacter::AimPress);
	PlayerInputComponent->BindAction(TEXT("Aim"), EInputEvent::IE_Released, this, &APlayerCharacter::AimRelease);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &APlayerCharacter::PrimaryFire);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Released, this, &APlayerCharacter::PrimaryStop);
	PlayerInputComponent->BindAction(TEXT("EquipGear"), EInputEvent::IE_Pressed, this, &APlayerCharacter::EquipGear);
	PlayerInputComponent->BindAction(TEXT("AbilitySlot1"), EInputEvent::IE_Pressed, this, &APlayerCharacter::UseAbility1);
	PlayerInputComponent->BindAction(TEXT("AbilitySlot2"), EInputEvent::IE_Pressed, this, &APlayerCharacter::UseAbility2);

	PlayerInputComponent->BindAction(TEXT("Reload"), EInputEvent::IE_Pressed, this, &APlayerCharacter::ReloadStart);
	PlayerInputComponent->BindAction(TEXT("CloseAttack"), EInputEvent::IE_Pressed, this, &APlayerCharacter::CloseAttackStart);

	PlayerInputComponent->BindAction(TEXT("AbilityWindowToggle"), EInputEvent::IE_Pressed, this, &APlayerCharacter::AbilityWindowVisiblity).bExecuteWhenPaused = true;

	PlayerInputComponent->BindAction(TEXT("DashRight"), EInputEvent::IE_Pressed, this, &APlayerCharacter::DashRight);
	PlayerInputComponent->BindAction(TEXT("DashLeft"), EInputEvent::IE_Pressed, this, &APlayerCharacter::DashLeft);
	
}


void APlayerCharacter::MoveFront(float fScale)
{

	if (!m_bIsDead && GetCharacterMovement()->IsMovingOnGround() && !m_bIsDashing)
		AddMovementInput(GetActorForwardVector(), fScale);


}
void APlayerCharacter::MoveSide(float fScale)
{
	if (!m_bIsDead && GetCharacterMovement()->IsMovingOnGround() && !m_bIsDashing)
		AddMovementInput(GetActorRightVector(), fScale);

	
}

void APlayerCharacter::Turn(float fScale)
{

	if (!m_bIsDead && !m_bIsDashing)
	{
		if (m_bTimeAccel)
			AddControllerYawInput(fScale * 45.f * 10.f * GetWorld()->GetDeltaSeconds());
		else
			AddControllerYawInput(fScale * 45.f * GetWorld()->GetDeltaSeconds());
	}

}

void APlayerCharacter::AddUpperYawInput(float fScale)
{
	if (fScale > 0.f || fScale < 0.f && !m_bIsDead && !m_bIsDashing)
		m_UpperYaw += fScale;
}
void APlayerCharacter::LookUp(float fScale)
{

	if (!m_bIsDead && !m_bIsDashing)
	{
		if(m_bTimeAccel)
			AddControllerPitchInput(fScale * 45.f * 10.f * GetWorld()->GetDeltaSeconds());
		else
			AddControllerPitchInput(fScale * 45.f * GetWorld()->GetDeltaSeconds());
	}
}
void APlayerCharacter::WheelEvent(float fScale)
{
	if (fScale != 0.f)
	{
		m_HUD->GetMainHUDWidget()->GetPlayerEquipWidget()->ChangeGear(fScale);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_GearSearchSound, GetActorLocation());
	}
}

void APlayerCharacter::UseAbility1()
{
	if (m_Slot1AbilityEnable && m_eSlot1Ability != EAbility::None && !m_bIsDead && !m_bIsDashing)
	{
		m_Slot1AbilityEnable = false;
		m_HUD->GetMainHUDWidget()->ActiveSlot1Cooltime(m_Slot1AbilityCooltime);

		switch (m_eSlot1Ability)
		{
		case EAbility::Assult1:
			m_PrimaryWeapon->BurstMode(m_Slot1AbilityCooltime);
			break;
		case EAbility::Assult3:
			AimAssist();
			break;
		case EAbility::Defence1:
			PlasmaShield();
			break;
		case EAbility::Defence3:
			ReactorOverload();
			break;
		case EAbility::Utility3:
			TimeAccecleration();
			break;
		}
	}
}
void APlayerCharacter::UseAbility2()
{
	if (m_Slot2AbilityEnable && m_eSlot2Ability != EAbility::None && !m_bIsDead && !m_bIsDashing)
	{
		m_Slot2AbilityEnable = false;
		m_HUD->GetMainHUDWidget()->ActiveSlot2Cooltime(m_Slot2AbilityCooltime);

		switch (m_eSlot2Ability)
		{
		case EAbility::Assult1:
			m_PrimaryWeapon->BurstMode(m_Slot2AbilityCooltime);
			break;
		case EAbility::Assult3:
			AimAssist();
			break;
		case EAbility::Defence1:
			PlasmaShield();
			break;
		case EAbility::Defence3:
			ReactorOverload();
			break;
		case EAbility::Utility1:
			break;
		case EAbility::Utility3:
			TimeAccecleration();
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
	if (!m_bIsDead && m_bScope)
	{
		m_IsAiming = true;
		m_pPlayerAnim->SetAiming(true);
		APlayerController* pController = Cast<APlayerController>(GetController());

		pController->SetViewTargetWithBlend(m_PrimaryWeapon, 0.2f);
		m_PrimaryWeapon->EnableInput(pController);
		m_HUD->GetMainHUDWidget()->SetScopeAimVisible(true);
	}
}

void APlayerCharacter::AimRelease()
{
	if (!m_bIsDead && m_bScope)
	{
		m_IsAiming = false;
		m_HUD->GetMainHUDWidget()->SetScopeAimVisible(false);
		m_pPlayerAnim->SetAiming(false);
		APlayerController* pController = Cast<APlayerController>(GetController());

		m_PrimaryWeapon->DisableInput(pController);
		pController->SetViewTargetWithBlend(this, 0.2f);
	}
}

void APlayerCharacter::MagEmpty()
{
	m_bMagEmpty = true;
	m_pPlayerAnim->SetMagEmpty(true);
}
void APlayerCharacter::ReloadStart()
{
	if (!m_bIsDead)
	{
		if (m_IsAiming)
			m_pPlayerAnim->ReloadAimMontage();
		else
			m_pPlayerAnim->ReloadMontage();
		m_IsReloading = true;
	}
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
		if(m_IsAiming)
			m_pPlayerAnim->RifleAimFire();
		else
			m_pPlayerAnim->RifleFire();
	}
}

void APlayerCharacter::PrimaryStop()
{
	if (!m_bIsDead)
	{
		m_bFire = false;
		if (m_IsAiming)
			m_pPlayerAnim->RifleAimStop();
		else
			m_pPlayerAnim->RifleStop();
	}
}

void APlayerCharacter::EquipGear()
{
	if (!m_bIsDead)
	{
		switch (m_HUD->GetMainHUDWidget()->GetPlayerEquipWidget()->GetCurrentGear())		
		{
		case EGearType::None:
			if (m_PrimaryWeapon->GetSuppressorUsing())
			{
				m_PrimaryWeapon->EquipSuppressor();
			}
			else if (m_PrimaryWeapon->GetScopeUsing())
			{
				m_PrimaryWeapon->EquipScope();
			}
			else if (m_bThermalVision)
			{
				m_ThermalVision->bEnabled = false;
				m_bThermalVision = false;
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ButtonSound, GetActorLocation());
			}
			else if (m_bNightVision)
			{
				m_NightVision->bEnabled = false;
				m_bNightVision = false;
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ButtonSound, GetActorLocation());
			}
			break;

		case EGearType::Suppressor:
			/*if (m_PrimaryWeapon->GetScopeUsing())
			{
				m_PrimaryWeapon->EquipScope();
			}
			else if (m_bThermalVision)
			{
				m_ThermalVision->bEnabled = false;
				m_bThermalVision = false;
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ButtonSound, GetActorLocation());
			}
			else if (m_bNightVision)
			{
				m_NightVision->bEnabled = false;
				m_bNightVision = false;
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ButtonSound, GetActorLocation());
			}*/
			if (m_PrimaryWeapon->GetSuppressorUsing())
			{
				m_HUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetGearTextColorOrigin();
			}
			else
			{
				m_HUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetGearTextColorBlue();
			}
				m_PrimaryWeapon->EquipSuppressor();
			break;

		case EGearType::Scope:
			/*if (m_PrimaryWeapon->GetSuppressorUsing())
			{
				m_PrimaryWeapon->EquipSuppressor();
			}
			else if (m_bThermalVision)
			{
				m_ThermalVision->bEnabled = false;
				m_bThermalVision = false;
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ButtonSound, GetActorLocation());
			}
			else if (m_bNightVision)
			{
				m_NightVision->bEnabled = false;
				m_bNightVision = false;
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ButtonSound, GetActorLocation());
			}*/

			m_PrimaryWeapon->EquipScope();
			if (!m_bScope)
			{
				m_bScope = true;
				m_HUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetGearTextColorBlue();
			}
			else
			{
				m_bScope = false;
				m_HUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetGearTextColorOrigin();
			}
			break;

		case EGearType::NightVision:
			/*if (m_PrimaryWeapon->GetSuppressorUsing())
			{
				m_PrimaryWeapon->EquipSuppressor();
			}

			else if (m_PrimaryWeapon->GetScopeUsing())
			{
				m_bScope = true;
				m_PrimaryWeapon->EquipScope();
			}*/

			if (m_bThermalVision)
			{
				m_ThermalVision->bEnabled = false;
				m_bThermalVision = false;
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ButtonSound, GetActorLocation());
			}
			if (!m_bNightVision)
			{
				if (!m_bShield && !m_bOverload)
				{
					m_NightVision->bEnabled = true;
					m_bNightVision = true;
				}
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_NightVisionSound, GetActorLocation());
				m_HUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetGearTextColorBlue();
			}
			else
			{
				m_NightVision->bEnabled = false;
				m_bNightVision = false;
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ButtonSound, GetActorLocation());
				m_HUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetGearTextColorOrigin();
			}
			break;

		case EGearType::ThermalVision:
			/*if (m_PrimaryWeapon->GetSuppressorUsing())
			{
				m_PrimaryWeapon->EquipSuppressor();
			}
			else if (m_PrimaryWeapon->GetScopeUsing())
			{
				m_PrimaryWeapon->EquipScope();
			}*/

			if (m_bNightVision)
			{
				m_NightVision->bEnabled = false;
				m_bNightVision = false;
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ButtonSound, GetActorLocation());
			}

			if (!m_bThermalVision)
			{
				if (!m_bShield && !m_bOverload)
				{
					GetMesh()->SetRenderCustomDepth(true);
					GetMesh()->SetCustomDepthStencilValue(9);

					m_ThermalVision->bEnabled = true;
					m_bThermalVision = true;
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_NightVisionSound, GetActorLocation());
				}
				m_HUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetGearTextColorBlue();
			}
			else
			{
				if (m_bShield && m_bOverload)
				{
					if ((float)m_ShieldHP / (float)m_ShieldHPMax > 0.3f)
					{
						GetMesh()->SetCustomDepthStencilValue(7);
					}
					else
					{
						GetMesh()->SetCustomDepthStencilValue(8);
					}
				}
				else if(m_bShield)
				{
					GetMesh()->SetCustomDepthStencilValue(5);
				}
				else if (m_bOverload)
				{
					GetMesh()->SetCustomDepthStencilValue(2);
				}
				else
				{
					GetMesh()->SetCustomDepthStencilValue(9);
					GetMesh()->SetRenderCustomDepth(false);
				}
				m_bThermalVision = false;
				m_ThermalVision->bEnabled = false;
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ButtonSound, GetActorLocation());
				m_HUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetGearTextColorOrigin();
			}
			break;
		}
	}
}


float APlayerCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent,
	AController* EventInstigator, AActor* DamageCauser)
{
	Damage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	if (m_bShield && m_ShieldHP >= (int32)Damage)
	{
		m_ShieldHP -= (int32)Damage;

		if (0.3f >= ((float)m_ShieldHP / (float)m_ShieldHPMax))
		{
			GetMesh()->SetCustomDepthStencilValue(6);
		}
	}
	else if (m_bShield && m_ShieldHP < (int32)Damage)
	{
		m_ShieldHP -= (int32)Damage;
		AddHP((float)m_ShieldHP);

		m_bShield = false;
		GetMesh()->SetRenderCustomDepth(false);
		m_ShieldTimeAcc = 0.f;
		if(!m_IsReloading)
			m_pPlayerAnim->HitReaction();
	}
	else if (!m_bShield)
	{
		AddHP(-Damage);
		if (!m_IsReloading)
			m_pPlayerAnim->HitReaction();
	}

	if (GetHP() <= 0)
	{
		m_bIsDead = true;
		m_pPlayerAnim->SetIsDead();
	}


	GetController<APlayerController>()->ClientStartCameraShake(UHitCameraShake::StaticClass(),
		0.5f, ECameraShakePlaySpace::CameraLocal);


	return Damage;
}

void APlayerCharacter::AddHP(float HP)
{
	m_PlayerInfo->AddHP(HP);

	m_HUD->UpdatePlayerHP(m_PlayerInfo->GetHPPercent());
}

void APlayerCharacter::EmitHitEffect(FVector ImpactLoc, FRotator Rot)
{
	if (!m_bIsDead)
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

void APlayerCharacter::PlasmaShield()
{
	m_bShield = true;
	m_ShieldHP = m_ShieldHPMax;
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(5);

	if (m_bOverload)
	{
		if ((float)m_ShieldHP / (float)m_ShieldHPMax > 0.3f)
		{
			GetMesh()->SetCustomDepthStencilValue(7);
		}
		else
		{
			GetMesh()->SetCustomDepthStencilValue(8);
		}
	}
	else
	{
		GetMesh()->SetCustomDepthStencilValue(5);
	}
}

void APlayerCharacter::UpdateRemainMag()
{
	m_HUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetRemainMagText(GetRemainMag());
}

void APlayerCharacter::ReactorOverload()
{
	m_bOverload = true;
	GetMesh()->SetRenderCustomDepth(true);
	if (m_bShield)
	{
		if ((float)m_ShieldHP / (float)m_ShieldHPMax > 0.3f)
		{
			GetMesh()->SetCustomDepthStencilValue(7);
		}
		else
		{
			GetMesh()->SetCustomDepthStencilValue(8);
		}
	}
	else
	{
		GetMesh()->SetCustomDepthStencilValue(2);
	}

}


void APlayerCharacter::DashRight()
{
	if (m_Slot1AbilityEnable && m_eSlot1Ability == EAbility::Utility1 && !m_bIsDead && !m_bIsDashing)
	{
		m_Slot1AbilityEnable = false;
		m_HUD->GetMainHUDWidget()->ActiveSlot1Cooltime(m_Slot1AbilityCooltime);

		GetCharacterMovement()->MaxAcceleration = 50000.f;
		GetCharacterMovement()->MaxWalkSpeed = 4000.f;
		m_bIsRightDashing = true;
		m_bIsDashing = true;

		FVector vLoc = GetMesh()->GetSocketLocation(TEXT("BoosterRSocket"));
		FRotator vRot = GetMesh()->GetSocketRotation(TEXT("BoosterRSocket"));

		m_Thruster = GetWorld()->SpawnActor<AEffectNormal>(m_ThrusterParticle, vLoc, vRot);
		m_Thruster->SetActorScale3D(FVector(0.3f, 0.3f, 0.3f));
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ThrusterSound, GetActorLocation());
	}
	
	else if (m_Slot2AbilityEnable && m_eSlot2Ability == EAbility::Utility1 && !m_bIsDead && !m_bIsDashing)
	{
		m_Slot2AbilityEnable = false;
		m_HUD->GetMainHUDWidget()->ActiveSlot2Cooltime(m_Slot2AbilityCooltime);

		GetCharacterMovement()->MaxAcceleration = 50000.f;
		GetCharacterMovement()->MaxWalkSpeed = 4000.f;
		m_bIsRightDashing = true;
		m_bIsDashing = true;

		FVector vLoc = GetMesh()->GetSocketLocation(TEXT("BoosterRSocket"));
		FRotator vRot = GetMesh()->GetSocketRotation(TEXT("BoosterRSocket"));

		m_Thruster = GetWorld()->SpawnActor<AEffectNormal>(m_ThrusterParticle, vLoc, vRot);
		m_Thruster->SetActorScale3D(FVector(0.3f, 0.3f, 0.3f));
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ThrusterSound, GetActorLocation());
	}

	
}

void APlayerCharacter::DashLeft()
{
	if (m_Slot1AbilityEnable && m_eSlot1Ability == EAbility::Utility1 && !m_bIsDead && !m_bIsDashing)
	{
		m_Slot1AbilityEnable = false;
		m_HUD->GetMainHUDWidget()->ActiveSlot1Cooltime(m_Slot1AbilityCooltime);

		GetCharacterMovement()->MaxAcceleration = 50000.f;
		GetCharacterMovement()->MaxWalkSpeed = 4000.f;
		m_bIsLeftDashing = true;
		m_bIsDashing = true;

		FVector vLoc = GetMesh()->GetSocketLocation(TEXT("BoosterLSocket"));
		FRotator vRot = GetMesh()->GetSocketRotation(TEXT("BoosterLSocket"));

		m_Thruster = GetWorld()->SpawnActor<AEffectNormal>(m_ThrusterParticle, vLoc, vRot);
		m_Thruster->SetActorScale3D(FVector(0.3f, 0.3f, 0.3f));
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ThrusterSound, GetActorLocation());

	}
	
	else if (m_Slot2AbilityEnable && m_eSlot2Ability == EAbility::Utility1 && !m_bIsDead && !m_bIsDashing)
	{
		m_Slot2AbilityEnable = false;
		m_HUD->GetMainHUDWidget()->ActiveSlot2Cooltime(m_Slot2AbilityCooltime);

		GetCharacterMovement()->MaxAcceleration = 50000.f;
		GetCharacterMovement()->MaxWalkSpeed = 4000.f;
		m_bIsLeftDashing = true;
		m_bDashEnable = false;
		m_bIsDashing = true;

		FVector vLoc = GetMesh()->GetSocketLocation(TEXT("BoosterLSocket"));
		FRotator vRot = GetMesh()->GetSocketRotation(TEXT("BoosterLSocket"));

		m_Thruster = GetWorld()->SpawnActor<AEffectNormal>(m_ThrusterParticle, vLoc, vRot);
		m_Thruster->SetActorScale3D(FVector(0.3f, 0.3f, 0.3f));
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ThrusterSound, GetActorLocation());

	
	}

}


void APlayerCharacter::GetAmmoFromItem(int Ammo)
{
	if (m_PlayerInfo->GetUtilityLevel() >= 2)
	{
		AddRemainMag((int)(Ammo * 1.5f));
	}
	else
	{
		AddRemainMag((int)(Ammo));
	}
}


void APlayerCharacter::TimeAccecleration()
{
	m_bTimeAccel = true;
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 0.1f);
	this->CustomTimeDilation = 10.f;
	m_PrimaryWeapon->CustomTimeDilation = 10.f;
	m_TimeAccelParticle->SetVisibility(true);
	m_TimeAccelParticle->ToggleActive();
	m_PostProcess->bEnabled = true;
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_TimeAccelOnSound, GetActorLocation());
}

bool APlayerCharacter::GetUsingSuppressor()
{
	return m_PrimaryWeapon->GetSuppressorUsing();
}

void APlayerCharacter::CloseAttack()
{
	FHitResult result;

	FCollisionQueryParams	params(NAME_None, false, this);


	bool bSweep = GetWorld()->SweepSingleByChannel(result, GetActorLocation() - GetActorForwardVector() *
		m_PlayerInfo->GetCloseAttackDistance(), GetActorLocation() + GetActorForwardVector() *
		m_PlayerInfo->GetCloseAttackDistance(), FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel7,
		FCollisionShape::MakeSphere(m_PlayerInfo->GetCloseAttackDistance()), params);
	if (bSweep)
	{
		AMonster* pMonster = Cast<AMonster>(result.GetActor());

		FVector vDir = GetActorLocation() - result.ImpactPoint;
		vDir.Normalize();
		FRotator	vRot = vDir.ToOrientationRotator();

		if (pMonster)
		{
			FDamageEvent DmgEvent;
			//pMonster->TakeDamage(m_PlayerInfo->GetCloseAttackDamage(), DmgEvent, GetController(), this);
			pMonster->TakeDamageFromClose(m_PlayerInfo->GetCloseAttackDamage(), DmgEvent, GetController(), this);
			pMonster->EmitHeadshotEffect(result.ImpactPoint, vRot);
			UAISense_Damage::ReportDamageEvent(GetWorld(), pMonster, this, m_PlayerInfo->GetCloseAttackDamage(),
				pMonster->GetActorLocation(), result.ImpactPoint);
		}
	}

#if ENABLE_DRAW_DEBUG
	FColor	DrawColor = bSweep ? FColor::Red : FColor::Green;



	DrawDebugCone(GetWorld(), GetActorLocation(), GetActorForwardVector(), m_PlayerInfo->GetCloseAttackDistance(),
		FMath::DegreesToRadians(22.5f), FMath::DegreesToRadians(22.5f), 20, DrawColor, false, 1.f);
#endif // ENABLE_DRAW_DEBUGEDITOR
}
void APlayerCharacter::CloseAttackStart()
{
	if (m_bCloseAttackEnable)
	{
		m_bCloseAttackEnable = false;
		m_pPlayerAnim->CloseAttack();
	}
}
void APlayerCharacter::CloseAttackEnd()
{
	m_bCloseAttackEnable = true;
}