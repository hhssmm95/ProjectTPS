// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Player/PrimaryWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimaryWeapon() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_APrimaryWeapon_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_APrimaryWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECTTPS_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_AEffectNormal_NoRegister();
// End Cross Module References
	void APrimaryWeapon::StaticRegisterNativesAPrimaryWeapon()
	{
	}
	UClass* Z_Construct_UClass_APrimaryWeapon_NoRegister()
	{
		return APrimaryWeapon::StaticClass();
	}
	struct Z_Construct_UClass_APrimaryWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RootScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_RootScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Ammo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_Ammo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AmmoMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_AmmoMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_BulletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MuzzleSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_MuzzleSoundClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MuzzleClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_MuzzleClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrimaryWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimaryWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/PrimaryWeapon.h" },
		{ "ModuleRelativePath", "Player/PrimaryWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PrimaryWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Mesh = { "m_Mesh", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrimaryWeapon, m_Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_RootScene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PrimaryWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_RootScene = { "m_RootScene", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrimaryWeapon, m_RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_RootScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_RootScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryWeapon" },
		{ "ModuleRelativePath", "Player/PrimaryWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Damage = { "m_Damage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrimaryWeapon, m_Damage), METADATA_PARAMS(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_FireRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryWeapon" },
		{ "ModuleRelativePath", "Player/PrimaryWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_FireRate = { "m_FireRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrimaryWeapon, m_FireRate), METADATA_PARAMS(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Ammo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryWeapon" },
		{ "ModuleRelativePath", "Player/PrimaryWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Ammo = { "m_Ammo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrimaryWeapon, m_Ammo), METADATA_PARAMS(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Ammo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Ammo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_AmmoMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryWeapon" },
		{ "ModuleRelativePath", "Player/PrimaryWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_AmmoMax = { "m_AmmoMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrimaryWeapon, m_AmmoMax), METADATA_PARAMS(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_AmmoMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_AmmoMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_BulletClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryWeapon" },
		{ "ModuleRelativePath", "Player/PrimaryWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_BulletClass = { "m_BulletClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrimaryWeapon, m_BulletClass), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_BulletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_BulletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_MuzzleSoundClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryWeapon" },
		{ "ModuleRelativePath", "Player/PrimaryWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_MuzzleSoundClass = { "m_MuzzleSoundClass", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrimaryWeapon, m_MuzzleSoundClass), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_MuzzleSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_MuzzleSoundClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_MuzzleClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryWeapon" },
		{ "Comment", "//TSubclassOf<USoundBase>\x09\x09m_MuzzleSoundClass;\n" },
		{ "ModuleRelativePath", "Player/PrimaryWeapon.h" },
		{ "ToolTip", "TSubclassOf<USoundBase>         m_MuzzleSoundClass;" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_MuzzleClass = { "m_MuzzleClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrimaryWeapon, m_MuzzleClass), Z_Construct_UClass_AEffectNormal_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_MuzzleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_MuzzleClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APrimaryWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_RootScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_Ammo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_AmmoMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_BulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_MuzzleSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryWeapon_Statics::NewProp_m_MuzzleClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrimaryWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrimaryWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrimaryWeapon_Statics::ClassParams = {
		&APrimaryWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APrimaryWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APrimaryWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrimaryWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrimaryWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrimaryWeapon, 3115814629);
	template<> PROJECTTPS_API UClass* StaticClass<APrimaryWeapon>()
	{
		return APrimaryWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrimaryWeapon(Z_Construct_UClass_APrimaryWeapon, &APrimaryWeapon::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("APrimaryWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrimaryWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
