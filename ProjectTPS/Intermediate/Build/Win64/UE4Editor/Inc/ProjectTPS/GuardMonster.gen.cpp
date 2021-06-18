// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/GuardMonster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuardMonster() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_AGuardMonster_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_AGuardMonster();
	PROJECTTPS_API UClass* Z_Construct_UClass_AMonster();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
// End Cross Module References
	void AGuardMonster::StaticRegisterNativesAGuardMonster()
	{
	}
	UClass* Z_Construct_UClass_AGuardMonster_NoRegister()
	{
		return AGuardMonster::StaticClass();
	}
	struct Z_Construct_UClass_AGuardMonster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGuardMonster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMonster,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuardMonster_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Monster/GuardMonster.h" },
		{ "ModuleRelativePath", "Monster/GuardMonster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGuardMonster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGuardMonster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGuardMonster_Statics::ClassParams = {
		&AGuardMonster::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGuardMonster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGuardMonster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGuardMonster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGuardMonster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGuardMonster, 3413338892);
	template<> PROJECTTPS_API UClass* StaticClass<AGuardMonster>()
	{
		return AGuardMonster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGuardMonster(Z_Construct_UClass_AGuardMonster, &AGuardMonster::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("AGuardMonster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGuardMonster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
