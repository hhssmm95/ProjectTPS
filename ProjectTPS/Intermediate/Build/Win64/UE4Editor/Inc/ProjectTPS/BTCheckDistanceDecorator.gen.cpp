// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/BTCheckDistanceDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTCheckDistanceDecorator() {}
// Cross Module References
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_EDistanceCheckType();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTCheckDistanceDecorator_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTCheckDistanceDecorator();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
// End Cross Module References
	static UEnum* EDistanceCheckType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectTPS_EDistanceCheckType, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("EDistanceCheckType"));
		}
		return Singleton;
	}
	template<> PROJECTTPS_API UEnum* StaticEnum<EDistanceCheckType>()
	{
		return EDistanceCheckType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDistanceCheckType(EDistanceCheckType_StaticEnum, TEXT("/Script/ProjectTPS"), TEXT("EDistanceCheckType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectTPS_EDistanceCheckType_Hash() { return 1799451135U; }
	UEnum* Z_Construct_UEnum_ProjectTPS_EDistanceCheckType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDistanceCheckType"), 0, Get_Z_Construct_UEnum_ProjectTPS_EDistanceCheckType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDistanceCheckType::Attack1", (int64)EDistanceCheckType::Attack1 },
				{ "EDistanceCheckType::Attack2", (int64)EDistanceCheckType::Attack2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack1.Comment", "/*Trace,*/" },
				{ "Attack1.Name", "EDistanceCheckType::Attack1" },
				{ "Attack1.ToolTip", "Trace," },
				{ "Attack2.Name", "EDistanceCheckType::Attack2" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Monster/BTCheckDistanceDecorator.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectTPS,
				nullptr,
				"EDistanceCheckType",
				"EDistanceCheckType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UBTCheckDistanceDecorator::StaticRegisterNativesUBTCheckDistanceDecorator()
	{
	}
	UClass* Z_Construct_UClass_UBTCheckDistanceDecorator_NoRegister()
	{
		return UBTCheckDistanceDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UBTCheckDistanceDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Monster/BTCheckDistanceDecorator.h" },
		{ "ModuleRelativePath", "Monster/BTCheckDistanceDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::NewProp_m_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::NewProp_m_Type_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTCheckDistanceDecorator" },
		{ "ModuleRelativePath", "Monster/BTCheckDistanceDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::NewProp_m_Type = { "m_Type", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTCheckDistanceDecorator, m_Type), Z_Construct_UEnum_ProjectTPS_EDistanceCheckType, METADATA_PARAMS(Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::NewProp_m_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::NewProp_m_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::NewProp_m_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::NewProp_m_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTCheckDistanceDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::ClassParams = {
		&UBTCheckDistanceDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTCheckDistanceDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTCheckDistanceDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTCheckDistanceDecorator, 1450102423);
	template<> PROJECTTPS_API UClass* StaticClass<UBTCheckDistanceDecorator>()
	{
		return UBTCheckDistanceDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTCheckDistanceDecorator(Z_Construct_UClass_UBTCheckDistanceDecorator, &UBTCheckDistanceDecorator::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UBTCheckDistanceDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTCheckDistanceDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
