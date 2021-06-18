// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/RevenantAnim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRevenantAnim() {}
// Cross Module References
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_EBossAnimType();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UClass* Z_Construct_UClass_URevenantAnim_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_URevenantAnim();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	static UEnum* EBossAnimType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectTPS_EBossAnimType, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("EBossAnimType"));
		}
		return Singleton;
	}
	template<> PROJECTTPS_API UEnum* StaticEnum<EBossAnimType>()
	{
		return EBossAnimType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBossAnimType(EBossAnimType_StaticEnum, TEXT("/Script/ProjectTPS"), TEXT("EBossAnimType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectTPS_EBossAnimType_Hash() { return 3957560034U; }
	UEnum* Z_Construct_UEnum_ProjectTPS_EBossAnimType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBossAnimType"), 0, Get_Z_Construct_UEnum_ProjectTPS_EBossAnimType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBossAnimType::Idle", (int64)EBossAnimType::Idle },
				{ "EBossAnimType::Walk", (int64)EBossAnimType::Walk },
				{ "EBossAnimType::Run", (int64)EBossAnimType::Run },
				{ "EBossAnimType::Attack1", (int64)EBossAnimType::Attack1 },
				{ "EBossAnimType::Attack2", (int64)EBossAnimType::Attack2 },
				{ "EBossAnimType::Death", (int64)EBossAnimType::Death },
				{ "EBossAnimType::Suspicious", (int64)EBossAnimType::Suspicious },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack1.Name", "EBossAnimType::Attack1" },
				{ "Attack2.Name", "EBossAnimType::Attack2" },
				{ "BlueprintType", "true" },
				{ "Death.Name", "EBossAnimType::Death" },
				{ "Idle.Name", "EBossAnimType::Idle" },
				{ "ModuleRelativePath", "Monster/RevenantAnim.h" },
				{ "Run.Name", "EBossAnimType::Run" },
				{ "Suspicious.Name", "EBossAnimType::Suspicious" },
				{ "Walk.Name", "EBossAnimType::Walk" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectTPS,
				nullptr,
				"EBossAnimType",
				"EBossAnimType",
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
	DEFINE_FUNCTION(URevenantAnim::execAnimNotify_MonsterDeathEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_MonsterDeathEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URevenantAnim::execAnimNotify_MonsterLongAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_MonsterLongAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URevenantAnim::execAnimNotify_MonsterNearAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_MonsterNearAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URevenantAnim::execAnimNotify_MonsterAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_MonsterAttackEnd();
		P_NATIVE_END;
	}
	void URevenantAnim::StaticRegisterNativesURevenantAnim()
	{
		UClass* Class = URevenantAnim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_MonsterAttackEnd", &URevenantAnim::execAnimNotify_MonsterAttackEnd },
			{ "AnimNotify_MonsterDeathEnd", &URevenantAnim::execAnimNotify_MonsterDeathEnd },
			{ "AnimNotify_MonsterLongAttack", &URevenantAnim::execAnimNotify_MonsterLongAttack },
			{ "AnimNotify_MonsterNearAttack", &URevenantAnim::execAnimNotify_MonsterNearAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterAttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Monster/RevenantAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URevenantAnim, nullptr, "AnimNotify_MonsterAttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterAttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterAttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterDeathEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterDeathEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Monster/RevenantAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterDeathEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URevenantAnim, nullptr, "AnimNotify_MonsterDeathEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterDeathEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterDeathEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterDeathEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterDeathEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterLongAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterLongAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Monster/RevenantAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterLongAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URevenantAnim, nullptr, "AnimNotify_MonsterLongAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterLongAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterLongAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterLongAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterLongAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterNearAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterNearAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Monster/RevenantAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterNearAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URevenantAnim, nullptr, "AnimNotify_MonsterNearAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterNearAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterNearAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterNearAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterNearAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URevenantAnim_NoRegister()
	{
		return URevenantAnim::StaticClass();
	}
	struct Z_Construct_UClass_URevenantAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_eMonsterAnim_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_eMonsterAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_eMonsterAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HitMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HitMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bDeath_MetaData[];
#endif
		static void NewProp_m_bDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bDeath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URevenantAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URevenantAnim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterAttackEnd, "AnimNotify_MonsterAttackEnd" }, // 581730229
		{ &Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterDeathEnd, "AnimNotify_MonsterDeathEnd" }, // 1889486624
		{ &Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterLongAttack, "AnimNotify_MonsterLongAttack" }, // 2342932722
		{ &Z_Construct_UFunction_URevenantAnim_AnimNotify_MonsterNearAttack, "AnimNotify_MonsterNearAttack" }, // 3802234628
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevenantAnim_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Monster/RevenantAnim.h" },
		{ "ModuleRelativePath", "Monster/RevenantAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_eMonsterAnim_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_eMonsterAnim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RevenantAnim" },
		{ "ModuleRelativePath", "Monster/RevenantAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_eMonsterAnim = { "m_eMonsterAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URevenantAnim, m_eMonsterAnim), Z_Construct_UEnum_ProjectTPS_EBossAnimType, METADATA_PARAMS(Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_eMonsterAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_eMonsterAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_HitMontage_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "RevenantAnim" },
		{ "ModuleRelativePath", "Monster/RevenantAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_HitMontage = { "m_HitMontage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URevenantAnim, m_HitMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_HitMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_HitMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_bDeath_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "RevenantAnim" },
		{ "ModuleRelativePath", "Monster/RevenantAnim.h" },
	};
#endif
	void Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_bDeath_SetBit(void* Obj)
	{
		((URevenantAnim*)Obj)->m_bDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_bDeath = { "m_bDeath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URevenantAnim), &Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_bDeath_SetBit, METADATA_PARAMS(Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_bDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_bDeath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevenantAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_eMonsterAnim_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_eMonsterAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_HitMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevenantAnim_Statics::NewProp_m_bDeath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URevenantAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevenantAnim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URevenantAnim_Statics::ClassParams = {
		&URevenantAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URevenantAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URevenantAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URevenantAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URevenantAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URevenantAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URevenantAnim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URevenantAnim, 51942847);
	template<> PROJECTTPS_API UClass* StaticClass<URevenantAnim>()
	{
		return URevenantAnim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URevenantAnim(Z_Construct_UClass_URevenantAnim, &URevenantAnim::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("URevenantAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URevenantAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
