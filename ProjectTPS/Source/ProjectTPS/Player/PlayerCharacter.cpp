// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "PlayerAnimation.h"
#include "Kismet/KismetMathLibrary.h"
#include "PrimaryWeapon.h"

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

	static ConstructorHelpers::FClassFinder<APrimaryWeapon>		WeaponAsset(TEXT("Blueprint'/Game/Player/BPM4A1.BPM4A1_C'"));

	if (WeaponAsset.Succeeded())
		m_StartWeapon = WeaponAsset.Class;
	



	m_Arm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Arm"));
	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	//m_Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));

	m_Camera->SetupAttachment(m_Arm);
	m_Arm->SetupAttachment(GetCapsuleComponent());
	//m_Scene->SetupAttachment(GetCapsuleComponent());
	//m_eDirection = EMoveDir::None;

	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->JumpZVelocity = 500.f;
	m_UpperYaw = 0.f;

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
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (m_bFire)
	{
		m_PrimaryWeapon->Fire(m_Camera->GetComponentLocation(), m_Camera->GetForwardVector());
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
		//AddControllerYawInput(fScale * 45.f * GetWorld()->GetDeltaSeconds());
		//m_Scene->AddRelativeRotation(FRotator(0.f, fScale, 0.f));
		AddControllerYawInput(fScale * 45.f * GetWorld()->GetDeltaSeconds());
		//AddUpperYawInput(fScale);
		/*PrintViewport(2.f, FColor::Yellow, FString::Printf(TEXT("%f"), m_UpperYaw));


		if (m_UpperYaw > 90.f)
		{
			GetCapsuleComponent()->AddWorldRotation(FRotator(0.f, 90.f, 0.f));
			m_UpperYaw = 0.f;
		}
		else if (m_UpperYaw < -90.f)
		{
			GetCapsuleComponent()->AddWorldRotation(FRotator(0.f, -90.f, 0.f));
			m_UpperYaw = 0.f;
		}*/
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