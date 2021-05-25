// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Player/PlayerInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInfo() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UPlayerInfo_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UPlayerInfo();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
// End Cross Module References
	void UPlayerInfo::StaticRegisterNativesUPlayerInfo()
	{
	}
	UClass* Z_Construct_UClass_UPlayerInfo_NoRegister()
	{
		return UPlayerInfo::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HPMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_HPMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_Attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CurrentMag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_CurrentMag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RemainMag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_RemainMag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Assult_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_Assult_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Defend_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_Defend_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Utility_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_Utility_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AbilityPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_AbilityPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HaveSnipeMode_MetaData[];
#endif
		static void NewProp_m_HaveSnipeMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_HaveSnipeMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HaveSuperSuppressor_MetaData[];
#endif
		static void NewProp_m_HaveSuperSuppressor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_HaveSuperSuppressor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HaveNightVision_MetaData[];
#endif
		static void NewProp_m_HaveNightVision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_HaveNightVision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HaveThermalVision_MetaData[];
#endif
		static void NewProp_m_HaveThermalVision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_HaveThermalVision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/PlayerInfo.h" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HP = { "m_HP", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_HP), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPMax = { "m_HPMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_HPMax), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Attack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Attack = { "m_Attack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_Attack), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Armor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Armor = { "m_Armor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_Armor), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMag_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMag = { "m_CurrentMag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_CurrentMag), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_RemainMag_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_RemainMag = { "m_RemainMag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_RemainMag), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_RemainMag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_RemainMag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult_Level_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult_Level = { "m_Assult_Level", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_Assult_Level), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defend_Level_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defend_Level = { "m_Defend_Level", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_Defend_Level), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defend_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defend_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility_Level_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility_Level = { "m_Utility_Level", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_Utility_Level), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AbilityPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AbilityPoint = { "m_AbilityPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_AbilityPoint), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AbilityPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AbilityPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSnipeMode_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSnipeMode_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_HaveSnipeMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSnipeMode = { "m_HaveSnipeMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSnipeMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSnipeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSnipeMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSuperSuppressor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSuperSuppressor_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_HaveSuperSuppressor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSuperSuppressor = { "m_HaveSuperSuppressor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSuperSuppressor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSuperSuppressor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSuperSuppressor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveNightVision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveNightVision_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_HaveNightVision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveNightVision = { "m_HaveNightVision", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveNightVision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveNightVision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveNightVision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveThermalVision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveThermalVision_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_HaveThermalVision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveThermalVision = { "m_HaveThermalVision", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveThermalVision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveThermalVision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveThermalVision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_RemainMag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defend_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AbilityPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSnipeMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSuperSuppressor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveNightVision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveThermalVision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInfo_Statics::ClassParams = {
		&UPlayerInfo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerInfo, 729375443);
	template<> PROJECTTPS_API UClass* StaticClass<UPlayerInfo>()
	{
		return UPlayerInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerInfo(Z_Construct_UClass_UPlayerInfo, &UPlayerInfo::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UPlayerInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
