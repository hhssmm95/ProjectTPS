// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/BTTask_CallBackup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_CallBackup() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTTask_CallBackup_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTTask_CallBackup();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
// End Cross Module References
	void UBTTask_CallBackup::StaticRegisterNativesUBTTask_CallBackup()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_CallBackup_NoRegister()
	{
		return UBTTask_CallBackup::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_CallBackup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_CallBackup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_CallBackup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Monster/BTTask_CallBackup.h" },
		{ "ModuleRelativePath", "Monster/BTTask_CallBackup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_CallBackup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_CallBackup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_CallBackup_Statics::ClassParams = {
		&UBTTask_CallBackup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_CallBackup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CallBackup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_CallBackup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_CallBackup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_CallBackup, 3907421026);
	template<> PROJECTTPS_API UClass* StaticClass<UBTTask_CallBackup>()
	{
		return UBTTask_CallBackup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_CallBackup(Z_Construct_UClass_UBTTask_CallBackup, &UBTTask_CallBackup::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UBTTask_CallBackup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_CallBackup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
