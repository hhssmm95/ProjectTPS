// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/GameInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInfo() {}
// Cross Module References
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_EAbility();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_EMoveDir();
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_EItemType();
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_EGearType();
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_ERevenantSkillType();
// End Cross Module References
	static UEnum* EAbility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectTPS_EAbility, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("EAbility"));
		}
		return Singleton;
	}
	template<> PROJECTTPS_API UEnum* StaticEnum<EAbility>()
	{
		return EAbility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAbility(EAbility_StaticEnum, TEXT("/Script/ProjectTPS"), TEXT("EAbility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectTPS_EAbility_Hash() { return 545166536U; }
	UEnum* Z_Construct_UEnum_ProjectTPS_EAbility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAbility"), 0, Get_Z_Construct_UEnum_ProjectTPS_EAbility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAbility::None", (int64)EAbility::None },
				{ "EAbility::Assult1", (int64)EAbility::Assult1 },
				{ "EAbility::Assult2", (int64)EAbility::Assult2 },
				{ "EAbility::Assult3", (int64)EAbility::Assult3 },
				{ "EAbility::Defence1", (int64)EAbility::Defence1 },
				{ "EAbility::Defence2", (int64)EAbility::Defence2 },
				{ "EAbility::Defence3", (int64)EAbility::Defence3 },
				{ "EAbility::Utility1", (int64)EAbility::Utility1 },
				{ "EAbility::Utility2", (int64)EAbility::Utility2 },
				{ "EAbility::Utility3", (int64)EAbility::Utility3 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Assult1.Name", "EAbility::Assult1" },
				{ "Assult2.Name", "EAbility::Assult2" },
				{ "Assult3.Name", "EAbility::Assult3" },
				{ "BlueprintType", "true" },
				{ "Defence1.Name", "EAbility::Defence1" },
				{ "Defence2.Name", "EAbility::Defence2" },
				{ "Defence3.Name", "EAbility::Defence3" },
				{ "ModuleRelativePath", "GameInfo.h" },
				{ "None.Name", "EAbility::None" },
				{ "Utility1.Name", "EAbility::Utility1" },
				{ "Utility2.Name", "EAbility::Utility2" },
				{ "Utility3.Name", "EAbility::Utility3" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectTPS,
				nullptr,
				"EAbility",
				"EAbility",
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
	static UEnum* EMoveDir_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectTPS_EMoveDir, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("EMoveDir"));
		}
		return Singleton;
	}
	template<> PROJECTTPS_API UEnum* StaticEnum<EMoveDir>()
	{
		return EMoveDir_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoveDir(EMoveDir_StaticEnum, TEXT("/Script/ProjectTPS"), TEXT("EMoveDir"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectTPS_EMoveDir_Hash() { return 1762760741U; }
	UEnum* Z_Construct_UEnum_ProjectTPS_EMoveDir()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoveDir"), 0, Get_Z_Construct_UEnum_ProjectTPS_EMoveDir_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMoveDir::None", (int64)EMoveDir::None },
				{ "EMoveDir::Forward", (int64)EMoveDir::Forward },
				{ "EMoveDir::ForwardRight", (int64)EMoveDir::ForwardRight },
				{ "EMoveDir::Right", (int64)EMoveDir::Right },
				{ "EMoveDir::BackwardRight", (int64)EMoveDir::BackwardRight },
				{ "EMoveDir::Backward", (int64)EMoveDir::Backward },
				{ "EMoveDir::BackwardLeft", (int64)EMoveDir::BackwardLeft },
				{ "EMoveDir::Left", (int64)EMoveDir::Left },
				{ "EMoveDir::ForwardLeft", (int64)EMoveDir::ForwardLeft },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Backward.Name", "EMoveDir::Backward" },
				{ "BackwardLeft.Name", "EMoveDir::BackwardLeft" },
				{ "BackwardRight.Name", "EMoveDir::BackwardRight" },
				{ "BlueprintType", "true" },
				{ "Forward.Name", "EMoveDir::Forward" },
				{ "ForwardLeft.Name", "EMoveDir::ForwardLeft" },
				{ "ForwardRight.Name", "EMoveDir::ForwardRight" },
				{ "Left.Name", "EMoveDir::Left" },
				{ "ModuleRelativePath", "GameInfo.h" },
				{ "None.Name", "EMoveDir::None" },
				{ "Right.Name", "EMoveDir::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectTPS,
				nullptr,
				"EMoveDir",
				"EMoveDir",
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
	static UEnum* EItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectTPS_EItemType, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("EItemType"));
		}
		return Singleton;
	}
	template<> PROJECTTPS_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemType(EItemType_StaticEnum, TEXT("/Script/ProjectTPS"), TEXT("EItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectTPS_EItemType_Hash() { return 2972578156U; }
	UEnum* Z_Construct_UEnum_ProjectTPS_EItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemType"), 0, Get_Z_Construct_UEnum_ProjectTPS_EItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemType::None", (int64)EItemType::None },
				{ "EItemType::Ammo", (int64)EItemType::Ammo },
				{ "EItemType::AbilityPoint", (int64)EItemType::AbilityPoint },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbilityPoint.Name", "EItemType::AbilityPoint" },
				{ "Ammo.Name", "EItemType::Ammo" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "GameInfo.h" },
				{ "None.Name", "EItemType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectTPS,
				nullptr,
				"EItemType",
				"EItemType",
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
	static UEnum* EGearType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectTPS_EGearType, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("EGearType"));
		}
		return Singleton;
	}
	template<> PROJECTTPS_API UEnum* StaticEnum<EGearType>()
	{
		return EGearType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGearType(EGearType_StaticEnum, TEXT("/Script/ProjectTPS"), TEXT("EGearType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectTPS_EGearType_Hash() { return 3494679245U; }
	UEnum* Z_Construct_UEnum_ProjectTPS_EGearType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGearType"), 0, Get_Z_Construct_UEnum_ProjectTPS_EGearType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGearType::None", (int64)EGearType::None },
				{ "EGearType::Suppressor", (int64)EGearType::Suppressor },
				{ "EGearType::Scope", (int64)EGearType::Scope },
				{ "EGearType::NightVision", (int64)EGearType::NightVision },
				{ "EGearType::ThermalVision", (int64)EGearType::ThermalVision },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "GameInfo.h" },
				{ "NightVision.Name", "EGearType::NightVision" },
				{ "None.Name", "EGearType::None" },
				{ "Scope.Name", "EGearType::Scope" },
				{ "Suppressor.Name", "EGearType::Suppressor" },
				{ "ThermalVision.Name", "EGearType::ThermalVision" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectTPS,
				nullptr,
				"EGearType",
				"EGearType",
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
	static UEnum* ERevenantSkillType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectTPS_ERevenantSkillType, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("ERevenantSkillType"));
		}
		return Singleton;
	}
	template<> PROJECTTPS_API UEnum* StaticEnum<ERevenantSkillType>()
	{
		return ERevenantSkillType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERevenantSkillType(ERevenantSkillType_StaticEnum, TEXT("/Script/ProjectTPS"), TEXT("ERevenantSkillType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectTPS_ERevenantSkillType_Hash() { return 121121806U; }
	UEnum* Z_Construct_UEnum_ProjectTPS_ERevenantSkillType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERevenantSkillType"), 0, Get_Z_Construct_UEnum_ProjectTPS_ERevenantSkillType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERevenantSkillType::None", (int64)ERevenantSkillType::None },
				{ "ERevenantSkillType::Skill1", (int64)ERevenantSkillType::Skill1 },
				{ "ERevenantSkillType::Skill2", (int64)ERevenantSkillType::Skill2 },
				{ "ERevenantSkillType::Skill3", (int64)ERevenantSkillType::Skill3 },
				{ "ERevenantSkillType::Skill4", (int64)ERevenantSkillType::Skill4 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "GameInfo.h" },
				{ "None.Name", "ERevenantSkillType::None" },
				{ "Skill1.Name", "ERevenantSkillType::Skill1" },
				{ "Skill2.Name", "ERevenantSkillType::Skill2" },
				{ "Skill3.Name", "ERevenantSkillType::Skill3" },
				{ "Skill4.Name", "ERevenantSkillType::Skill4" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectTPS,
				nullptr,
				"ERevenantSkillType",
				"ERevenantSkillType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
