// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/UI/AbilitySlotWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySlotWidget() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UAbilitySlotWidget_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UAbilitySlotWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UClass* Z_Construct_UClass_UAbilitySlotData_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_EAbility();
// End Cross Module References
	DEFINE_FUNCTION(UAbilitySlotWidget::execSetData)
	{
		P_GET_OBJECT(UAbilitySlotData,Z_Param_pData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_pData);
		P_NATIVE_END;
	}
	void UAbilitySlotWidget::StaticRegisterNativesUAbilitySlotWidget()
	{
		UClass* Class = UAbilitySlotWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &UAbilitySlotWidget::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilitySlotWidget_SetData_Statics
	{
		struct AbilitySlotWidget_eventSetData_Parms
		{
			UAbilitySlotData* pData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitySlotWidget_SetData_Statics::NewProp_pData = { "pData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilitySlotWidget_eventSetData_Parms, pData), Z_Construct_UClass_UAbilitySlotData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySlotWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySlotWidget_SetData_Statics::NewProp_pData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySlotWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AbilitySlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySlotWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySlotWidget, nullptr, "SetData", nullptr, nullptr, sizeof(AbilitySlotWidget_eventSetData_Parms), Z_Construct_UFunction_UAbilitySlotWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySlotWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitySlotWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySlotWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitySlotWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitySlotWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbilitySlotWidget_NoRegister()
	{
		return UAbilitySlotWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAbilitySlotWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SlotIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_SlotIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SlotText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_SlotText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_AbilityKey_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AbilityKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_AbilityKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AbilityName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_AbilityName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AbilityDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_AbilityDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilitySlotWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilitySlotWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilitySlotWidget_SetData, "SetData" }, // 3231054022
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlotWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/AbilitySlotWidget.h" },
		{ "ModuleRelativePath", "UI/AbilitySlotWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_Index_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySlotWidget" },
		{ "ModuleRelativePath", "UI/AbilitySlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_Index = { "m_Index", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySlotWidget, m_Index), METADATA_PARAMS(Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_SlotIcon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/AbilitySlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_SlotIcon = { "m_SlotIcon", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySlotWidget, m_SlotIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_SlotIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_SlotIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_SlotText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/AbilitySlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_SlotText = { "m_SlotText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySlotWidget, m_SlotText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_SlotText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_SlotText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySlotWidget" },
		{ "ModuleRelativePath", "UI/AbilitySlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityKey = { "m_AbilityKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySlotWidget, m_AbilityKey), Z_Construct_UEnum_ProjectTPS_EAbility, METADATA_PARAMS(Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySlotWidget" },
		{ "ModuleRelativePath", "UI/AbilitySlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityName = { "m_AbilityName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySlotWidget, m_AbilityName), METADATA_PARAMS(Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityDescription_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySlotWidget" },
		{ "ModuleRelativePath", "UI/AbilitySlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityDescription = { "m_AbilityDescription", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySlotWidget, m_AbilityDescription), METADATA_PARAMS(Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilitySlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_SlotIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_SlotText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityKey_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlotWidget_Statics::NewProp_m_AbilityDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilitySlotWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitySlotWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySlotWidget_Statics::ClassParams = {
		&UAbilitySlotWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilitySlotWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilitySlotWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilitySlotWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilitySlotWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilitySlotWidget, 319913350);
	template<> PROJECTTPS_API UClass* StaticClass<UAbilitySlotWidget>()
	{
		return UAbilitySlotWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilitySlotWidget(Z_Construct_UClass_UAbilitySlotWidget, &UAbilitySlotWidget::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UAbilitySlotWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySlotWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
