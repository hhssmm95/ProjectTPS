// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/HitEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitEffect() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_AHitEffect_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_AHitEffect();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHitEffect::execOnEffectEnd)
	{
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_particle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEffectEnd(Z_Param_particle);
		P_NATIVE_END;
	}
	void AHitEffect::StaticRegisterNativesAHitEffect()
	{
		UClass* Class = AHitEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEffectEnd", &AHitEffect::execOnEffectEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHitEffect_OnEffectEnd_Statics
	{
		struct HitEffect_eventOnEffectEnd_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHitEffect_OnEffectEnd_Statics::NewProp_particle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitEffect_OnEffectEnd_Statics::NewProp_particle = { "particle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitEffect_eventOnEffectEnd_Parms, particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHitEffect_OnEffectEnd_Statics::NewProp_particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitEffect_OnEffectEnd_Statics::NewProp_particle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitEffect_OnEffectEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitEffect_OnEffectEnd_Statics::NewProp_particle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHitEffect_OnEffectEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HitEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitEffect_OnEffectEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitEffect, nullptr, "OnEffectEnd", nullptr, nullptr, sizeof(HitEffect_eventOnEffectEnd_Parms), Z_Construct_UFunction_AHitEffect_OnEffectEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitEffect_OnEffectEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHitEffect_OnEffectEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitEffect_OnEffectEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHitEffect_OnEffectEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHitEffect_OnEffectEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHitEffect_NoRegister()
	{
		return AHitEffect::StaticClass();
	}
	struct Z_Construct_UClass_AHitEffect_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AdditionalSound1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AdditionalSound1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AdditionalSound2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AdditionalSound2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AdditionalSound3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AdditionalSound3;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHitEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHitEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHitEffect_OnEffectEnd, "OnEffectEnd" }, // 1753356986
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HitEffect.h" },
		{ "ModuleRelativePath", "HitEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitEffect_Statics::NewProp_m_Particle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HitEffect" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HitEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitEffect_Statics::NewProp_m_Particle = { "m_Particle", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitEffect, m_Particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitEffect_Statics::NewProp_m_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitEffect_Statics::NewProp_m_Particle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitEffect_Statics::NewProp_m_Sound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HitEffect" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n//UNiagaraComponent* m_NiagaraParticle;\n" },
		{ "ModuleRelativePath", "HitEffect.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\nUNiagaraComponent* m_NiagaraParticle;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitEffect_Statics::NewProp_m_Sound = { "m_Sound", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitEffect, m_Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitEffect_Statics::NewProp_m_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitEffect_Statics::NewProp_m_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HitEffect" },
		{ "ModuleRelativePath", "HitEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound1 = { "m_AdditionalSound1", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitEffect, m_AdditionalSound1), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HitEffect" },
		{ "ModuleRelativePath", "HitEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound2 = { "m_AdditionalSound2", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitEffect, m_AdditionalSound2), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound3_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HitEffect" },
		{ "ModuleRelativePath", "HitEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound3 = { "m_AdditionalSound3", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitEffect, m_AdditionalSound3), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound3_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitEffect_Statics::NewProp_m_Particle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitEffect_Statics::NewProp_m_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitEffect_Statics::NewProp_m_AdditionalSound3,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHitEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHitEffect_Statics::ClassParams = {
		&AHitEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHitEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHitEffect_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHitEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHitEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHitEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHitEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHitEffect, 2792286220);
	template<> PROJECTTPS_API UClass* StaticClass<AHitEffect>()
	{
		return AHitEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHitEffect(Z_Construct_UClass_AHitEffect, &AHitEffect::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("AHitEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHitEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
