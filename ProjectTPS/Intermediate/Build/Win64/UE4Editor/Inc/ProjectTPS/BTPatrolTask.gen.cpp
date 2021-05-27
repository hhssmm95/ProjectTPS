// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/BTPatrolTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTPatrolTask() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTPatrolTask_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTPatrolTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
// End Cross Module References
	void UBTPatrolTask::StaticRegisterNativesUBTPatrolTask()
	{
	}
	UClass* Z_Construct_UClass_UBTPatrolTask_NoRegister()
	{
		return UBTPatrolTask::StaticClass();
	}
	struct Z_Construct_UClass_UBTPatrolTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTPatrolTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTPatrolTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Monster/BTPatrolTask.h" },
		{ "ModuleRelativePath", "Monster/BTPatrolTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTPatrolTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTPatrolTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTPatrolTask_Statics::ClassParams = {
		&UBTPatrolTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTPatrolTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTPatrolTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTPatrolTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTPatrolTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTPatrolTask, 2875961849);
	template<> PROJECTTPS_API UClass* StaticClass<UBTPatrolTask>()
	{
		return UBTPatrolTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTPatrolTask(Z_Construct_UClass_UBTPatrolTask, &UBTPatrolTask::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UBTPatrolTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTPatrolTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
