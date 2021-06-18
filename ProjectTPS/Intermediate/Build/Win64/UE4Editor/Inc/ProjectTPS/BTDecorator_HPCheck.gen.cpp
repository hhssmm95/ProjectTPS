// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/BTDecorator_HPCheck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_HPCheck() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTDecorator_HPCheck_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTDecorator_HPCheck();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
// End Cross Module References
	void UBTDecorator_HPCheck::StaticRegisterNativesUBTDecorator_HPCheck()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_HPCheck_NoRegister()
	{
		return UBTDecorator_HPCheck::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_HPCheck_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PhaseHPPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_PhaseHPPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_HPCheck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_HPCheck_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Monster/BTDecorator_HPCheck.h" },
		{ "ModuleRelativePath", "Monster/BTDecorator_HPCheck.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_HPCheck_Statics::NewProp_m_PhaseHPPercent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTDecorator_HPCheck" },
		{ "ModuleRelativePath", "Monster/BTDecorator_HPCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_HPCheck_Statics::NewProp_m_PhaseHPPercent = { "m_PhaseHPPercent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_HPCheck, m_PhaseHPPercent), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_HPCheck_Statics::NewProp_m_PhaseHPPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_HPCheck_Statics::NewProp_m_PhaseHPPercent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_HPCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_HPCheck_Statics::NewProp_m_PhaseHPPercent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_HPCheck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_HPCheck>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_HPCheck_Statics::ClassParams = {
		&UBTDecorator_HPCheck::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_HPCheck_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_HPCheck_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_HPCheck_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_HPCheck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_HPCheck()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_HPCheck_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_HPCheck, 420781053);
	template<> PROJECTTPS_API UClass* StaticClass<UBTDecorator_HPCheck>()
	{
		return UBTDecorator_HPCheck::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_HPCheck(Z_Construct_UClass_UBTDecorator_HPCheck, &UBTDecorator_HPCheck::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UBTDecorator_HPCheck"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_HPCheck);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
