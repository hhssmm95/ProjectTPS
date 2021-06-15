// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/MonsterSpawnPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterSpawnPoint() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_AMonsterSpawnPoint_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_AMonsterSpawnPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECTTPS_API UClass* Z_Construct_UClass_AMonster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AMonsterSpawnPoint::StaticRegisterNativesAMonsterSpawnPoint()
	{
	}
	UClass* Z_Construct_UClass_AMonsterSpawnPoint_NoRegister()
	{
		return AMonsterSpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterSpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SpawnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_SpawnType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_PatrolPoint_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PatrolPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_PatrolPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SpawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_SpawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bSpawnEnable_MetaData[];
#endif
		static void NewProp_m_bSpawnEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bSpawnEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bCallBackUpEnable_MetaData[];
#endif
		static void NewProp_m_bCallBackUpEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bCallBackUpEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bSpawnContinuous_MetaData[];
#endif
		static void NewProp_m_bSpawnContinuous_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bSpawnContinuous;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsChasing_MetaData[];
#endif
		static void NewProp_m_bIsChasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsChasing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterSpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Monster/MonsterSpawnPoint.h" },
		{ "ModuleRelativePath", "Monster/MonsterSpawnPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_SpawnType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterSpawnPoint" },
		{ "ModuleRelativePath", "Monster/MonsterSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_SpawnType = { "m_SpawnType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterSpawnPoint, m_SpawnType), Z_Construct_UClass_AMonster_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_SpawnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_SpawnType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_PatrolPoint_Inner = { "m_PatrolPoint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_PatrolPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterSpawnPoint" },
		{ "ModuleRelativePath", "Monster/MonsterSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_PatrolPoint = { "m_PatrolPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterSpawnPoint, m_PatrolPoint), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_PatrolPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_PatrolPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_SpawnTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterSpawnPoint" },
		{ "ModuleRelativePath", "Monster/MonsterSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_SpawnTime = { "m_SpawnTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterSpawnPoint, m_SpawnTime), METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_SpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_SpawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bSpawnEnable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterSpawnPoint" },
		{ "ModuleRelativePath", "Monster/MonsterSpawnPoint.h" },
	};
#endif
	void Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bSpawnEnable_SetBit(void* Obj)
	{
		((AMonsterSpawnPoint*)Obj)->m_bSpawnEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bSpawnEnable = { "m_bSpawnEnable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonsterSpawnPoint), &Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bSpawnEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bSpawnEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bSpawnEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bCallBackUpEnable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterSpawnPoint" },
		{ "ModuleRelativePath", "Monster/MonsterSpawnPoint.h" },
	};
#endif
	void Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bCallBackUpEnable_SetBit(void* Obj)
	{
		((AMonsterSpawnPoint*)Obj)->m_bCallBackUpEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bCallBackUpEnable = { "m_bCallBackUpEnable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonsterSpawnPoint), &Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bCallBackUpEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bCallBackUpEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bCallBackUpEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bSpawnContinuous_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterSpawnPoint" },
		{ "ModuleRelativePath", "Monster/MonsterSpawnPoint.h" },
	};
#endif
	void Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bSpawnContinuous_SetBit(void* Obj)
	{
		((AMonsterSpawnPoint*)Obj)->m_bSpawnContinuous = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bSpawnContinuous = { "m_bSpawnContinuous", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonsterSpawnPoint), &Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bSpawnContinuous_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bSpawnContinuous_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bSpawnContinuous_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bIsChasing_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterSpawnPoint" },
		{ "ModuleRelativePath", "Monster/MonsterSpawnPoint.h" },
	};
#endif
	void Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bIsChasing_SetBit(void* Obj)
	{
		((AMonsterSpawnPoint*)Obj)->m_bIsChasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bIsChasing = { "m_bIsChasing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonsterSpawnPoint), &Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bIsChasing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bIsChasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bIsChasing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_SpawnType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_PatrolPoint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_PatrolPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_SpawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bSpawnEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bCallBackUpEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bSpawnContinuous,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterSpawnPoint_Statics::NewProp_m_bIsChasing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterSpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterSpawnPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonsterSpawnPoint_Statics::ClassParams = {
		&AMonsterSpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMonsterSpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawnPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterSpawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterSpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterSpawnPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterSpawnPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterSpawnPoint, 1257357055);
	template<> PROJECTTPS_API UClass* StaticClass<AMonsterSpawnPoint>()
	{
		return AMonsterSpawnPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterSpawnPoint(Z_Construct_UClass_AMonsterSpawnPoint, &AMonsterSpawnPoint::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("AMonsterSpawnPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterSpawnPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
