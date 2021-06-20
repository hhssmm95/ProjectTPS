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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECTTPS_API UClass* Z_Construct_UClass_AGrenade_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_AMonster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UBossHPWidget_NoRegister();
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRevenantSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillTimeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRevenantSkill_Statics::NewProp_SkillType,
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
	uint32 Get_Z_Construct_UScriptStruct_FRevenantSkill_Hash() { return 3567868212U; }
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_TeleportSpotArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TeleportSpotArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_TeleportSpotArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_GrenadeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_GrenadeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BackupMonsterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_BackupMonsterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BackupParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BackupParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BackupEffectSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BackupEffectSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TeleportSound1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_TeleportSound1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TeleportSound2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_TeleportSound2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_GrenadeSound1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_GrenadeSound1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_GrenadeSound2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_GrenadeSound2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BackupSound1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BackupSound1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BackupSound2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BackupSound2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ReloadSound1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ReloadSound1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ReloadSound2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ReloadSound2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HPWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HPWidget;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSpotArray_Inner = { "m_TeleportSpotArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSpotArray_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSpotArray = { "m_TeleportSpotArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_TeleportSpotArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSpotArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSpotArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeClass = { "m_GrenadeClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_GrenadeClass), Z_Construct_UClass_AGrenade_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupMonsterClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupMonsterClass = { "m_BackupMonsterClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_BackupMonsterClass), Z_Construct_UClass_AMonster_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupMonsterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupMonsterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupParticle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupParticle = { "m_BackupParticle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_BackupParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupEffectSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupEffectSound = { "m_BackupEffectSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_BackupEffectSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupEffectSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupEffectSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSound1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSound1 = { "m_TeleportSound1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_TeleportSound1), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSound1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSound1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSound2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSound2 = { "m_TeleportSound2", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_TeleportSound2), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSound2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSound2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeSound1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeSound1 = { "m_GrenadeSound1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_GrenadeSound1), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeSound1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeSound1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeSound2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeSound2 = { "m_GrenadeSound2", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_GrenadeSound2), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeSound2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeSound2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupSound1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupSound1 = { "m_BackupSound1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_BackupSound1), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupSound1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupSound1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupSound2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupSound2 = { "m_BackupSound2", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_BackupSound2), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupSound2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupSound2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_ReloadSound1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_ReloadSound1 = { "m_ReloadSound1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_ReloadSound1), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_ReloadSound1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_ReloadSound1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_ReloadSound2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Revenant" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_ReloadSound2 = { "m_ReloadSound2", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_ReloadSound2), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_ReloadSound2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_ReloadSound2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_Target_MetaData[] = {
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, Target), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevenant_Statics::NewProp_m_HPWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Monster/Revenant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARevenant_Statics::NewProp_m_HPWidget = { "m_HPWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevenant, m_HPWidget), Z_Construct_UClass_UBossHPWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARevenant_Statics::NewProp_m_HPWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevenant_Statics::NewProp_m_HPWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARevenant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_SkillTimeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSpotArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSpotArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupMonsterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupEffectSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSound1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_TeleportSound2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeSound1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_GrenadeSound2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupSound1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_BackupSound2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_ReloadSound1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_ReloadSound2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevenant_Statics::NewProp_m_HPWidget,
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
	IMPLEMENT_CLASS(ARevenant, 1884329071);
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
