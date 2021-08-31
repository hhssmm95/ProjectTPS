// Fill out your copyright notice in the Description page of Project Settings.


#include "PrimaryWeapon.h"
#include "Kismet/KismetMathLibrary.h"
#include "../Bullet.h"
#include "../EffectNormal.h"
#include "../PlayerHUD.h"
#include "../UI/MainHUDWidget.h"
#include "../UI/PlayerEquipWidget.h"
#include "PlayerCharacter.h"
#include "Perception/AISense_Hearing.h"
#include "../Monster/Monster.h"
#include "../ExplosiveBullet.h"

// Sets default values
APrimaryWeapon::APrimaryWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	m_Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	//m_RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	m_SuppressorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Suppressor"));
	//SetRootComponent(m_RootScene);
	SetRootComponent(m_Mesh);
	m_ScopeCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ScopeCamera"));
	
	//m_Mesh->SetupAttachment(m_RootScene);
	m_SuppressorMesh->SetupAttachment(m_Mesh);
	m_ScopeCamera->SetupAttachment(m_Mesh);


	Delay = false;
	DelayTime = 0.12f;
	DelayTimeAcc = 0.f;

	m_bSuppressorUsing = false;
	m_SuppressorMesh->SetVisibility(false);

	//m_BulletSpreadYaw = 1.f;
	//m_CurrentBulletSpreadYaw = 0.f;
	//m_BulletSpreadPitch = 3.f;
	//m_CurrentBulletSpreadPitch = 0.f;
	m_RecoilStack = 0;
	m_bRecoilRecovering = false;
}

// Called when the game starts or when spawned
void APrimaryWeapon::BeginPlay()
{
	Super::BeginPlay();

	//InputComponent->BindAxis(TEXT("LookUp"), this, &APlayerCharacter::LookUp);
	//InputComponent->BindAxis(TEXT("LookUp"), this, &APrimaryWeapon::LookUp);
	m_Player = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

	m_PlayerHUD = Cast<APlayerHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetCurrentMagText(m_CurrentMagMax);

	m_CurrentMag = m_CurrentMagMax;


	m_ScopeMesh = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("ScopeMesh")));
	m_SPDurability = m_SPDurabilityMax;

}

//
//void APrimaryWeapon::LookUp(float fScale)
//{
//	m_Pitch = FMath::Clamp(m_Pitch + fScale, -60.f, 60.f);
//
//	m_ScopeCamera->SetRelativeRotation(FRotator(m_ScopeCamera->GetComponentRotation().Yaw, 
//		-m_Pitch, m_ScopeCamera->GetComponentRotation().Roll));
//	
//}

// Called every frame
void APrimaryWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



	if (Delay)
	{
		DelayTimeAcc += DeltaTime;
		if (DelayTimeAcc >= DelayTime)
		{
			Delay = false;
			DelayTimeAcc = 0.f;
		}
	}

	if (m_bBurst)
	{
		m_BurstTimeAcc += DeltaTime;
		if (m_BurstTimeAcc >= m_BurstTime)
		{
			m_bBurst = false;
			BurstEnd();
			m_BurstTimeAcc = 0.f;
		}
	}

	if (m_bRecoilRecovering)
	{
		m_Player->IncreaseShotRecoil(-2.f);
	}
}

void APrimaryWeapon::LoadMesh(const FString& strPath)
{
	USkeletalMesh* pMesh = LoadObject<USkeletalMesh>(nullptr, *strPath);


	if (IsValid(pMesh))
		m_Mesh->SetSkeletalMesh(pMesh);
}

void APrimaryWeapon::BurstMode(float BurstTime)
{
	m_bBurst = true;
	m_BurstTime = BurstTime;
	DelayTime = 0.06f;
	GetMesh()->SetRenderCustomDepth(true);
	m_SuppressorMesh->SetRenderCustomDepth(true);
	m_ScopeMesh->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(3);
	m_SuppressorMesh->SetCustomDepthStencilValue(3);
	m_ScopeMesh->SetCustomDepthStencilValue(3);

	UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_BurstModeSoundClass, GetActorLocation());
}
void APrimaryWeapon::BurstEnd()
{
	m_bBurst = false;
	DelayTime = 0.12f;
	GetMesh()->SetRenderCustomDepth(false);
	m_SuppressorMesh->SetRenderCustomDepth(false);
	m_ScopeMesh->SetRenderCustomDepth(false);
}

