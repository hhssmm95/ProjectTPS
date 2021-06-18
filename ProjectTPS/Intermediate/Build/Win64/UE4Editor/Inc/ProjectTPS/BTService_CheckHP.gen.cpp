// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/BTService_CheckHP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_CheckHP() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTService_CheckHP_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTService_CheckHP();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
// End Cross Module References
	void UBTService_CheckHP::StaticRegisterNativesUBTService_CheckHP()
	{
	}
	UClass* Z_Construct_UClass_UBTService_CheckHP_NoRegister()
	{
		return UBTService_CheckHP::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_CheckHP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Phase2Percent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_Phase2Percent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Phase3Percent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_Phase3Percent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Phase4Percent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_Phase4Percent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_CheckHP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_CheckHP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Monster/BTService_CheckHP.h" },
		{ "ModuleRelativePath", "Monster/BTService_CheckHP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase2Percent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTService_CheckHP" },
		{ "ModuleRelativePath", "Monster/BTService_CheckHP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase2Percent = { "m_Phase2Percent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_CheckHP, m_Phase2Percent), METADATA_PARAMS(Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase2Percent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase2Percent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase3Percent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTService_CheckHP" },
		{ "ModuleRelativePath", "Monster/BTService_CheckHP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase3Percent = { "m_Phase3Percent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_CheckHP, m_Phase3Percent), METADATA_PARAMS(Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase3Percent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase3Percent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase4Percent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTService_CheckHP" },
		{ "ModuleRelativePath", "Monster/BTService_CheckHP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase4Percent = { "m_Phase4Percent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_CheckHP, m_Phase4Percent), METADATA_PARAMS(Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase4Percent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase4Percent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_CheckHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase2Percent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase3Percent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_CheckHP_Statics::NewProp_m_Phase4Percent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_CheckHP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_CheckHP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_CheckHP_Statics::ClassParams = {
		&UBTService_CheckHP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_CheckHP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CheckHP_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_CheckHP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CheckHP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_CheckHP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_CheckHP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_CheckHP, 4080298558);
	template<> PROJECTTPS_API UClass* StaticClass<UBTService_CheckHP>()
	{
		return UBTService_CheckHP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_CheckHP(Z_Construct_UClass_UBTService_CheckHP, &UBTService_CheckHP::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UBTService_CheckHP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_CheckHP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
