// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "PlayerAnimation.h"
#include "Kismet/KismetMathLibrary.h"

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


	m_Arm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Arm"));
	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));

	m_Camera->SetupAttachment(m_Arm);
	m_Arm->SetupAttachment(m_Scene);
	m_Scene->SetupAttachment(GetCapsuleComponent());
	//m_eDirection = EMoveDir::None;

	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	m_UpperYaw = 0.f;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	m_pPlayerAnim = Cast<UPlayerAnimation>(GetMesh()->GetAnimInstance());
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &APlayerCharacter::Aim);

}


void APlayerCharacter::MoveFront(float fScale)
{

	if (!m_bIsDead)
		AddMovementInput(GetActorForwardVector(), fScale);


	//if (fScale == 0.f)
	//	m_eDirection = EMoveDir::None;
	//else if (fScale < 0.f)
	//	m_eDirection = EMoveDir::Backward;
	//else
	//	m_eDirection = EMoveDir::Forward;
}
void APlayerCharacter::MoveSide(float fScale)
{
	if (!m_bIsDead)
		AddMovementInput(GetActorRightVector(), fScale);

	/*if (fScale < 0.f)
	{
		if (m_eDirection == EMoveDir::Forward)
			m_eDirection = EMoveDir::ForwardLeft;

		else if (m_eDirection == EMoveDir::Backward)
			m_eDirection = EMoveDir::BackwardLeft;

		else
			m_eDirection = EMoveDir::Left;
	}

	else if (fScale > 0.f)
	{
		if (m_eDirection == EMoveDir::Forward)
			m_eDirection = EMoveDir::ForwardRight;

		else if (m_eDirection == EMoveDir::Backward)
			m_eDirection = EMoveDir::BackwardRight;

		else
			m_eDirection = EMoveDir::Right;
	}*/
}

void APlayerCharacter::Turn(float fScale)
{

	if (!m_bIsDead)
	{
		//AddControllerYawInput(fScale * 45.f * GetWorld()->GetDeltaSeconds());
		m_Scene->AddRelativeRotation(FRotator(0.f, 0.f, fScale * 45.f * GetWorld()->GetDeltaSeconds()));
		AddUpperYawInput(fScale);
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

void APlayerCharacter::Aim()
{
	if (!m_bIsDead)
	{

	}
}

