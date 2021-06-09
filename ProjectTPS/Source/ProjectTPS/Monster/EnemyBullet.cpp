// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBullet.h"
#include "../Player/PlayerCharacter.h"
#include "Monster.h"
#include "../HitEffect.h"

// Sets default values
AEnemyBullet::AEnemyBullet()
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

	m_Body->SetCollisionProfileName(TEXT("EnemyAttack"));

	m_Movement->InitialSpeed = 15000.f;
	m_Damage = 1;
}

// Called when the game starts or when spawned
void AEnemyBullet::BeginPlay()
{
	Super::BeginPlay();

	//m_Movement->OnProjectileStop.AddDynamic(this, &ABullet::ProjectileStop);
	m_Body->OnComponentHit.AddDynamic(this, &AEnemyBullet::OnBulletHit);
	//m_Body->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnBulletBeginOverlap);

	m_Player = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
}

// Called every frame
void AEnemyBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AEnemyBullet::OnBulletHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	APlayerCharacter* PlayerCheck = Cast<APlayerCharacter>(OtherActor);
	FDamageEvent DmgEvent;
	AMonster* pMonster = Cast<AMonster>(OtherActor);

	FVector vDir = GetActorLocation() - Hit.ImpactPoint;
	vDir.Normalize();
	FRotator	vRot = vDir.ToOrientationRotator();

	if (PlayerCheck)
	{
		PlayerCheck->TakeDamage(m_Damage, DmgEvent, PlayerCheck->GetController(), this);
		PlayerCheck->EmitHitEffect(Hit.ImpactPoint, vRot);
	}
	else
	{
		FActorSpawnParameters param;
		param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;


		AHitEffect* Effect = GetWorld()->SpawnActor<AHitEffect>(AHitEffect::StaticClass(),
			Hit.ImpactPoint, GetActorRotation(), param);

		Effect->LoadParticle(m_HitParticle);
		Effect->LoadSound(m_HitSound);
	}

	Destroy();

}

//
//void AEnemyBullet::ProjectileStop(const FHitResult& result)
//{
//	Destroy();
//}