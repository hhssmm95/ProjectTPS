// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/BTTaskSetMonsterAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTaskSetMonsterAnimation() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTTaskSetMonsterAnimation_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTTaskSetMonsterAnimation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_MonsterAI();
// End Cross Module References
	void UBTTaskSetMonsterAnimation::StaticRegisterNativesUBTTaskSetMonsterAnimation()
	{
	}
	UClass* Z_Construct_UClass_UBTTaskSetMonsterAnimation_NoRegister()
	{
		return UBTTaskSetMonsterAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectAI_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectAI_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SelectAI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Monster/BTTaskSetMonsterAnimation.h" },
		{ "ModuleRelativePath", "Monster/BTTaskSetMonsterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::NewProp_SelectAI_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::NewProp_SelectAI_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTTaskSetMonsterAnimation" },
		{ "ModuleRelativePath", "Monster/BTTaskSetMonsterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::NewProp_SelectAI = { "SelectAI", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTaskSetMonsterAnimation, SelectAI), Z_Construct_UEnum_ProjectTPS_MonsterAI, METADATA_PARAMS(Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::NewProp_SelectAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::NewProp_SelectAI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::NewProp_SelectAI_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::NewProp_SelectAI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTaskSetMonsterAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::ClassParams = {
		&UBTTaskSetMonsterAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTaskSetMonsterAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTaskSetMonsterAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTaskSetMonsterAnimation, 3695328968);
	template<> PROJECTTPS_API UClass* StaticClass<UBTTaskSetMonsterAnimation>()
	{
		return UBTTaskSetMonsterAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTaskSetMonsterAnimation(Z_Construct_UClass_UBTTaskSetMonsterAnimation, &UBTTaskSetMonsterAnimation::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UBTTaskSetMonsterAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskSetMonsterAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
