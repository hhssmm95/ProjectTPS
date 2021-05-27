// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/MonsterAnim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterAnim() {}
// Cross Module References
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_EMonsterAnimType();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UClass* Z_Construct_UClass_UMonsterAnim_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UMonsterAnim();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
// End Cross Module References
	static UEnum* EMonsterAnimType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectTPS_EMonsterAnimType, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("EMonsterAnimType"));
		}
		return Singleton;
	}
	template<> PROJECTTPS_API UEnum* StaticEnum<EMonsterAnimType>()
	{
		return EMonsterAnimType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMonsterAnimType(EMonsterAnimType_StaticEnum, TEXT("/Script/ProjectTPS"), TEXT("EMonsterAnimType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectTPS_EMonsterAnimType_Hash() { return 3572347822U; }
	UEnum* Z_Construct_UEnum_ProjectTPS_EMonsterAnimType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMonsterAnimType"), 0, Get_Z_Construct_UEnum_ProjectTPS_EMonsterAnimType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMonsterAnimType::Idle", (int64)EMonsterAnimType::Idle },
				{ "EMonsterAnimType::Walk", (int64)EMonsterAnimType::Walk },
				{ "EMonsterAnimType::Run", (int64)EMonsterAnimType::Run },
				{ "EMonsterAnimType::Attack1", (int64)EMonsterAnimType::Attack1 },
				{ "EMonsterAnimType::Attack2", (int64)EMonsterAnimType::Attack2 },
				{ "EMonsterAnimType::Death", (int64)EMonsterAnimType::Death },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack1.Name", "EMonsterAnimType::Attack1" },
				{ "Attack2.Name", "EMonsterAnimType::Attack2" },
				{ "BlueprintType", "true" },
				{ "Death.Name", "EMonsterAnimType::Death" },
				{ "Idle.Name", "EMonsterAnimType::Idle" },
				{ "ModuleRelativePath", "Monster/MonsterAnim.h" },
				{ "Run.Name", "EMonsterAnimType::Run" },
				{ "Walk.Name", "EMonsterAnimType::Walk" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectTPS,
				nullptr,
				"EMonsterAnimType",
				"EMonsterAnimType",
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
	DEFINE_FUNCTION(UMonsterAnim::execAnimNotify_MonsterAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_MonsterAttackEnd();
		P_NATIVE_END;
	}
	void UMonsterAnim::StaticRegisterNativesUMonsterAnim()
	{
		UClass* Class = UMonsterAnim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_MonsterAttackEnd", &UMonsterAnim::execAnimNotify_MonsterAttackEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMonsterAnim_AnimNotify_MonsterAttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMonsterAnim_AnimNotify_MonsterAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Monster/MonsterAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMonsterAnim_AnimNotify_MonsterAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMonsterAnim, nullptr, "AnimNotify_MonsterAttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMonsterAnim_AnimNotify_MonsterAttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMonsterAnim_AnimNotify_MonsterAttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMonsterAnim_AnimNotify_MonsterAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMonsterAnim_AnimNotify_MonsterAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMonsterAnim_NoRegister()
	{
		return UMonsterAnim::StaticClass();
	}
	struct Z_Construct_UClass_UMonsterAnim_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMonsterAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMonsterAnim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMonsterAnim_AnimNotify_MonsterAttackEnd, "AnimNotify_MonsterAttackEnd" }, // 848965571
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterAnim_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Monster/MonsterAnim.h" },
		{ "ModuleRelativePath", "Monster/MonsterAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMonsterAnim_Statics::NewProp_m_eMonsterAnim_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterAnim_Statics::NewProp_m_eMonsterAnim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterAnim" },
		{ "ModuleRelativePath", "Monster/MonsterAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMonsterAnim_Statics::NewProp_m_eMonsterAnim = { "m_eMonsterAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMonsterAnim, m_eMonsterAnim), Z_Construct_UEnum_ProjectTPS_EMonsterAnimType, METADATA_PARAMS(Z_Construct_UClass_UMonsterAnim_Statics::NewProp_m_eMonsterAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterAnim_Statics::NewProp_m_eMonsterAnim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMonsterAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterAnim_Statics::NewProp_m_eMonsterAnim_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterAnim_Statics::NewProp_m_eMonsterAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMonsterAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMonsterAnim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMonsterAnim_Statics::ClassParams = {
		&UMonsterAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMonsterAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMonsterAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMonsterAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMonsterAnim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMonsterAnim, 3406882964);
	template<> PROJECTTPS_API UClass* StaticClass<UMonsterAnim>()
	{
		return UMonsterAnim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMonsterAnim(Z_Construct_UClass_UMonsterAnim, &UMonsterAnim::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UMonsterAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMonsterAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif