// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/HitCameraShake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitCameraShake() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UHitCameraShake_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UHitCameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UMatineeCameraShake();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
// End Cross Module References
	void UHitCameraShake::StaticRegisterNativesUHitCameraShake()
	{
	}
	UClass* Z_Construct_UClass_UHitCameraShake_NoRegister()
	{
		return UHitCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UHitCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHitCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMatineeCameraShake,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitCameraShake_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HitCameraShake.h" },
		{ "ModuleRelativePath", "HitCameraShake.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHitCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitCameraShake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHitCameraShake_Statics::ClassParams = {
		&UHitCameraShake::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHitCameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHitCameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHitCameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHitCameraShake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHitCameraShake, 2215310375);
	template<> PROJECTTPS_API UClass* StaticClass<UHitCameraShake>()
	{
		return UHitCameraShake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHitCameraShake(Z_Construct_UClass_UHitCameraShake, &UHitCameraShake::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UHitCameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHitCameraShake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