void APrimaryWeapon::AutoFire(FVector CameraPos, FVector TargetPos)
{
	if (!Delay)
	{
		if (m_CurrentMag > 0)
		{
			FHitResult result;

			TArray<AActor*> IgnoreActor;
			IgnoreActor.Add(this);

			FVector vMuzzlePos = GetMesh()->GetSocketLocation(TEXT("FireMuzzle"));
			FRotator vMuzzleRot = GetActorRotation();
			AEffectNormal* Muzzle;
			if (!m_bSuppressorUsing)
			{
				if (m_bBurst)
				{
					Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_BurstMuzzleClass, vMuzzlePos,
						vMuzzleRot);
				}
				else
				{
					Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_MuzzleClass, vMuzzlePos,
						vMuzzleRot);
				}

			}
			if (m_bSuppressorUsing)
			{
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_SuppressorSoundClass, GetActorLocation());
				UAISense_Hearing::ReportNoiseEvent(GetWorld(), GetActorLocation(), 1.f,
					m_Player, 3000.f, TEXT("SuppressorNoise"));

				m_SPDurability -= m_SPDurabilityDecrease;
				if (m_SPDurability <= 0.f)
				{
					m_SPDurability = 0.f;
					EquipSuppressor();
				}
				m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->
					SetSPDurabilityBar(m_SPDurability / m_SPDurabilityMax);
			}
			else
			{
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_MuzzleSoundClass, GetActorLocation());
				UAISense_Hearing::ReportNoiseEvent(GetWorld(), GetActorLocation(), 1.f,
					m_Player, 3000.f, TEXT("GunShotNoise"));
			}


			bool bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(), CameraPos, TargetPos,
				UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_GameTraceChannel1), true, IgnoreActor,
				EDrawDebugTrace::None, result, true, FLinearColor::Red, FLinearColor::Green, 0.1f);

			if (bHit)
			{
				AMonster* pMonster = Cast<AMonster>(result.Actor);
				if (pMonster)
				{
					FDamageEvent DmgEvent;

					FVector vDir = GetActorLocation() - result.ImpactPoint;
					vDir.Normalize();
					FRotator	vRot = vDir.ToOrientationRotator();

					if (result.BoneName.ToString() == TEXT("head"))
					{
						pMonster->TakeDamage(m_Damage * 3, DmgEvent, m_Player->GetController(), m_Player);
						pMonster->EmitHeadshotEffect(result.ImpactPoint, vRot);
						m_Player->ShowHeadShotMark();
					}
					else
					{
						pMonster->TakeDamage(m_Damage, DmgEvent, m_Player->GetController(), m_Player);
						pMonster->EmitHitEffect(result.ImpactPoint, vRot);
						m_Player->ShowHitMark();
					}
				}

			}
			else
			{
			

			}

			m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetCurrentMagText(m_CurrentMag);
			if (m_CurrentMag < 0)
				m_CurrentMag = 0;

			if (m_CurrentMag == 0)
				m_Player->MagEmpty();


		}
		else
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_EmptySoundClass, GetActorLocation());
		}
		Delay = true;
	}
}

