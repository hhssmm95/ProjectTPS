// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/ProjectTPSGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectTPSGameModeBase() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_AProjectTPSGameModeBase_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_AProjectTPSGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UClass* Z_Construct_UClass_UMainHUDWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AAmbientSound_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AProjectTPSGameModeBase::execGetMainHUDWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMainHUDWidget**)Z_Param__Result=P_THIS->GetMainHUDWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectTPSGameModeBase::execSetAlertWithTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AlertTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlertWithTime(Z_Param_AlertTime);
		P_NATIVE_END;
	}
	void AProjectTPSGameModeBase::StaticRegisterNativesAProjectTPSGameModeBase()
	{
		UClass* Class = AProjectTPSGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMainHUDWidget", &AProjectTPSGameModeBase::execGetMainHUDWidget },
			{ "SetAlertWithTime", &AProjectTPSGameModeBase::execSetAlertWithTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget_Statics
	{
		struct ProjectTPSGameModeBase_eventGetMainHUDWidget_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectTPSGameModeBase_eventGetMainHUDWidget_Parms, ReturnValue), Z_Construct_UClass_UMainHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectTPSGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectTPSGameModeBase, nullptr, "GetMainHUDWidget", nullptr, nullptr, sizeof(ProjectTPSGameModeBase_eventGetMainHUDWidget_Parms), Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectTPSGameModeBase_SetAlertWithTime_Statics
	{
		struct ProjectTPSGameModeBase_eventSetAlertWithTime_Parms
		{
			float AlertTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlertTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectTPSGameModeBase_SetAlertWithTime_Statics::NewProp_AlertTime = { "AlertTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectTPSGameModeBase_eventSetAlertWithTime_Parms, AlertTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectTPSGameModeBase_SetAlertWithTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectTPSGameModeBase_SetAlertWithTime_Statics::NewProp_AlertTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectTPSGameModeBase_SetAlertWithTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectTPSGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectTPSGameModeBase_SetAlertWithTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectTPSGameModeBase, nullptr, "SetAlertWithTime", nullptr, nullptr, sizeof(ProjectTPSGameModeBase_eventSetAlertWithTime_Parms), Z_Construct_UFunction_AProjectTPSGameModeBase_SetAlertWithTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectTPSGameModeBase_SetAlertWithTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectTPSGameModeBase_SetAlertWithTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectTPSGameModeBase_SetAlertWithTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectTPSGameModeBase_SetAlertWithTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectTPSGameModeBase_SetAlertWithTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectTPSGameModeBase_NoRegister()
	{
		return AProjectTPSGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProjectTPSGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_PlayerCharacter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AlarmAmbient_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AlarmAmbient_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_AlarmAmbient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AlarmAmbientActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AlarmAmbientActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AlertSpawnPoint_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AlertSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_AlertSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MainHUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_MainHUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AlertTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_AlertTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectTPSGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProjectTPSGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectTPSGameModeBase_GetMainHUDWidget, "GetMainHUDWidget" }, // 1904589606
		{ &Z_Construct_UFunction_AProjectTPSGameModeBase_SetAlertWithTime, "SetAlertWithTime" }, // 788111447
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectTPSGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProjectTPSGameModeBase.h" },
		{ "ModuleRelativePath", "ProjectTPSGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_PlayerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ProjectTPSGameModeBase" },
		{ "ModuleRelativePath", "ProjectTPSGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_PlayerCharacter = { "m_PlayerCharacter", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectTPSGameModeBase, m_PlayerCharacter), Z_Construct_UClass_ACharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_PlayerCharacter_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlarmAmbient_Inner = { "m_AlarmAmbient", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlarmAmbient_MetaData[] = {
		{ "ModuleRelativePath", "ProjectTPSGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlarmAmbient = { "m_AlarmAmbient", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectTPSGameModeBase, m_AlarmAmbient), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlarmAmbient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlarmAmbient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlarmAmbientActor_MetaData[] = {
		{ "Category", "ProjectTPSGameModeBase" },
		{ "ModuleRelativePath", "ProjectTPSGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlarmAmbientActor = { "m_AlarmAmbientActor", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectTPSGameModeBase, m_AlarmAmbientActor), Z_Construct_UClass_AAmbientSound_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlarmAmbientActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlarmAmbientActor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlertSpawnPoint_Inner = { "m_AlertSpawnPoint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlertSpawnPoint_MetaData[] = {
		{ "ModuleRelativePath", "ProjectTPSGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlertSpawnPoint = { "m_AlertSpawnPoint", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectTPSGameModeBase, m_AlertSpawnPoint), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlertSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlertSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_MainHUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectTPSGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_MainHUDWidget = { "m_MainHUDWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectTPSGameModeBase, m_MainHUDWidget), Z_Construct_UClass_UMainHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_MainHUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_MainHUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlertTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ProjectTPSGameModeBase" },
		{ "ModuleRelativePath", "ProjectTPSGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlertTime = { "m_AlertTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectTPSGameModeBase, m_AlertTime), METADATA_PARAMS(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlertTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlertTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectTPSGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_PlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlarmAmbient_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlarmAmbient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlarmAmbientActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlertSpawnPoint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlertSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_MainHUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_AlertTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectTPSGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectTPSGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectTPSGameModeBase_Statics::ClassParams = {
		&AProjectTPSGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProjectTPSGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectTPSGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectTPSGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectTPSGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectTPSGameModeBase, 1139937113);
	template<> PROJECTTPS_API UClass* StaticClass<AProjectTPSGameModeBase>()
	{
		return AProjectTPSGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectTPSGameModeBase(Z_Construct_UClass_AProjectTPSGameModeBase, &AProjectTPSGameModeBase::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("AProjectTPSGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectTPSGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
