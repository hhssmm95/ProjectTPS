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

// Sets default values
APrimaryWeapon::APrimaryWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	m_Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	m_RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	m_SuppressorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Suppressor"));

	SetRootComponent(m_RootScene);

	m_Mesh->SetupAttachment(m_RootScene);
	m_SuppressorMesh->SetupAttachment(m_RootScene);

	Delay = false;
	DelayTime = 0.12f;
	DelayTimeAcc = 0.f;

	m_bSuppressorUsing = false;
	m_SuppressorMesh->SetVisibility(false);
}

// Called when the game starts or when spawned
void APrimaryWeapon::BeginPlay()
{
	Super::BeginPlay();
	
	m_Player = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

	m_PlayerHUD = Cast<APlayerHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetCurrentMagText(m_CurrentMagMax);

	m_CurrentMag = m_CurrentMagMax;
}

// Called every frame
void APrimaryWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Delay)
	{
		if (DelayTimeAcc >= DelayTime)
		{
			Delay = false;
			DelayTimeAcc = 0.f;
		}
		DelayTimeAcc += DeltaTime;
	}
}

void APrimaryWeapon::LoadMesh(const FString& strPath)
{
	USkeletalMesh* pMesh = LoadObject<USkeletalMesh>(nullptr, *strPath);


	if (IsValid(pMesh))
		m_Mesh->SetSkeletalMesh(pMesh);
}

void APrimaryWeapon::Fire(FVector CameraPos, FVector CameraForward)
{
	if (!Delay)
	{
		if (m_CurrentMag > 0)
		{
			FHitResult result;

			TArray<AActor*> IgnoreActor;
			IgnoreActor.Add(this);

			bool bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(), CameraPos, CameraPos + CameraForward * 100000.f,
				UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_GameTraceChannel1), true, IgnoreActor,
				EDrawDebugTrace::None, result, true);

			if (bHit)
			{
				FVector vMuzzlePos = GetMesh()->GetSocketLocation(TEXT("FireMuzzle"));
				FRotator vMuzzleRot = GetActorRotation();

				if (!m_bSuppressorUsing)
					AEffectNormal* Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_MuzzleClass, vMuzzlePos,
					vMuzzleRot);


				FRotator BulletRot = UKismetMathLibrary::FindLookAtRotation(vMuzzlePos + GetActorForwardVector() * 80.f, result.ImpactPoint);
				ABullet* Bullet = GetWorld()->SpawnActor<ABullet>(m_BulletClass, vMuzzlePos + GetActorForwardVector() * 80.f,
					BulletRot);

				if (m_bSuppressorUsing)
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_SuppressorSoundClass, GetActorLocation());
					UAISense_Hearing::ReportNoiseEvent(GetWorld(), GetActorLocation(), 1.f,
						m_Player, 3000.f, TEXT("SuppressorNoise"));
					
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

				Delay = true;
			}
			else
			{
				FVector vMuzzlePos = GetMesh()->GetSocketLocation(TEXT("FireMuzzle"));
				FRotator vMuzzleRot = GetActorRotation();

				if(!m_bSuppressorUsing)
					AEffectNormal* Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_MuzzleClass, vMuzzlePos,
					vMuzzleRot);

				ABullet* Bullet = GetWorld()->SpawnActor<ABullet>(m_BulletClass, vMuzzlePos + GetActorForwardVector() * 80.f,
					GetActorRotation());

				if (m_bSuppressorUsing)
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_SuppressorSoundClass, GetActorLocation());
					UAISense_Hearing::ReportNoiseEvent(GetWorld(), GetActorLocation(), 1.f,
						m_Player, 3000.f, TEXT("SuppressorNoise"));

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
	m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetCurrentMagText(m_CurrentMagMax);
	m_PlayerHUD->GetMainHUDWidget()->GetPlayerEquipWidget()->SetRemainMagText(m_Player->GetRemainMag());
}

void APrimaryWeapon::EquipSuppressor()
{
	if (!m_bSuppressorUsing)
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