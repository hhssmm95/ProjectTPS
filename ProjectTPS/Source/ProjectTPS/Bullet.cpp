// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Player/PlayerCharacter.h"
#include "Monster/Monster.h"

// Sets default values
ABullet::ABullet()
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
void ABullet::BeginPlay()
{
	Super::BeginPlay();

	//m_Movement->OnProjectileStop.AddDynamic(this, &ABullet::ProjectileStop);
	m_Body->OnComponentHit.AddDynamic(this, &ABullet::OnBulletHit);
	m_Body->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnBulletBeginOverlap);

	m_Player = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ABullet::OnBulletBeginOverlap(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* pPlayer = Cast<APlayerCharacter>(OtherActor);
	FDamageEvent DmgEvent;

	FVector vDir = GetActorLocation() - SweepResult.ImpactPoint;
	vDir.Normalize();
	FRotator	vRot = vDir.ToOrientationRotator();

	if (pPlayer)
	{

		pPlayer->TakeDamage(m_Damage, DmgEvent, pPlayer->GetController(), pPlayer);
		pPlayer->EmitHitEffect(SweepResult.ImpactPoint, vRot);
	}
	else
	{
		AMonster* pMonster = Cast<AMonster>(OtherActor);
		pMonster->TakeDamage(m_Damage, DmgEvent, pMonster->GetController(), pMonster);
		/*if (SweepResult.PhysMaterial.Get()->SurfaceType == EPhysicalSurface::SurfaceType1)
			PrintViewport(2.f, FColor::Blue, TEXT("HeadShot!"));
		else
			PrintViewport(2.f, FColor::Yellow, TEXT("BodyShot"));
		*/
	}

	Destroy();
}


void ABullet::OnBulletHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	APlayerCharacter* PlayerCheck = Cast<APlayerCharacter>(OtherActor);
	FDamageEvent DmgEvent;

	FVector vDir = GetActorLocation() - Hit.ImpactPoint;
	vDir.Normalize();
	FRotator	vRot = vDir.ToOrientationRotator();

	if (PlayerCheck)
	{
		PlayerCheck->TakeDamage(m_Damage, DmgEvent, PlayerCheck->GetController(), this);
	}
	else
	{
		AMonster* pMonster = Cast<AMonster>(OtherActor);

		if (Hit.BoneName.ToString() == TEXT("head"))
		{
			pMonster->TakeDamage(m_Damage*3, DmgEvent, m_Player->GetController(), m_Player);
			PrintViewport(2.f, FColor::Blue, TEXT("HeadShot!"));
			pMonster->EmitHeadshotEffect(Hit.ImpactPoint, vRot);
			m_Player->ShowHeadShotMark();
		}
		else
		{
			pMonster->TakeDamage(m_Damage, DmgEvent, m_Player->GetController(), m_Player);
			PrintViewport(2.f, FColor::Yellow, TEXT("BodyShot"));
			pMonster->EmitHitEffect(Hit.ImpactPoint, vRot);
			m_Player->ShowHitMark();
		}

	}

	Destroy();

}


void ABullet::ProjectileStop(const FHitResult& result)
{
	Destroy();

	//AEffectNormal* Bullet = GetWorld()->SpawnActor<AEffectNormal>(m_HitClass, 
		//result.ImpactPoint, result.ImpactNormal.Rotation());
}