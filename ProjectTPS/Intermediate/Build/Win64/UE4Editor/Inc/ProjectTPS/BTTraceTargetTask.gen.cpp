// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/BTTraceTargetTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTraceTargetTask() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTTraceTargetTask_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTTraceTargetTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
// End Cross Module References
	void UBTTraceTargetTask::StaticRegisterNativesUBTTraceTargetTask()
	{
	}
	UClass* Z_Construct_UClass_UBTTraceTargetTask_NoRegister()
	{
		return UBTTraceTargetTask::StaticClass();
	}
	struct Z_Construct_UClass_UBTTraceTargetTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DistanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_m_DistanceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTraceTargetTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTraceTargetTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Monster/BTTraceTargetTask.h" },
		{ "ModuleRelativePath", "Monster/BTTraceTargetTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTraceTargetTask_Statics::NewProp_m_DistanceName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTTraceTargetTask" },
		{ "ModuleRelativePath", "Monster/BTTraceTargetTask.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTTraceTargetTask_Statics::NewProp_m_DistanceName = { "m_DistanceName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTraceTargetTask, m_DistanceName), METADATA_PARAMS(Z_Construct_UClass_UBTTraceTargetTask_Statics::NewProp_m_DistanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTraceTargetTask_Statics::NewProp_m_DistanceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTraceTargetTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTraceTargetTask_Statics::NewProp_m_DistanceName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTraceTargetTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTraceTargetTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTraceTargetTask_Statics::ClassParams = {
		&UBTTraceTargetTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTraceTargetTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTraceTargetTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTraceTargetTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTraceTargetTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTraceTargetTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTraceTargetTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTraceTargetTask, 2814437953);
	template<> PROJECTTPS_API UClass* StaticClass<UBTTraceTargetTask>()
	{
		return UBTTraceTargetTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTraceTargetTask(Z_Construct_UClass_UBTTraceTargetTask, &UBTTraceTargetTask::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UBTTraceTargetTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTraceTargetTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
