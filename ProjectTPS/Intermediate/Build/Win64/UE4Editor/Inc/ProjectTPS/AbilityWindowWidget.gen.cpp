// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/UI/AbilityWindowWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityWindowWidget() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UAbilityWindowWidget_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UAbilityWindowWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTileView_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAbilityWindowWidget::execClickSlot2Button)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClickSlot2Button();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityWindowWidget::execClickSlot1Button)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClickSlot1Button();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityWindowWidget::execSlotClick)
	{
		P_GET_OBJECT(UObject,Z_Param_pObj);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SlotClick(Z_Param_pObj);
		P_NATIVE_END;
	}
	void UAbilityWindowWidget::StaticRegisterNativesUAbilityWindowWidget()
	{
		UClass* Class = UAbilityWindowWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClickSlot1Button", &UAbilityWindowWidget::execClickSlot1Button },
			{ "ClickSlot2Button", &UAbilityWindowWidget::execClickSlot2Button },
			{ "SlotClick", &UAbilityWindowWidget::execSlotClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot1Button_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot1Button_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AbilityWindowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot1Button_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityWindowWidget, nullptr, "ClickSlot1Button", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot1Button_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot1Button_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot1Button()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot1Button_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot2Button_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot2Button_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AbilityWindowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot2Button_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityWindowWidget, nullptr, "ClickSlot2Button", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot2Button_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot2Button_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot2Button()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot2Button_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityWindowWidget_SlotClick_Statics
	{
		struct AbilityWindowWidget_eventSlotClick_Parms
		{
			UObject* pObj;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityWindowWidget_SlotClick_Statics::NewProp_pObj = { "pObj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityWindowWidget_eventSlotClick_Parms, pObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityWindowWidget_SlotClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityWindowWidget_SlotClick_Statics::NewProp_pObj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityWindowWidget_SlotClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AbilityWindowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityWindowWidget_SlotClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityWindowWidget, nullptr, "SlotClick", nullptr, nullptr, sizeof(AbilityWindowWidget_eventSlotClick_Parms), Z_Construct_UFunction_UAbilityWindowWidget_SlotClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityWindowWidget_SlotClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityWindowWidget_SlotClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityWindowWidget_SlotClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityWindowWidget_SlotClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityWindowWidget_SlotClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbilityWindowWidget_NoRegister()
	{
		return UAbilityWindowWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityWindowWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TitleBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_TitleBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Slot1Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Slot1Button;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Slot2Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Slot2Button;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SelectNameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_SelectNameText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SelectDescText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_SelectDescText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AbilityPointText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AbilityPointText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TileView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_TileView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AbilityPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_AbilityPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityWindowWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityWindowWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot1Button, "ClickSlot1Button" }, // 26610048
		{ &Z_Construct_UFunction_UAbilityWindowWidget_ClickSlot2Button, "ClickSlot2Button" }, // 1535055086
		{ &Z_Construct_UFunction_UAbilityWindowWidget_SlotClick, "SlotClick" }, // 2248282529
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityWindowWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/AbilityWindowWidget.h" },
		{ "ModuleRelativePath", "UI/AbilityWindowWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_TitleBack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityWindowWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/AbilityWindowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_TitleBack = { "m_TitleBack", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityWindowWidget, m_TitleBack), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_TitleBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_TitleBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_Slot1Button_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityWindowWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/AbilityWindowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_Slot1Button = { "m_Slot1Button", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityWindowWidget, m_Slot1Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_Slot1Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_Slot1Button_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_Slot2Button_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityWindowWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/AbilityWindowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_Slot2Button = { "m_Slot2Button", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityWindowWidget, m_Slot2Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_Slot2Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_Slot2Button_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_SelectNameText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityWindowWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/AbilityWindowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_SelectNameText = { "m_SelectNameText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityWindowWidget, m_SelectNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_SelectNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_SelectNameText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_SelectDescText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityWindowWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/AbilityWindowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_SelectDescText = { "m_SelectDescText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityWindowWidget, m_SelectDescText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_SelectDescText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_SelectDescText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_AbilityPointText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityWindowWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/AbilityWindowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_AbilityPointText = { "m_AbilityPointText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityWindowWidget, m_AbilityPointText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_AbilityPointText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_AbilityPointText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_TileView_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityWindowWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/AbilityWindowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_TileView = { "m_TileView", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityWindowWidget, m_TileView), Z_Construct_UClass_UTileView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_TileView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_TileView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_AbilityPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityWindowWidget" },
		{ "ModuleRelativePath", "UI/AbilityWindowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_AbilityPoint = { "m_AbilityPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityWindowWidget, m_AbilityPoint), METADATA_PARAMS(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_AbilityPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_AbilityPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityWindowWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_TitleBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_Slot1Button,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_Slot2Button,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_SelectNameText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_SelectDescText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_AbilityPointText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_TileView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityWindowWidget_Statics::NewProp_m_AbilityPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityWindowWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityWindowWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilityWindowWidget_Statics::ClassParams = {
		&UAbilityWindowWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityWindowWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityWindowWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityWindowWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityWindowWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityWindowWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilityWindowWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilityWindowWidget, 1169089814);
	template<> PROJECTTPS_API UClass* StaticClass<UAbilityWindowWidget>()
	{
		return UAbilityWindowWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilityWindowWidget(Z_Construct_UClass_UAbilityWindowWidget, &UAbilityWindowWidget::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UAbilityWindowWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityWindowWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
