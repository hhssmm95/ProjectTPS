// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/Revenant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRevenant() {}
// Cross Module References
	PROJECTTPS_API UScriptStruct* Z_Construct_UScriptStruct_FRevenantSkill();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_ERevenantSkillType();
	PROJECTTPS_API UClass* Z_Construct_UClass_ARevenant_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_ARevenant();
	PROJECTTPS_API UClass* Z_Construct_UClass_AMonster();
	PROJECTTPS_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FRevenantSkill::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECTTPS_API uint32 Get_Z_Construct_UScriptStruct_FRevenantSkill_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRevenantSkill, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("RevenantSkill"), sizeof(FRevenantSkill), Get_Z_Construct_UScriptStruct_FRevenantSkill_Hash());
	}
	return Singleton;
}
template<> PROJECTTPS_API UScriptStruct* StaticStruct<FRevenantSkill>()
{
	return FRevenantSkill::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRevenantSkill(FRevenantSkill::StaticStruct, TEXT("/Script/ProjectTPS"), TEXT("RevenantSkill"), false, nullptr, nullptr);
static struct FScriptStruct_ProjectTPS_StaticRegisterNativesFRevenantSkill
{
	FScriptStruct_ProjectTPS_StaticRegisterNativesFRevenantSkill()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RevenantSkill")),new UScriptStruct::TCppStructOps<FRevenantSkill>);
	}
} ScriptStruct_ProjectTPS_StaticRegisterNativesFRevenantSkill;
	struct Z_Construct_UScriptStruct_FRevenantSkill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillEnable_MetaData[];
#endif
		static void NewProp_SkillEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkillEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillTimeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkillTimeMax;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkillType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkillType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillEnablePhase_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillEnablePhase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRevenantSkill_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRevenantSkill>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillEnable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RevenantSkill" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillEnable_SetBit(void* Obj)
	{
		((FRevenantSkill*)Obj)->SkillEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillEnable = { "SkillEnable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRevenantSkill), &Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillTimeMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RevenantSkill" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillTimeMax = { "SkillTimeMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRevenantSkill, SkillTimeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillTimeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillTimeMax_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RevenantSkill" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillType = { "SkillType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRevenantSkill, SkillType), Z_Construct_UEnum_ProjectTPS_ERevenantSkillType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillEnablePhase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RevenantSkill" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillEnablePhase = { "SkillEnablePhase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRevenantSkill, SkillEnablePhase), METADATA_PARAMS(Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillEnablePhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillEnablePhase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRevenantSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillTimeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillEnablePhase,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRevenantSkill_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
		nullptr,
		&NewStructOps,
		"RevenantSkill",
		sizeof(FRevenantSkill),
		alignof(FRevenantSkill),
		Z_Construct_UScriptStruct_FRevenantSkill_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRevenantSkill_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRevenantSkill_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRevenantSkill_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRevenantSkill()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRevenantSkill_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RevenantSkill"), sizeof(FRevenantSkill), Get_Z_Construct_UScriptStruct_FRevenantSkill_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRevenantSkill_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRevenantSkill_Hash() { return 1498290429U; }
	void ARevenant::StaticRegisterNativesARevenant()
	{
	}
	UClass* Z_Construct_UClass_ARevenant_NoRegister()
	{
		return ARevenant::StaticClass();
	}
	struct Z_Construct_UClass_ARevenant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_SkillArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SkillArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_SkillArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SkillTimeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_SkillTimeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARevenant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMonster,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Monster/Revenant.h" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillArray_Inner = { "m_SkillArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRevenantSkill, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillArray_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillArray = { "m_SkillArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_SkillArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillTimeMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillTimeMax = { "m_SkillTimeMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_SkillTimeMax), METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillTimeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillTimeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_Target_MetaData[] = {
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, Target), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARevenant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillTimeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_Target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARevenant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARevenant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARevenant_Statics::ClassParams = {
		&ARevenant::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARevenant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARevenant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARevenant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARevenant, 1854105373);
	template<> PROJECTTPS_API UClass* StaticClass<ARevenant>()
	{
		return ARevenant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARevenant(Z_Construct_UClass_ARevenant, &ARevenant::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("ARevenant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARevenant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
