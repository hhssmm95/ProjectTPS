// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/EffectNormal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectNormal() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_AEffectNormal_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_AEffectNormal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AEffectNormal::execOnEffectEnd)
	{
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_particle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEffectEnd(Z_Param_particle);
		P_NATIVE_END;
	}
	void AEffectNormal::StaticRegisterNativesAEffectNormal()
	{
		UClass* Class = AEffectNormal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEffectEnd", &AEffectNormal::execOnEffectEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEffectNormal_OnEffectEnd_Statics
	{
		struct EffectNormal_eventOnEffectEnd_Parms
		{
			UParticleSystemComponent* particle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_particle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEffectNormal_OnEffectEnd_Statics::NewProp_particle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEffectNormal_OnEffectEnd_Statics::NewProp_particle = { "particle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffectNormal_eventOnEffectEnd_Parms, particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEffectNormal_OnEffectEnd_Statics::NewProp_particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectNormal_OnEffectEnd_Statics::NewProp_particle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEffectNormal_OnEffectEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffectNormal_OnEffectEnd_Statics::NewProp_particle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEffectNormal_OnEffectEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EffectNormal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEffectNormal_OnEffectEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEffectNormal, nullptr, "OnEffectEnd", nullptr, nullptr, sizeof(EffectNormal_eventOnEffectEnd_Parms), Z_Construct_UFunction_AEffectNormal_OnEffectEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectNormal_OnEffectEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEffectNormal_OnEffectEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectNormal_OnEffectEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEffectNormal_OnEffectEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEffectNormal_OnEffectEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEffectNormal_NoRegister()
	{
		return AEffectNormal::StaticClass();
	}
	struct Z_Construct_UClass_AEffectNormal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Particle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_EffectEnd_MetaData[];
#endif
		static void NewProp_m_EffectEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_EffectEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEffectNormal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEffectNormal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEffectNormal_OnEffectEnd, "OnEffectEnd" }, // 2767218579
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectNormal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffectNormal.h" },
		{ "ModuleRelativePath", "EffectNormal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectNormal_Statics::NewProp_m_Particle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EffectNormal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EffectNormal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffectNormal_Statics::NewProp_m_Particle = { "m_Particle", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEffectNormal, m_Particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEffectNormal_Statics::NewProp_m_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEffectNormal_Statics::NewProp_m_Particle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectNormal_Statics::NewProp_m_EffectEnd_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EffectNormal" },
		{ "ModuleRelativePath", "EffectNormal.h" },
	};
#endif
	void Z_Construct_UClass_AEffectNormal_Statics::NewProp_m_EffectEnd_SetBit(void* Obj)
	{
		((AEffectNormal*)Obj)->m_EffectEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEffectNormal_Statics::NewProp_m_EffectEnd = { "m_EffectEnd", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEffectNormal), &Z_Construct_UClass_AEffectNormal_Statics::NewProp_m_EffectEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEffectNormal_Statics::NewProp_m_EffectEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEffectNormal_Statics::NewProp_m_EffectEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEffectNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectNormal_Statics::NewProp_m_Particle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectNormal_Statics::NewProp_m_EffectEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEffectNormal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEffectNormal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEffectNormal_Statics::ClassParams = {
		&AEffectNormal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEffectNormal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEffectNormal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEffectNormal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEffectNormal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEffectNormal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEffectNormal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEffectNormal, 232137276);
	template<> PROJECTTPS_API UClass* StaticClass<AEffectNormal>()
	{
		return AEffectNormal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEffectNormal(Z_Construct_UClass_AEffectNormal, &AEffectNormal::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("AEffectNormal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEffectNormal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