void APrimaryWeapon::Fire(UCameraComponent* PlayerCamera)
{
	if (!Delay)
	{
		if (m_CurrentMag > 0)
		{
			if (m_bRecoilRecovering)
				m_bRecoilRecovering = false;

			FHitResult result;

			TArray<AActor*> IgnoreActor;
			IgnoreActor.Add(this);

			//FVector RecoilOffset = FVector(CameraForward.X + m_CurrentBulletSpreadYaw,
			//	CameraForward.Y + m_CurrentBulletSpreadPitch, 1.f );

			FVector2D RandPoint = RandPointInCircle(20.f * (float)m_RecoilStack);
			
			//PrintViewport(2.f, FColor::Yellow, FString::Printf(TEXT("RandPoint (%f, %f)"), RandPoint.X, RandPoint.Y));

			FVector RecoilOffset = ((PlayerCamera->GetComponentLocation() + PlayerCamera->GetForwardVector() * 10000.f)
				+ (PlayerCamera->GetRightVector() * RandPoint.X) + (PlayerCamera->GetUpVector() * RandPoint.Y));

			bool bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(), PlayerCamera->GetComponentLocation(),
				RecoilOffset, UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_GameTraceChannel1), true, 
				IgnoreActor, EDrawDebugTrace::None, result, true);
			

			

			/*PrintViewport(2.f, FColor::Yellow, FString::Printf(TEXT("RecoilOffset (%f, %f, %f), RecoilStack(%d)"), RecoilOffset.X,
				RecoilOffset.Y, RecoilOffset.Z, m_RecoilStack));*/


			if (bHit)
			{
				FVector vMuzzlePos = GetMesh()->GetSocketLocation(TEXT("FireMuzzle"));
				FRotator vMuzzleRot = GetActorRotation();

				AEffectNormal* Muzzle;
				if (!m_bSuppressorUsing)
				{
					if (m_bBurst)
					{
						Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_BurstMuzzleClass, vMuzzlePos,
							vMuzzleRot);
					}
					else
					{
						Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_MuzzleClass, vMuzzlePos,
							vMuzzleRot);
					}

				}



				FRotator BulletRot = UKismetMathLibrary::FindLookAtRotation(vMuzzlePos + GetActorForwardVector() * 40.f, result.ImpactPoint);
				ABullet* Bullet;
				if (m_bBurst)
				{
					Bullet = GetWorld()->SpawnActor<ABullet>(m_BurstBulletClass, vMuzzlePos + GetActorForwardVector() * 40.f,
						BulletRot);
				}
				else
				{
					Bullet = GetWorld()->SpawnActor<ABullet>(m_BulletClass, vMuzzlePos + GetActorForwardVector() * 40.f,
						BulletRot);
				}

				 

				if (m_bSuppressorUsing)
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_SuppressorSoundClass, GetActorLocation());
					UAISense_Hearing::ReportNoiseEvent(GetWorld(), GetActorLocation(), 1.f,
						m_Player, 3000.f, TEXT("SuppressorNoise"));

					m_SPDurability -= m_SPDurabilityDecrease;
					if (m_SPDurability <= 0.f)
					{
						m_SPDurability = 0.f;
						EquipSuppressor();
					}
					m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->
						SetSPDurabilityBar(m_SPDurability / m_SPDurabilityMax);
				}
				else
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_MuzzleSoundClass, GetActorLocation());
					UAISense_Hearing::ReportNoiseEvent(GetWorld(), GetActorLocation(), 1.f,
						m_Player, 3000.f, TEXT("GunShotNoise"));
				}

				m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetCurrentMagText(--m_CurrentMag);
				if (m_CurrentMag < 0)
					m_CurrentMag = 0;
				
				if (m_CurrentMag == 0)
					m_Player->MagEmpty();

				

				

				m_RecoilStack++;
				m_Player->IncreaseShotRecoil(4.f);
				Delay = true;
			}
			else
			{
				FVector vMuzzlePos = GetMesh()->GetSocketLocation(TEXT("FireMuzzle"));
				FRotator vMuzzleRot = GetActorRotation();
				AEffectNormal* Muzzle;
				if (!m_bSuppressorUsing)
				{
					if (m_bBurst)
					{
						Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_BurstMuzzleClass, vMuzzlePos,
							vMuzzleRot);
					}
					else
					{
						Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_MuzzleClass, vMuzzlePos,
							vMuzzleRot);
					}
						
				}

				ABullet* Bullet;
				if (m_bBurst)
				{
					Bullet = GetWorld()->SpawnActor<ABullet>(m_BurstBulletClass, vMuzzlePos + GetActorForwardVector() * 40.f,
						GetActorRotation());
				}
				else
				{
					Bullet = GetWorld()->SpawnActor<ABullet>(m_BulletClass, vMuzzlePos + GetActorForwardVector() * 40.f,
						GetActorRotation());
				}


				if (m_bSuppressorUsing)
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_SuppressorSoundClass, GetActorLocation());
					UAISense_Hearing::ReportNoiseEvent(GetWorld(), GetActorLocation(), 1.f,
						m_Player, 3000.f, TEXT("SuppressorNoise"));

					m_SPDurability -= m_SPDurabilityDecrease;
					if (m_SPDurability <= 0.f)
					{
						m_SPDurability = 0.f;
						EquipSuppressor();
					}
					m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->
						SetSPDurabilityBar(m_SPDurability / m_SPDurabilityMax);
				}
				else
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_MuzzleSoundClass, GetActorLocation());
					UAISense_Hearing::ReportNoiseEvent(GetWorld(), GetActorLocation(), 1.f,
						m_Player, 3000.f, TEXT("GunShotNoise"));
				}

				m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetCurrentMagText(--m_CurrentMag);
				if (m_CurrentMag < 0)
					m_CurrentMag = 0;
				Delay = true;


			}

			//m_CurrentBulletSpreadYaw += m_BulletSpreadYaw;
			//m_CurrentBulletSpreadPitch += m_BulletSpreadPitch;
		}
		else
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_EmptySoundClass, GetActorLocation());
			Delay = true;
		}
	}
}

