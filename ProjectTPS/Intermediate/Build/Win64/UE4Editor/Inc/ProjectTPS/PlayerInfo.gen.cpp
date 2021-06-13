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
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HPMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_HPMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_Attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HPRegen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_HPRegen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CurrentMag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_CurrentMag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CurrentMagMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_CurrentMagMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RemainMag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_RemainMag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Assult1Enable_MetaData[];
#endif
		static void NewProp_m_Assult1Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_Assult1Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Assult2Enable_MetaData[];
#endif
		static void NewProp_m_Assult2Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_Assult2Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Assult3Enable_MetaData[];
#endif
		static void NewProp_m_Assult3Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_Assult3Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Defence1Enable_MetaData[];
#endif
		static void NewProp_m_Defence1Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_Defence1Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Defence2Enable_MetaData[];
#endif
		static void NewProp_m_Defence2Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_Defence2Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Defence3Enable_MetaData[];
#endif
		static void NewProp_m_Defence3Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_Defence3Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Utility1Enable_MetaData[];
#endif
		static void NewProp_m_Utility1Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_Utility1Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Utility2Enable_MetaData[];
#endif
		static void NewProp_m_Utility2Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_Utility2Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Utility3Enable_MetaData[];
#endif
		static void NewProp_m_Utility3Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_Utility3Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AssultLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_AssultLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DefenceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_DefenceLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_UtilityLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_UtilityLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AbilityPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_AbilityPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HaveScope_MetaData[];
#endif
		static void NewProp_m_HaveScope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_HaveScope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HaveSuppressor_MetaData[];
#endif
		static void NewProp_m_HaveSuppressor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_HaveSuppressor;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_WaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_WaitTime;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HP = { "m_HP", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_HP), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPMax = { "m_HPMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_HPMax), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPMax_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPRegen_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPRegen = { "m_HPRegen", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_HPRegen), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPRegen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPRegen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMag_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMag = { "m_CurrentMag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_CurrentMag), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMagMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMagMax = { "m_CurrentMagMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_CurrentMagMax), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMagMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMagMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_RemainMag_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_RemainMag = { "m_RemainMag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_RemainMag), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_RemainMag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_RemainMag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult1Enable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult1Enable_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_Assult1Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult1Enable = { "m_Assult1Enable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult1Enable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult1Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult1Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult2Enable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult2Enable_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_Assult2Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult2Enable = { "m_Assult2Enable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult2Enable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult2Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult2Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult3Enable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult3Enable_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_Assult3Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult3Enable = { "m_Assult3Enable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult3Enable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult3Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult3Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence1Enable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence1Enable_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_Defence1Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence1Enable = { "m_Defence1Enable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence1Enable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence1Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence1Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence2Enable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence2Enable_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_Defence2Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence2Enable = { "m_Defence2Enable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence2Enable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence2Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence2Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence3Enable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence3Enable_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_Defence3Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence3Enable = { "m_Defence3Enable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence3Enable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence3Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence3Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility1Enable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility1Enable_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_Utility1Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility1Enable = { "m_Utility1Enable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility1Enable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility1Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility1Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility2Enable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility2Enable_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_Utility2Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility2Enable = { "m_Utility2Enable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility2Enable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility2Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility2Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility3Enable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility3Enable_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_Utility3Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility3Enable = { "m_Utility3Enable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility3Enable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility3Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility3Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AssultLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AssultLevel = { "m_AssultLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_AssultLevel), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AssultLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AssultLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_DefenceLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_DefenceLevel = { "m_DefenceLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_DefenceLevel), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_DefenceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_DefenceLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_UtilityLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_UtilityLevel = { "m_UtilityLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_UtilityLevel), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_UtilityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_UtilityLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AbilityPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AbilityPoint = { "m_AbilityPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_AbilityPoint), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AbilityPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AbilityPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveScope_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveScope_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_HaveScope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveScope = { "m_HaveScope", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveScope_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveScope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSuppressor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSuppressor_SetBit(void* Obj)
	{
		((UPlayerInfo*)Obj)->m_HaveSuppressor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSuppressor = { "m_HaveSuppressor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerInfo), &Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSuppressor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSuppressor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSuppressor_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_WaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "Player/PlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_WaitTime = { "m_WaitTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfo, m_WaitTime), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_WaitTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HPRegen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_CurrentMagMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_RemainMag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult1Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult2Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Assult3Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence1Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence2Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Defence3Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility1Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility2Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_Utility3Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AssultLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_DefenceLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_UtilityLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_AbilityPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveScope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveSuppressor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveNightVision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_HaveThermalVision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfo_Statics::NewProp_m_WaitTime,
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
	IMPLEMENT_CLASS(UPlayerInfo, 3748426647);
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
