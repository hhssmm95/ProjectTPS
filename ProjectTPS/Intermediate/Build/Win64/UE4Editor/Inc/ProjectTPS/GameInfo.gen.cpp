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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
