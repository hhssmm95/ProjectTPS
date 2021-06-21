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
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UBossHPWidget_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UDeathScreenWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainHUDWidget::execClearScriptArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearScriptArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainHUDWidget::execPlayScriptArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayScriptArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainHUDWidget::execAddScriptToArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Script);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddScriptToArray(Z_Param_Script);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainHUDWidget::execSetTextScriptVisible)
	{
		P_GET_UBOOL(Z_Param_Visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextScriptVisible(Z_Param_Visible);
		P_NATIVE_END;
	}
	void UMainHUDWidget::StaticRegisterNativesUMainHUDWidget()
	{
		UClass* Class = UMainHUDWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScriptToArray", &UMainHUDWidget::execAddScriptToArray },
			{ "ClearScriptArray", &UMainHUDWidget::execClearScriptArray },
			{ "PlayScriptArray", &UMainHUDWidget::execPlayScriptArray },
			{ "SetTextScriptVisible", &UMainHUDWidget::execSetTextScriptVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray_Statics
	{
		struct MainHUDWidget_eventAddScriptToArray_Parms
		{
			FString Script;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Script;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray_Statics::NewProp_Script_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainHUDWidget_eventAddScriptToArray_Parms, Script), METADATA_PARAMS(Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray_Statics::NewProp_Script_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray_Statics::NewProp_Script_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray_Statics::NewProp_Script,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainHUDWidget, nullptr, "AddScriptToArray", nullptr, nullptr, sizeof(MainHUDWidget_eventAddScriptToArray_Parms), Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainHUDWidget_ClearScriptArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainHUDWidget_ClearScriptArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainHUDWidget_ClearScriptArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainHUDWidget, nullptr, "ClearScriptArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainHUDWidget_ClearScriptArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainHUDWidget_ClearScriptArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainHUDWidget_ClearScriptArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainHUDWidget_ClearScriptArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainHUDWidget_PlayScriptArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainHUDWidget_PlayScriptArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainHUDWidget_PlayScriptArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainHUDWidget, nullptr, "PlayScriptArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainHUDWidget_PlayScriptArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainHUDWidget_PlayScriptArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainHUDWidget_PlayScriptArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainHUDWidget_PlayScriptArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible_Statics
	{
		struct MainHUDWidget_eventSetTextScriptVisible_Parms
		{
			bool Visible;
		};
		static void NewProp_Visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((MainHUDWidget_eventSetTextScriptVisible_Parms*)Obj)->Visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MainHUDWidget_eventSetTextScriptVisible_Parms), &Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible_Statics::NewProp_Visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainHUDWidget, nullptr, "SetTextScriptVisible", nullptr, nullptr, sizeof(MainHUDWidget_eventSetTextScriptVisible_Parms), Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainHUDWidget_NoRegister()
	{
		return UMainHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ScopeAim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ScopeAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BossHPWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BossHPWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DeathScreenWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DeathScreenWidget;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AlertCountText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AlertCountText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AlertText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AlertText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AlertBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AlertBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_GuideText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_GuideText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TextScriptBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_TextScriptBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TextScript_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_TextScript;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_ScriptArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ScriptArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ScriptArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainHUDWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainHUDWidget_AddScriptToArray, "AddScriptToArray" }, // 2883176418
		{ &Z_Construct_UFunction_UMainHUDWidget_ClearScriptArray, "ClearScriptArray" }, // 1252993291
		{ &Z_Construct_UFunction_UMainHUDWidget_PlayScriptArray, "PlayScriptArray" }, // 1362860871
		{ &Z_Construct_UFunction_UMainHUDWidget_SetTextScriptVisible, "SetTextScriptVisible" }, // 4209835337
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_ScopeAim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_ScopeAim = { "m_ScopeAim", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_ScopeAim), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_ScopeAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_ScopeAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_BossHPWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_BossHPWidget = { "m_BossHPWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_BossHPWidget), Z_Construct_UClass_UBossHPWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_BossHPWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_BossHPWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_DeathScreenWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_DeathScreenWidget = { "m_DeathScreenWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_DeathScreenWidget), Z_Construct_UClass_UDeathScreenWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_DeathScreenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_DeathScreenWidget_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertCountText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertCountText = { "m_AlertCountText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_AlertCountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertCountText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertCountText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertText = { "m_AlertText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_AlertText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertBorder_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertBorder = { "m_AlertBorder", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_AlertBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_GuideText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_GuideText = { "m_GuideText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_GuideText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_GuideText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_GuideText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_TextScriptBorder_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_TextScriptBorder = { "m_TextScriptBorder", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_TextScriptBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_TextScriptBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_TextScriptBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_TextScript_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_TextScript = { "m_TextScript", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_TextScript), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_TextScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_TextScript_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_ScriptArray_Inner = { "m_ScriptArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_ScriptArray_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUDWidget" },
		{ "ModuleRelativePath", "UI/MainHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_ScriptArray = { "m_ScriptArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUDWidget, m_ScriptArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_ScriptArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_ScriptArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainHUDWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_PlayerHPWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_PlayerEquipWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_HitMarkerWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AbilityWindowWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_ScopeAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_BossHPWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_DeathScreenWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_BackgroundBlur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_SlotProgress1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_SlotProgress2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertCountText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_AlertBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_GuideText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_TextScriptBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_TextScript,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_ScriptArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUDWidget_Statics::NewProp_m_ScriptArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainHUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainHUDWidget_Statics::ClassParams = {
		&UMainHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UMainHUDWidget, 3303114774);
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
