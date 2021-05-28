// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/BTTask_SimpleRotateTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SimpleRotateTo() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTTask_SimpleRotateTo_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTTask_SimpleRotateTo();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
// End Cross Module References
	void UBTTask_SimpleRotateTo::StaticRegisterNativesUBTTask_SimpleRotateTo()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_SimpleRotateTo_NoRegister()
	{
		return UBTTask_SimpleRotateTo::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BlackboardKeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTask_SimpleRotateTo.h" },
		{ "ModuleRelativePath", "BTTask_SimpleRotateTo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::NewProp_BlackboardKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTTask_SimpleRotateTo" },
		{ "ModuleRelativePath", "BTTask_SimpleRotateTo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::NewProp_BlackboardKeyName = { "BlackboardKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_SimpleRotateTo, BlackboardKeyName), METADATA_PARAMS(Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::NewProp_BlackboardKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::NewProp_BlackboardKeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::NewProp_BlackboardKeyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SimpleRotateTo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::ClassParams = {
		&UBTTask_SimpleRotateTo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_SimpleRotateTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_SimpleRotateTo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_SimpleRotateTo, 2560339481);
	template<> PROJECTTPS_API UClass* StaticClass<UBTTask_SimpleRotateTo>()
	{
		return UBTTask_SimpleRotateTo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_SimpleRotateTo(Z_Construct_UClass_UBTTask_SimpleRotateTo, &UBTTask_SimpleRotateTo::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UBTTask_SimpleRotateTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SimpleRotateTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
