// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/BTAttackTargetTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTAttackTargetTask() {}
// Cross Module References
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_EAttackType();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTAttackTargetTask_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UBTAttackTargetTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
// End Cross Module References
	static UEnum* EAttackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectTPS_EAttackType, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("EAttackType"));
		}
		return Singleton;
	}
	template<> PROJECTTPS_API UEnum* StaticEnum<EAttackType>()
	{
		return EAttackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttackType(EAttackType_StaticEnum, TEXT("/Script/ProjectTPS"), TEXT("EAttackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectTPS_EAttackType_Hash() { return 2238101589U; }
	UEnum* Z_Construct_UEnum_ProjectTPS_EAttackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttackType"), 0, Get_Z_Construct_UEnum_ProjectTPS_EAttackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttackType::Attack1_Near", (int64)EAttackType::Attack1_Near },
				{ "EAttackType::Attack2_Far", (int64)EAttackType::Attack2_Far },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack1_Near.Name", "EAttackType::Attack1_Near" },
				{ "Attack2_Far.Name", "EAttackType::Attack2_Far" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Monster/BTAttackTargetTask.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectTPS,
				nullptr,
				"EAttackType",
				"EAttackType",
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
	void UBTAttackTargetTask::StaticRegisterNativesUBTAttackTargetTask()
	{
	}
	UClass* Z_Construct_UClass_UBTAttackTargetTask_NoRegister()
	{
		return UBTAttackTargetTask::StaticClass();
	}
	struct Z_Construct_UClass_UBTAttackTargetTask_Statics
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
	UObject* (*const Z_Construct_UClass_UBTAttackTargetTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTAttackTargetTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Monster/BTAttackTargetTask.h" },
		{ "ModuleRelativePath", "Monster/BTAttackTargetTask.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTAttackTargetTask_Statics::NewProp_m_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTAttackTargetTask_Statics::NewProp_m_Type_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTAttackTargetTask" },
		{ "ModuleRelativePath", "Monster/BTAttackTargetTask.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTAttackTargetTask_Statics::NewProp_m_Type = { "m_Type", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTAttackTargetTask, m_Type), Z_Construct_UEnum_ProjectTPS_EAttackType, METADATA_PARAMS(Z_Construct_UClass_UBTAttackTargetTask_Statics::NewProp_m_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTAttackTargetTask_Statics::NewProp_m_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTAttackTargetTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTAttackTargetTask_Statics::NewProp_m_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTAttackTargetTask_Statics::NewProp_m_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTAttackTargetTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTAttackTargetTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTAttackTargetTask_Statics::ClassParams = {
		&UBTAttackTargetTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTAttackTargetTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTAttackTargetTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTAttackTargetTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTAttackTargetTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTAttackTargetTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTAttackTargetTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTAttackTargetTask, 2211996672);
	template<> PROJECTTPS_API UClass* StaticClass<UBTAttackTargetTask>()
	{
		return UBTAttackTargetTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTAttackTargetTask(Z_Construct_UClass_UBTAttackTargetTask, &UBTAttackTargetTask::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UBTAttackTargetTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTAttackTargetTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
