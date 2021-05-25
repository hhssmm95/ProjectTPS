// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/UI/PlayerEquipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerEquipWidget() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UPlayerEquipWidget_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UPlayerEquipWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UPlayerEquipWidget::StaticRegisterNativesUPlayerEquipWidget()
	{
	}
	UClass* Z_Construct_UClass_UPlayerEquipWidget_NoRegister()
	{
		return UPlayerEquipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerEquipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CurrentMagText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CurrentMagText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RemainMagText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_RemainMagText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerEquipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerEquipWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/PlayerEquipWidget.h" },
		{ "ModuleRelativePath", "UI/PlayerEquipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerEquipWidget_Statics::NewProp_m_CurrentMagText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerEquipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerEquipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerEquipWidget_Statics::NewProp_m_CurrentMagText = { "m_CurrentMagText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerEquipWidget, m_CurrentMagText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerEquipWidget_Statics::NewProp_m_CurrentMagText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerEquipWidget_Statics::NewProp_m_CurrentMagText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerEquipWidget_Statics::NewProp_m_RemainMagText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerEquipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerEquipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerEquipWidget_Statics::NewProp_m_RemainMagText = { "m_RemainMagText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerEquipWidget, m_RemainMagText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerEquipWidget_Statics::NewProp_m_RemainMagText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerEquipWidget_Statics::NewProp_m_RemainMagText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerEquipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerEquipWidget_Statics::NewProp_m_CurrentMagText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerEquipWidget_Statics::NewProp_m_RemainMagText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerEquipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerEquipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerEquipWidget_Statics::ClassParams = {
		&UPlayerEquipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerEquipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerEquipWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerEquipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerEquipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerEquipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerEquipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerEquipWidget, 1160324237);
	template<> PROJECTTPS_API UClass* StaticClass<UPlayerEquipWidget>()
	{
		return UPlayerEquipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerEquipWidget(Z_Construct_UClass_UPlayerEquipWidget, &UPlayerEquipWidget::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UPlayerEquipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerEquipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
