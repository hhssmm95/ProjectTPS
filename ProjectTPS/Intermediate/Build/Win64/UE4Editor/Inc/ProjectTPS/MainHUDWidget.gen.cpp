// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/UI/MainHUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainHUDWidget() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UMainHUDWidget_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UMainHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UClass* Z_Construct_UClass_UPlayerHPWidget_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UPlayerEquipWidget_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UHitMarkerWidget_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UAbilityWindowWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UMainHUDWidget::StaticRegisterNativesUMainHUDWidget()
	{
	}
	UClass* Z_Construct_UClass_UMainHUDWidget_NoRegister()
	{
		return UMainHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PlayerHPWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_PlayerHPWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PlayerEquipWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_PlayerEquipWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HitMarkerWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HitMarkerWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AbilityWindowWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AbilityWindowWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BackgroundBlur_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BackgroundBlur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SlotProgress1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_SlotProgress1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SlotProgress2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_SlotProgress2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MainHUDWidget.h" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_PlayerHPWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_PlayerHPWidget = { "m_PlayerHPWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_PlayerHPWidget), Z_Construct_UClass_UPlayerHPWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_PlayerHPWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_PlayerHPWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_PlayerEquipWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_PlayerEquipWidget = { "m_PlayerEquipWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_PlayerEquipWidget), Z_Construct_UClass_UPlayerEquipWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_PlayerEquipWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_PlayerEquipWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_HitMarkerWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_HitMarkerWidget = { "m_HitMarkerWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_HitMarkerWidget), Z_Construct_UClass_UHitMarkerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_HitMarkerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_HitMarkerWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AbilityWindowWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AbilityWindowWidget = { "m_AbilityWindowWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_AbilityWindowWidget), Z_Construct_UClass_UAbilityWindowWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AbilityWindowWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AbilityWindowWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_BackgroundBlur_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_BackgroundBlur = { "m_BackgroundBlur", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_BackgroundBlur), Z_Construct_UClass_UBackgroundBlur_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_BackgroundBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_BackgroundBlur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_SlotProgress1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_SlotProgress1 = { "m_SlotProgress1", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_SlotProgress1), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_SlotProgress1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_SlotProgress1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_SlotProgress2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_SlotProgress2 = { "m_SlotProgress2", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_SlotProgress2), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_SlotProgress2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_SlotProgress2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainHUDWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_PlayerHPWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_PlayerEquipWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_HitMarkerWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AbilityWindowWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_BackgroundBlur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_SlotProgress1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_SlotProgress2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainHUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainHUDWidget_Statics::ClassParams = {
		&UMainHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMainHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainHUDWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainHUDWidget, 589784795);
	template<> PROJECTTPS_API UClass* StaticClass<UMainHUDWidget>()
	{
		return UMainHUDWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainHUDWidget(Z_Construct_UClass_UMainHUDWidget, &UMainHUDWidget::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UMainHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
