// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/ProjectTPSGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectTPSGameInstance() {}
// Cross Module References
	PROJECTTPS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAbilityInfo();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_EAbility();
	PROJECTTPS_API UClass* Z_Construct_UClass_UProjectTPSGameInstance_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UProjectTPSGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FPlayerAbilityInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlayerAbilityInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPlayerAbilityInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECTTPS_API uint32 Get_Z_Construct_UScriptStruct_FPlayerAbilityInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerAbilityInfo, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("PlayerAbilityInfo"), sizeof(FPlayerAbilityInfo), Get_Z_Construct_UScriptStruct_FPlayerAbilityInfo_Hash());
	}
	return Singleton;
}
template<> PROJECTTPS_API UScriptStruct* StaticStruct<FPlayerAbilityInfo>()
{
	return FPlayerAbilityInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerAbilityInfo(FPlayerAbilityInfo::StaticStruct, TEXT("/Script/ProjectTPS"), TEXT("PlayerAbilityInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ProjectTPS_StaticRegisterNativesFPlayerAbilityInfo
{
	FScriptStruct_ProjectTPS_StaticRegisterNativesFPlayerAbilityInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerAbilityInfo")),new UScriptStruct::TCppStructOps<FPlayerAbilityInfo>);
	}
} ScriptStruct_ProjectTPS_StaticRegisterNativesFPlayerAbilityInfo;
	struct Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Desc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sign_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Sign;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectTPSGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerAbilityInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAbilityInfo" },
		{ "ModuleRelativePath", "ProjectTPSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAbilityInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAbilityInfo" },
		{ "ModuleRelativePath", "ProjectTPSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAbilityInfo, Key), Z_Construct_UEnum_ProjectTPS_EAbility, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Desc_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAbilityInfo" },
		{ "ModuleRelativePath", "ProjectTPSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAbilityInfo, Desc), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Desc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Desc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Sign_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAbilityInfo" },
		{ "ModuleRelativePath", "ProjectTPSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Sign = { "Sign", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAbilityInfo, Sign), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Sign_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Sign_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Desc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::NewProp_Sign,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PlayerAbilityInfo",
		sizeof(FPlayerAbilityInfo),
		alignof(FPlayerAbilityInfo),
		Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerAbilityInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerAbilityInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerAbilityInfo"), sizeof(FPlayerAbilityInfo), Get_Z_Construct_UScriptStruct_FPlayerAbilityInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerAbilityInfo_Hash() { return 2988224572U; }
	void UProjectTPSGameInstance::StaticRegisterNativesUProjectTPSGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UProjectTPSGameInstance_NoRegister()
	{
		return UProjectTPSGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UProjectTPSGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AbilityInfoTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AbilityInfoTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectTPSGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectTPSGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectTPSGameInstance.h" },
		{ "ModuleRelativePath", "ProjectTPSGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectTPSGameInstance_Statics::NewProp_m_AbilityInfoTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ProjectTPSGameInstance" },
		{ "ModuleRelativePath", "ProjectTPSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProjectTPSGameInstance_Statics::NewProp_m_AbilityInfoTable = { "m_AbilityInfoTable", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectTPSGameInstance, m_AbilityInfoTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProjectTPSGameInstance_Statics::NewProp_m_AbilityInfoTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectTPSGameInstance_Statics::NewProp_m_AbilityInfoTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectTPSGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectTPSGameInstance_Statics::NewProp_m_AbilityInfoTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectTPSGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectTPSGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProjectTPSGameInstance_Statics::ClassParams = {
		&UProjectTPSGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProjectTPSGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProjectTPSGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UProjectTPSGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectTPSGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectTPSGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProjectTPSGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProjectTPSGameInstance, 3717573455);
	template<> PROJECTTPS_API UClass* StaticClass<UProjectTPSGameInstance>()
	{
		return UProjectTPSGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProjectTPSGameInstance(Z_Construct_UClass_UProjectTPSGameInstance, &UProjectTPSGameInstance::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UProjectTPSGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectTPSGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
