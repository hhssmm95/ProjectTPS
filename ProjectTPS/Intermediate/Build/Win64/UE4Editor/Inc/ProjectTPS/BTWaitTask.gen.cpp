// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/BTWaitTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTWaitTask() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTWaitTask_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTWaitTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
// End Cross Module References
	void UBTWaitTask::StaticRegisterNativesUBTWaitTask()
	{
	}
	UClass* Z_Construct_UClass_UBTWaitTask_NoRegister()
	{
		return UBTWaitTask::StaticClass();
	}
	struct Z_Construct_UClass_UBTWaitTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualWaitTimeControl_MetaData[];
#endif
		static void NewProp_ManualWaitTimeControl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ManualWaitTimeControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableRecognizeEnemy_MetaData[];
#endif
		static void NewProp_EnableRecognizeEnemy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableRecognizeEnemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTWaitTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTWaitTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Monster/BTWaitTask.h" },
		{ "ModuleRelativePath", "Monster/BTWaitTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTWaitTask_Statics::NewProp_ManualWaitTimeControl_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTWaitTask" },
		{ "ModuleRelativePath", "Monster/BTWaitTask.h" },
	};
#endif
	void Z_Construct_UClass_UBTWaitTask_Statics::NewProp_ManualWaitTimeControl_SetBit(void* Obj)
	{
		((UBTWaitTask*)Obj)->ManualWaitTimeControl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTWaitTask_Statics::NewProp_ManualWaitTimeControl = { "ManualWaitTimeControl", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTWaitTask), &Z_Construct_UClass_UBTWaitTask_Statics::NewProp_ManualWaitTimeControl_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTWaitTask_Statics::NewProp_ManualWaitTimeControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTWaitTask_Statics::NewProp_ManualWaitTimeControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTWaitTask_Statics::NewProp_WaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTWaitTask" },
		{ "ModuleRelativePath", "Monster/BTWaitTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTWaitTask_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTWaitTask, WaitTime), METADATA_PARAMS(Z_Construct_UClass_UBTWaitTask_Statics::NewProp_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTWaitTask_Statics::NewProp_WaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTWaitTask_Statics::NewProp_EnableRecognizeEnemy_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTWaitTask" },
		{ "ModuleRelativePath", "Monster/BTWaitTask.h" },
	};
#endif
	void Z_Construct_UClass_UBTWaitTask_Statics::NewProp_EnableRecognizeEnemy_SetBit(void* Obj)
	{
		((UBTWaitTask*)Obj)->EnableRecognizeEnemy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTWaitTask_Statics::NewProp_EnableRecognizeEnemy = { "EnableRecognizeEnemy", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTWaitTask), &Z_Construct_UClass_UBTWaitTask_Statics::NewProp_EnableRecognizeEnemy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTWaitTask_Statics::NewProp_EnableRecognizeEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTWaitTask_Statics::NewProp_EnableRecognizeEnemy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTWaitTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTWaitTask_Statics::NewProp_ManualWaitTimeControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTWaitTask_Statics::NewProp_WaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTWaitTask_Statics::NewProp_EnableRecognizeEnemy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTWaitTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTWaitTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTWaitTask_Statics::ClassParams = {
		&UBTWaitTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTWaitTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTWaitTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTWaitTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTWaitTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTWaitTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTWaitTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTWaitTask, 1359183929);
	template<> PROJECTTPS_API UClass* StaticClass<UBTWaitTask>()
	{
		return UBTWaitTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTWaitTask(Z_Construct_UClass_UBTWaitTask, &UBTWaitTask::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UBTWaitTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTWaitTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
