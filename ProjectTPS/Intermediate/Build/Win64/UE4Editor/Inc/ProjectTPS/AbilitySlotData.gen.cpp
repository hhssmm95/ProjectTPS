// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/UI/AbilitySlotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySlotData() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UAbilitySlotData_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UAbilitySlotData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_EAbility();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UAbilitySlotData::StaticRegisterNativesUAbilitySlotData()
	{
	}
	UClass* Z_Construct_UClass_UAbilitySlotData_NoRegister()
	{
		return UAbilitySlotData::StaticClass();
	}
	struct Z_Construct_UClass_UAbilitySlotData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_AbilityKey_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AbilityKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_AbilityKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AbilityName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_AbilityName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AbilityDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_AbilityDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SlotTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_SlotTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SlotText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_SlotText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_SlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilitySlotData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlotData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/AbilitySlotData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/AbilitySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySlotData" },
		{ "ModuleRelativePath", "UI/AbilitySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityKey = { "m_AbilityKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySlotData, m_AbilityKey), Z_Construct_UEnum_ProjectTPS_EAbility, METADATA_PARAMS(Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySlotData" },
		{ "ModuleRelativePath", "UI/AbilitySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityName = { "m_AbilityName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySlotData, m_AbilityName), METADATA_PARAMS(Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityDescription_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySlotData" },
		{ "ModuleRelativePath", "UI/AbilitySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityDescription = { "m_AbilityDescription", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySlotData, m_AbilityDescription), METADATA_PARAMS(Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySlotData" },
		{ "ModuleRelativePath", "UI/AbilitySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotTexture = { "m_SlotTexture", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySlotData, m_SlotTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySlotData" },
		{ "ModuleRelativePath", "UI/AbilitySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotText = { "m_SlotText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySlotData, m_SlotText), METADATA_PARAMS(Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySlotData" },
		{ "ModuleRelativePath", "UI/AbilitySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotIndex = { "m_SlotIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySlotData, m_SlotIndex), METADATA_PARAMS(Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilitySlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityKey_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_AbilityDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlotData_Statics::NewProp_m_SlotIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilitySlotData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitySlotData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySlotData_Statics::ClassParams = {
		&UAbilitySlotData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbilitySlotData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilitySlotData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlotData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilitySlotData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilitySlotData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilitySlotData, 3043786270);
	template<> PROJECTTPS_API UClass* StaticClass<UAbilitySlotData>()
	{
		return UAbilitySlotData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilitySlotData(Z_Construct_UClass_UAbilitySlotData, &UAbilitySlotData::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UAbilitySlotData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySlotData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
