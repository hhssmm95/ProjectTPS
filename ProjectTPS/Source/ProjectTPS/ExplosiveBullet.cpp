// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosiveBullet.h"
#include "Player/PlayerCharacter.h"
#include "Monster/Monster.h"
#include "HitEffect.h"

// Sets default values
AExplosiveBullet::AExplosiveBullet()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Body = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Body"));
	m_BulletParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BulletParticle"));
	m_BulletTrail = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BulletTrail"));

	m_Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile"));


	SetRootComponent(m_Body);

	m_BulletParticle->SetupAttachment(m_Body);
	m_BulletTrail->SetupAttachment(m_Body);

	//m_Body->SetCollisionProfileName(TEXT("PlayerName"));

	m_Movement->InitialSpeed = 15000.f;
	m_Damage = 1;
}

// Called when the game starts or when spawned
void AExplosiveBullet::BeginPlay()
{
	Super::BeginPlay();

	//m_Movement->OnProjectileStop.AddDynamic(this, &ABullet::ProjectileStop);
	m_Body->OnComponentHit.AddDynamic(this, &AExplosiveBullet::OnBulletHit);

	m_Player = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
}

// Called every frame
void AExplosiveBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AExplosiveBullet::OnBulletHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	FDamageEvent DmgEvent;

	FVector vDir = GetActorLocation() - Hit.ImpactPoint;
	vDir.Normalize();
	FRotator	vRot = vDir.ToOrientationRotator();
	

	TArray<AActor*> IgnoreActor;
	IgnoreActor.Add(this);

	TArray<FHitResult> results;

	bool bHit = UKismetSystemLibrary::SphereTraceMulti(GetWorld(), GetActorLocation(), GetActorLocation(),
		300.f, UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_GameTraceChannel7), true, IgnoreActor,
		EDrawDebugTrace::None, results, true, FLinearColor::Red, FLinearColor::Green, 2.f);

	if (bHit)
	{
		for (auto& result : results)
		{
			AMonster * pMonster = Cast<AMonster>(result.GetActor());
			if (pMonster)
			{
				pMonster->TakeDamage(m_Damage, DmgEvent, m_Player->GetController(), m_Player);
				pMonster->EmitHitEffect(Hit.ImpactPoint, vRot);
				m_Player->ShowHitMark();
				
			}
		}


	}
	FActorSpawnParameters param;
	param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;


	AHitEffect* Effect = GetWorld()->SpawnActor<AHitEffect>(AHitEffect::StaticClass(),
		Hit.ImpactPoint, GetActorRotation(), param);

	Effect->SetActorScale3D(FVector(0.5f, 0.5f, 0.5f));
	Effect->LoadParticle(m_HitParticle);
	Effect->LoadSound(m_HitSound);
	Destroy();
}


void AExplosiveBullet::ProjectileStop(const FHitResult& result)
{
	Destroy();
}