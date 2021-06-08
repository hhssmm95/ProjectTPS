// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/ExplosiveBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosiveBullet() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_AExplosiveBullet_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_AExplosiveBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AExplosiveBullet::execOnBulletHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBulletHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExplosiveBullet::execProjectileStop)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectileStop(Z_Param_Out_result);
		P_NATIVE_END;
	}
	void AExplosiveBullet::StaticRegisterNativesAExplosiveBullet()
	{
		UClass* Class = AExplosiveBullet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBulletHit", &AExplosiveBullet::execOnBulletHit },
			{ "ProjectileStop", &AExplosiveBullet::execProjectileStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics
	{
		struct ExplosiveBullet_eventOnBulletHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExplosiveBullet_eventOnBulletHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExplosiveBullet_eventOnBulletHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExplosiveBullet_eventOnBulletHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExplosiveBullet_eventOnBulletHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExplosiveBullet_eventOnBulletHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosiveBullet, nullptr, "OnBulletHit", nullptr, nullptr, sizeof(ExplosiveBullet_eventOnBulletHit_Parms), Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExplosiveBullet_OnBulletHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExplosiveBullet_OnBulletHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExplosiveBullet_ProjectileStop_Statics
	{
		struct ExplosiveBullet_eventProjectileStop_Parms
		{
			FHitResult result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosiveBullet_ProjectileStop_Statics::NewProp_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AExplosiveBullet_ProjectileStop_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExplosiveBullet_eventProjectileStop_Parms, result), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AExplosiveBullet_ProjectileStop_Statics::NewProp_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_ProjectileStop_Statics::NewProp_result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExplosiveBullet_ProjectileStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_ProjectileStop_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosiveBullet_ProjectileStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosiveBullet_ProjectileStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosiveBullet, nullptr, "ProjectileStop", nullptr, nullptr, sizeof(ExplosiveBullet_eventProjectileStop_Parms), Z_Construct_UFunction_AExplosiveBullet_ProjectileStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_ProjectileStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExplosiveBullet_ProjectileStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_ProjectileStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExplosiveBullet_ProjectileStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExplosiveBullet_ProjectileStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExplosiveBullet_NoRegister()
	{
		return AExplosiveBullet::StaticClass();
	}
	struct Z_Construct_UClass_AExplosiveBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BulletParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BulletParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BulletTrail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BulletTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Movement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HitParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HitParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HitSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExplosiveBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExplosiveBullet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExplosiveBullet_OnBulletHit, "OnBulletHit" }, // 1823514420
		{ &Z_Construct_UFunction_AExplosiveBullet_ProjectileStop, "ProjectileStop" }, // 2379104270
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExplosiveBullet.h" },
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Body_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ExplosiveBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Body = { "m_Body", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosiveBullet, m_Body), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_BulletParticle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ExplosiveBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_BulletParticle = { "m_BulletParticle", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosiveBullet, m_BulletParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_BulletParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_BulletParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_BulletTrail_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ExplosiveBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_BulletTrail = { "m_BulletTrail", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosiveBullet, m_BulletTrail), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_BulletTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_BulletTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Movement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ExplosiveBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Movement = { "m_Movement", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosiveBullet, m_Movement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Movement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ExplosiveBullet" },
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Damage = { "m_Damage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosiveBullet, m_Damage), METADATA_PARAMS(Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_HitParticle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ExplosiveBullet" },
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_HitParticle = { "m_HitParticle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosiveBullet, m_HitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_HitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_HitParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_HitSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ExplosiveBullet" },
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_HitSound = { "m_HitSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosiveBullet, m_HitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_HitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_HitSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosiveBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_BulletParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_BulletTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Movement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_HitParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveBullet_Statics::NewProp_m_HitSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExplosiveBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosiveBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExplosiveBullet_Statics::ClassParams = {
		&AExplosiveBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExplosiveBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExplosiveBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExplosiveBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExplosiveBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExplosiveBullet, 314690373);
	template<> PROJECTTPS_API UClass* StaticClass<AExplosiveBullet>()
	{
		return AExplosiveBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExplosiveBullet(Z_Construct_UClass_AExplosiveBullet, &AExplosiveBullet::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("AExplosiveBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosiveBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
