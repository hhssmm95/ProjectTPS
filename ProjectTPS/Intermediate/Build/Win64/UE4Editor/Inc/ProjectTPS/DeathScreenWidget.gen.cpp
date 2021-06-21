// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/UI/DeathScreenWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathScreenWidget() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UDeathScreenWidget_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UDeathScreenWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UDeathScreenWidget::StaticRegisterNativesUDeathScreenWidget()
	{
	}
	UClass* Z_Construct_UClass_UDeathScreenWidget_NoRegister()
	{
		return UDeathScreenWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDeathScreenWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DefeatText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DefeatText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RestartText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_RestartText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeathScreenWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathScreenWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/DeathScreenWidget.h" },
		{ "ModuleRelativePath", "UI/DeathScreenWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathScreenWidget_Statics::NewProp_m_DefeatText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DeathScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DeathScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeathScreenWidget_Statics::NewProp_m_DefeatText = { "m_DefeatText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeathScreenWidget, m_DefeatText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeathScreenWidget_Statics::NewProp_m_DefeatText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathScreenWidget_Statics::NewProp_m_DefeatText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathScreenWidget_Statics::NewProp_m_RestartText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DeathScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DeathScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeathScreenWidget_Statics::NewProp_m_RestartText = { "m_RestartText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeathScreenWidget, m_RestartText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeathScreenWidget_Statics::NewProp_m_RestartText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathScreenWidget_Statics::NewProp_m_RestartText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeathScreenWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathScreenWidget_Statics::NewProp_m_DefeatText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathScreenWidget_Statics::NewProp_m_RestartText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeathScreenWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeathScreenWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeathScreenWidget_Statics::ClassParams = {
		&UDeathScreenWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDeathScreenWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeathScreenWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeathScreenWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathScreenWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeathScreenWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeathScreenWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeathScreenWidget, 1525243044);
	template<> PROJECTTPS_API UClass* StaticClass<UDeathScreenWidget>()
	{
		return UDeathScreenWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeathScreenWidget(Z_Construct_UClass_UDeathScreenWidget, &UDeathScreenWidget::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UDeathScreenWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeathScreenWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
