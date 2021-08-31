// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/PlayerHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUD() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_APlayerHUD_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_APlayerHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UClass* Z_Construct_UClass_UMainHUDWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(APlayerHUD::execGetHUDCrosshairSpread)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHUDCrosshairSpread();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerHUD::execSetHUDCrosshairSpread)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHUDCrosshairSpread(Z_Param_fScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerHUD::execGetMainHUDWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMainHUDWidget**)Z_Param__Result=P_THIS->GetMainHUDWidget();
		P_NATIVE_END;
	}
	void APlayerHUD::StaticRegisterNativesAPlayerHUD()
	{
		UClass* Class = APlayerHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHUDCrosshairSpread", &APlayerHUD::execGetHUDCrosshairSpread },
			{ "GetMainHUDWidget", &APlayerHUD::execGetMainHUDWidget },
			{ "SetHUDCrosshairSpread", &APlayerHUD::execSetHUDCrosshairSpread },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerHUD_GetHUDCrosshairSpread_Statics
	{
		struct PlayerHUD_eventGetHUDCrosshairSpread_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerHUD_GetHUDCrosshairSpread_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUD_eventGetHUDCrosshairSpread_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerHUD_GetHUDCrosshairSpread_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerHUD_GetHUDCrosshairSpread_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHUD_GetHUDCrosshairSpread_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHUD_GetHUDCrosshairSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHUD, nullptr, "GetHUDCrosshairSpread", nullptr, nullptr, sizeof(PlayerHUD_eventGetHUDCrosshairSpread_Parms), Z_Construct_UFunction_APlayerHUD_GetHUDCrosshairSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerHUD_GetHUDCrosshairSpread_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHUD_GetHUDCrosshairSpread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerHUD_GetHUDCrosshairSpread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHUD_GetHUDCrosshairSpread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHUD_GetHUDCrosshairSpread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget_Statics
	{
		struct PlayerHUD_eventGetMainHUDWidget_Parms
		{
			UMainHUDWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUD_eventGetMainHUDWidget_Parms, ReturnValue), Z_Construct_UClass_UMainHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHUD, nullptr, "GetMainHUDWidget", nullptr, nullptr, sizeof(PlayerHUD_eventGetMainHUDWidget_Parms), Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerHUD_SetHUDCrosshairSpread_Statics
	{
		struct PlayerHUD_eventSetHUDCrosshairSpread_Parms
		{
			float fScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerHUD_SetHUDCrosshairSpread_Statics::NewProp_fScale = { "fScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUD_eventSetHUDCrosshairSpread_Parms, fScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerHUD_SetHUDCrosshairSpread_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerHUD_SetHUDCrosshairSpread_Statics::NewProp_fScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHUD_SetHUDCrosshairSpread_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHUD_SetHUDCrosshairSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHUD, nullptr, "SetHUDCrosshairSpread", nullptr, nullptr, sizeof(PlayerHUD_eventSetHUDCrosshairSpread_Parms), Z_Construct_UFunction_APlayerHUD_SetHUDCrosshairSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerHUD_SetHUDCrosshairSpread_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHUD_SetHUDCrosshairSpread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerHUD_SetHUDCrosshairSpread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHUD_SetHUDCrosshairSpread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHUD_SetHUDCrosshairSpread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerHUD_NoRegister()
	{
		return APlayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_APlayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MainHUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_MainHUDWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CrosshairSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_CrosshairSpread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerHUD_GetHUDCrosshairSpread, "GetHUDCrosshairSpread" }, // 1695707050
		{ &Z_Construct_UFunction_APlayerHUD_GetMainHUDWidget, "GetMainHUDWidget" }, // 1067285130
		{ &Z_Construct_UFunction_APlayerHUD_SetHUDCrosshairSpread, "SetHUDCrosshairSpread" }, // 3463314306
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PlayerHUD.h" },
		{ "ModuleRelativePath", "PlayerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::NewProp_m_MainHUDWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerHUD" },
		{ "ModuleRelativePath", "PlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerHUD_Statics::NewProp_m_MainHUDWidgetClass = { "m_MainHUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHUD, m_MainHUDWidgetClass), Z_Construct_UClass_UMainHUDWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::NewProp_m_MainHUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::NewProp_m_MainHUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::NewProp_m_CrosshairSpread_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerHUD" },
		{ "ModuleRelativePath", "PlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerHUD_Statics::NewProp_m_CrosshairSpread = { "m_CrosshairSpread", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHUD, m_CrosshairSpread), METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::NewProp_m_CrosshairSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::NewProp_m_CrosshairSpread_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHUD_Statics::NewProp_m_MainHUDWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHUD_Statics::NewProp_m_CrosshairSpread,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerHUD_Statics::ClassParams = {
		&APlayerHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerHUD, 1195207732);
	template<> PROJECTTPS_API UClass* StaticClass<APlayerHUD>()
	{
		return APlayerHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerHUD(Z_Construct_UClass_APlayerHUD, &APlayerHUD::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("APlayerHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