void APrimaryWeapon::ExplosiveFire(UCameraComponent* PlayerCamera)
{
	if (!Delay)
	{
		if (m_CurrentMag > 0)
		{
			if (m_bRecoilRecovering)
				m_bRecoilRecovering = false;

			FHitResult result;

			TArray<AActor*> IgnoreActor;
			IgnoreActor.Add(this);
			FVector2D RandPoint = RandPointInCircle(20.f * (float)m_RecoilStack);

			//PrintViewport(2.f, FColor::Yellow, FString::Printf(TEXT("RandPoint (%f, %f)"), RandPoint.X, RandPoint.Y));

			FVector RecoilOffset = ((PlayerCamera->GetComponentLocation() + PlayerCamera->GetForwardVector() * 10000.f)
				+ (PlayerCamera->GetRightVector() * RandPoint.X) + (PlayerCamera->GetUpVector() * RandPoint.Y));

			bool bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(), PlayerCamera->GetComponentLocation(),
				RecoilOffset, UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_GameTraceChannel1), true,
				IgnoreActor, EDrawDebugTrace::None, result, true);


			if (bHit)
			{
				FVector vMuzzlePos = GetMesh()->GetSocketLocation(TEXT("FireMuzzle"));
				FRotator vMuzzleRot = GetActorRotation();

				AEffectNormal* Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_BurstMuzzleClass, 
					vMuzzlePos,	vMuzzleRot);


				FRotator BulletRot = UKismetMathLibrary::FindLookAtRotation(vMuzzlePos + GetActorForwardVector() * 40.f, result.ImpactPoint);
				AExplosiveBullet* Bullet = GetWorld()->SpawnActor<AExplosiveBullet>(m_ExplosiveBulletClass,
					vMuzzlePos + GetActorForwardVector() * 40.f, BulletRot);
				



				if (m_bSuppressorUsing)
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_SuppressorSoundClass, GetActorLocation());
					UAISense_Hearing::ReportNoiseEvent(GetWorld(), GetActorLocation(), 1.f,
						m_Player, 3000.f, TEXT("SuppressorNoise"));

					m_SPDurability -= m_SPDurabilityDecrease;
					if (m_SPDurability <= 0.f)
					{
						m_SPDurability = 0.f;
						EquipSuppressor();
					}
					m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->
						SetSPDurabilityBar(m_SPDurability / m_SPDurabilityMax);
				}
				else
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_MuzzleSoundClass, GetActorLocation());
					UAISense_Hearing::ReportNoiseEvent(GetWorld(), GetActorLocation(), 1.f,
						m_Player, 3000.f, TEXT("GunShotNoise"));
				}

				m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetCurrentMagText(--m_CurrentMag);
				if (m_CurrentMag < 0)
					m_CurrentMag = 0;

				if (m_CurrentMag == 0)
					m_Player->MagEmpty();

				m_RecoilStack++;
				m_Player->IncreaseShotRecoil(4.f);
				Delay = true;
			}
			else
			{
				FVector vMuzzlePos = GetMesh()->GetSocketLocation(TEXT("FireMuzzle"));
				FRotator vMuzzleRot = GetActorRotation();

				AEffectNormal* Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_BurstMuzzleClass,
					vMuzzlePos, vMuzzleRot);


				AExplosiveBullet* Bullet = GetWorld()->SpawnActor<AExplosiveBullet>(m_ExplosiveBulletClass,
					vMuzzlePos + GetActorForwardVector() * 40.f, GetActorRotation());



				if (m_bSuppressorUsing)
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_SuppressorSoundClass, GetActorLocation());
					UAISense_Hearing::ReportNoiseEvent(GetWorld(), GetActorLocation(), 1.f,
						m_Player, 3000.f, TEXT("SuppressorNoise"));

					m_SPDurability -= m_SPDurabilityDecrease;
					if (m_SPDurability <= 0.f)
					{
						m_SPDurability = 0.f;
						EquipSuppressor();
					}
					m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->
						SetSPDurabilityBar(m_SPDurability / m_SPDurabilityMax);
				}
				else
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_MuzzleSoundClass, GetActorLocation());
					UAISense_Hearing::ReportNoiseEvent(GetWorld(), GetActorLocation(), 1.f,
						m_Player, 3000.f, TEXT("GunShotNoise"));
				}

				m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetCurrentMagText(--m_CurrentMag);
				if (m_CurrentMag < 0)
					m_CurrentMag = 0;
				Delay = true;
			}
		}
		else
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_EmptySoundClass, GetActorLocation());
			Delay = true;
		}
	}
}
void APrimaryWeapon::Reload()
{
	if (m_CurrentMagMax - m_CurrentMag <= m_Player->GetRemainMag())
	{
		m_Player->AddRemainMag((int32)-(m_CurrentMagMax - m_CurrentMag));
		m_CurrentMag += m_CurrentMagMax - m_CurrentMag;
	}
	else
	{
		m_CurrentMag += m_Player->GetRemainMag();
		m_Player->SetRemainMag(0);
	}
	m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetCurrentMagText(m_CurrentMag);
	m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetRemainMagText(m_Player->GetRemainMag());
}

