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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	void AProjectTPSGameModeBase::StaticRegisterNativesAProjectTPSGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProjectTPSGameModeBase_NoRegister()
	{
		return AProjectTPSGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProjectTPSGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectTPSGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectTPSGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectTPSGameModeBase_Statics::NewProp_m_PlayerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectTPSGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectTPSGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectTPSGameModeBase_Statics::ClassParams = {
		&AProjectTPSGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectTPSGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(AProjectTPSGameModeBase, 2713612675);
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
