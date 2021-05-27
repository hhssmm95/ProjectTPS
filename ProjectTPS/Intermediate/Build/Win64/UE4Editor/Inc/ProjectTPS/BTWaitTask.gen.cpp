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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTWaitTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTWaitTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTWaitTask_Statics::ClassParams = {
		&UBTWaitTask::StaticClass,
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
	IMPLEMENT_CLASS(UBTWaitTask, 190355406);
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