void APrimaryWeapon::EquipSuppressor()
{
	if (!m_bSuppressorUsing && m_SPDurability > 0.f)
	{
		m_bSuppressorUsing = true;
		m_SuppressorMesh->SetVisibility(true);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_EquipSoundClass, GetActorLocation());
		
	}
	else
	{

		m_bSuppressorUsing = false;
		m_SuppressorMesh->SetVisibility(false);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_DischargeSoundClass, GetActorLocation());

	}
}

void APrimaryWeapon::EquipScope()
{
	if (!m_bScopeUsing)
	{
		m_bScopeUsing = true;
		m_ScopeMesh->SetVisibility(true);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_EquipSoundClass, GetActorLocation());

	}
	else
	{

		m_bScopeUsing = false;
		m_ScopeMesh->SetVisibility(false);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_DischargeSoundClass, GetActorLocation());

	}
}

void APrimaryWeapon::RecoilRecovery()
{
	m_RecoilStack = 0;
	//m_Player->DecreaseShotRecoil();
	m_bRecoilRecovering = true;
}

FVector2D APrimaryWeapon::RandPointInCircle(float Radius)
{
	float Angle = UKismetMathLibrary::RandomFloatInRange(0.f, 360.f);
	float DistanceFromCenter = UKismetMathLibrary::RandomFloatInRange(0, Radius);

	FVector2D RandPoint = FVector2D(DistanceFromCenter * UKismetMathLibrary::DegCos(Angle), DistanceFromCenter * UKismetMathLibrary::DegSin(Angle));
	

	return RandPoint;
}