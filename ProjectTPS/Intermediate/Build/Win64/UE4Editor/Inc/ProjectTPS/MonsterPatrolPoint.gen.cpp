// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/MonsterPatrolPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterPatrolPoint() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_AMonsterPatrolPoint_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_AMonsterPatrolPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
// End Cross Module References
	void AMonsterPatrolPoint::StaticRegisterNativesAMonsterPatrolPoint()
	{
	}
	UClass* Z_Construct_UClass_AMonsterPatrolPoint_NoRegister()
	{
		return AMonsterPatrolPoint::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterPatrolPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterPatrolPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterPatrolPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Monster/MonsterPatrolPoint.h" },
		{ "ModuleRelativePath", "Monster/MonsterPatrolPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterPatrolPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterPatrolPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonsterPatrolPoint_Statics::ClassParams = {
		&AMonsterPatrolPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterPatrolPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterPatrolPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterPatrolPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterPatrolPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterPatrolPoint, 265933788);
	template<> PROJECTTPS_API UClass* StaticClass<AMonsterPatrolPoint>()
	{
		return AMonsterPatrolPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterPatrolPoint(Z_Construct_UClass_AMonsterPatrolPoint, &AMonsterPatrolPoint::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("AMonsterPatrolPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterPatrolPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
