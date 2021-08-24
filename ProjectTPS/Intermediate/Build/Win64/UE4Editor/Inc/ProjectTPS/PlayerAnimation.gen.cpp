// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Player/PlayerAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimation() {}
// Cross Module References
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_PlayerMoveType();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_PlayerAnimType();
	PROJECTTPS_API UClass* Z_Construct_UClass_UPlayerAnimation_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UPlayerAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	PROJECTTPS_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	static UEnum* PlayerMoveType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectTPS_PlayerMoveType, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("PlayerMoveType"));
		}
		return Singleton;
	}
	template<> PROJECTTPS_API UEnum* StaticEnum<PlayerMoveType>()
	{
		return PlayerMoveType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PlayerMoveType(PlayerMoveType_StaticEnum, TEXT("/Script/ProjectTPS"), TEXT("PlayerMoveType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectTPS_PlayerMoveType_Hash() { return 2755648203U; }
	UEnum* Z_Construct_UEnum_ProjectTPS_PlayerMoveType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PlayerMoveType"), 0, Get_Z_Construct_UEnum_ProjectTPS_PlayerMoveType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PlayerMoveType::Run", (int64)PlayerMoveType::Run },
				{ "PlayerMoveType::Crouch", (int64)PlayerMoveType::Crouch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Crouch.Name", "PlayerMoveType::Crouch" },
				{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
				{ "Run.Name", "PlayerMoveType::Run" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectTPS,
				nullptr,
				"PlayerMoveType",
				"PlayerMoveType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* PlayerAnimType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectTPS_PlayerAnimType, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("PlayerAnimType"));
		}
		return Singleton;
	}
	template<> PROJECTTPS_API UEnum* StaticEnum<PlayerAnimType>()
	{
		return PlayerAnimType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PlayerAnimType(PlayerAnimType_StaticEnum, TEXT("/Script/ProjectTPS"), TEXT("PlayerAnimType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectTPS_PlayerAnimType_Hash() { return 729443425U; }
	UEnum* Z_Construct_UEnum_ProjectTPS_PlayerAnimType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PlayerAnimType"), 0, Get_Z_Construct_UEnum_ProjectTPS_PlayerAnimType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PlayerAnimType::Idle", (int64)PlayerAnimType::Idle },
				{ "PlayerAnimType::Run", (int64)PlayerAnimType::Run },
				{ "PlayerAnimType::Attack", (int64)PlayerAnimType::Attack },
				{ "PlayerAnimType::Jump", (int64)PlayerAnimType::Jump },
				{ "PlayerAnimType::Death", (int64)PlayerAnimType::Death },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "PlayerAnimType::Attack" },
				{ "BlueprintType", "true" },
				{ "Death.Name", "PlayerAnimType::Death" },
				{ "Idle.Name", "PlayerAnimType::Idle" },
				{ "Jump.Name", "PlayerAnimType::Jump" },
				{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
				{ "Run.Name", "PlayerAnimType::Run" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectTPS,
				nullptr,
				"PlayerAnimType",
				"PlayerAnimType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UPlayerAnimation::execAnimNotify_LeftFoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_LeftFoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimation::execAnimNotify_RightFoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_RightFoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimation::execAnimNotify_CloseAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_CloseAttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimation::execAnimNotify_CloseAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_CloseAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimation::execAnimNotify_ReloadEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_ReloadEnd();
		P_NATIVE_END;
	}
	void UPlayerAnimation::StaticRegisterNativesUPlayerAnimation()
	{
		UClass* Class = UPlayerAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_CloseAttack", &UPlayerAnimation::execAnimNotify_CloseAttack },
			{ "AnimNotify_CloseAttackEnd", &UPlayerAnimation::execAnimNotify_CloseAttackEnd },
			{ "AnimNotify_LeftFoot", &UPlayerAnimation::execAnimNotify_LeftFoot },
			{ "AnimNotify_ReloadEnd", &UPlayerAnimation::execAnimNotify_ReloadEnd },
			{ "AnimNotify_RightFoot", &UPlayerAnimation::execAnimNotify_RightFoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimation, nullptr, "AnimNotify_CloseAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimation, nullptr, "AnimNotify_CloseAttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimation_AnimNotify_LeftFoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimation_AnimNotify_LeftFoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimation_AnimNotify_LeftFoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimation, nullptr, "AnimNotify_LeftFoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnimation_AnimNotify_LeftFoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimation_AnimNotify_LeftFoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnimation_AnimNotify_LeftFoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnimation_AnimNotify_LeftFoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimation_AnimNotify_ReloadEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimation_AnimNotify_ReloadEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimation_AnimNotify_ReloadEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimation, nullptr, "AnimNotify_ReloadEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnimation_AnimNotify_ReloadEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimation_AnimNotify_ReloadEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnimation_AnimNotify_ReloadEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnimation_AnimNotify_ReloadEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimation_AnimNotify_RightFoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimation_AnimNotify_RightFoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimation_AnimNotify_RightFoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimation, nullptr, "AnimNotify_RightFoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnimation_AnimNotify_RightFoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimation_AnimNotify_RightFoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnimation_AnimNotify_RightFoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnimation_AnimNotify_RightFoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerAnimation_NoRegister()
	{
		return UPlayerAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsDead_MetaData[];
#endif
		static void NewProp_m_bIsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bHitReacting_MetaData[];
#endif
		static void NewProp_m_bHitReacting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bHitReacting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pPlayer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_ePlayerAnim_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ePlayerAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_ePlayerAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_ePlayerMove_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ePlayerMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_ePlayerMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RifleFireMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_RifleFireMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RifleFireAimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_RifleFireAimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RifleReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_RifleReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RifleReloadAimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_RifleReloadAimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HitMontage1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HitMontage1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HitMontage2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HitMontage2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HitMontage3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HitMontage3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HitMontage4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HitMontage4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CloseAttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CloseAttackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bAiming_MetaData[];
#endif
		static void NewProp_m_bAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bAiming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerAnimation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttack, "AnimNotify_CloseAttack" }, // 3023038897
		{ &Z_Construct_UFunction_UPlayerAnimation_AnimNotify_CloseAttackEnd, "AnimNotify_CloseAttackEnd" }, // 3669625717
		{ &Z_Construct_UFunction_UPlayerAnimation_AnimNotify_LeftFoot, "AnimNotify_LeftFoot" }, // 3711139263
		{ &Z_Construct_UFunction_UPlayerAnimation_AnimNotify_ReloadEnd, "AnimNotify_ReloadEnd" }, // 377443974
		{ &Z_Construct_UFunction_UPlayerAnimation_AnimNotify_RightFoot, "AnimNotify_RightFoot" }, // 389063927
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/PlayerAnimation.h" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bIsDead_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bIsDead_SetBit(void* Obj)
	{
		((UPlayerAnimation*)Obj)->m_bIsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bIsDead = { "m_bIsDead", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnimation), &Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bIsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bHitReacting_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bHitReacting_SetBit(void* Obj)
	{
		((UPlayerAnimation*)Obj)->m_bHitReacting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bHitReacting = { "m_bHitReacting", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnimation), &Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bHitReacting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bHitReacting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bHitReacting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_pPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_pPlayer = { "m_pPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_pPlayer), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_pPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_pPlayer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerAnim_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerAnim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerAnim = { "m_ePlayerAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_ePlayerAnim), Z_Construct_UEnum_ProjectTPS_PlayerAnimType, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerMove_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerMove_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerMove = { "m_ePlayerMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_ePlayerMove), Z_Construct_UEnum_ProjectTPS_PlayerMoveType, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireMontage_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireMontage = { "m_RifleFireMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_RifleFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireAimMontage_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireAimMontage = { "m_RifleFireAimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_RifleFireAimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireAimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireAimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleReloadMontage_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleReloadMontage = { "m_RifleReloadMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_RifleReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleReloadAimMontage_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleReloadAimMontage = { "m_RifleReloadAimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_RifleReloadAimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleReloadAimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleReloadAimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage1_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage1 = { "m_HitMontage1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_HitMontage1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage2_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage2 = { "m_HitMontage2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_HitMontage2), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage3_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage3 = { "m_HitMontage3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_HitMontage3), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage4_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage4 = { "m_HitMontage4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_HitMontage4), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_CloseAttackMontage_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_CloseAttackMontage = { "m_CloseAttackMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_CloseAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_CloseAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_CloseAttackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bAiming_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bAiming_SetBit(void* Obj)
	{
		((UPlayerAnimation*)Obj)->m_bAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bAiming = { "m_bAiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnimation), &Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bAiming_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bIsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bHitReacting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_pPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerAnim_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerMove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireAimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleReloadAimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_HitMontage4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_CloseAttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bAiming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimation_Statics::ClassParams = {
		&UPlayerAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAnimation, 3922979555);
	template<> PROJECTTPS_API UClass* StaticClass<UPlayerAnimation>()
	{
		return UPlayerAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAnimation(Z_Construct_UClass_UPlayerAnimation, &UPlayerAnimation::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UPlayerAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
