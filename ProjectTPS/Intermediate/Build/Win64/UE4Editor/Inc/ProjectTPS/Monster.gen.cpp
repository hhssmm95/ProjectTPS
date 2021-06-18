// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/Monster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonster() {}
// Cross Module References
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_MonsterAI();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UClass* Z_Construct_UClass_AMonster_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_AMonster();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_EMonsterAnimType();
	PROJECTTPS_API UClass* Z_Construct_UClass_UMonsterAnim_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECTTPS_API UClass* Z_Construct_UClass_AHitEffect_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_AEffectNormal_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_AEnemyBullet_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_ADropItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* MonsterAI_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectTPS_MonsterAI, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("MonsterAI"));
		}
		return Singleton;
	}
	template<> PROJECTTPS_API UEnum* StaticEnum<MonsterAI>()
	{
		return MonsterAI_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MonsterAI(MonsterAI_StaticEnum, TEXT("/Script/ProjectTPS"), TEXT("MonsterAI"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectTPS_MonsterAI_Hash() { return 2121906244U; }
	UEnum* Z_Construct_UEnum_ProjectTPS_MonsterAI()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MonsterAI"), 0, Get_Z_Construct_UEnum_ProjectTPS_MonsterAI_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MonsterAI::None", (int64)MonsterAI::None },
				{ "MonsterAI::Idle", (int64)MonsterAI::Idle },
				{ "MonsterAI::Patrol", (int64)MonsterAI::Patrol },
				{ "MonsterAI::Trace", (int64)MonsterAI::Trace },
				{ "MonsterAI::Attack", (int64)MonsterAI::Attack },
				{ "MonsterAI::Death", (int64)MonsterAI::Death },
				{ "MonsterAI::Suspicious", (int64)MonsterAI::Suspicious },
				{ "MonsterAI::Skill1", (int64)MonsterAI::Skill1 },
				{ "MonsterAI::Skill2", (int64)MonsterAI::Skill2 },
				{ "MonsterAI::Skill3", (int64)MonsterAI::Skill3 },
				{ "MonsterAI::Skill4", (int64)MonsterAI::Skill4 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "MonsterAI::Attack" },
				{ "BlueprintType", "true" },
				{ "Death.Name", "MonsterAI::Death" },
				{ "Idle.Name", "MonsterAI::Idle" },
				{ "ModuleRelativePath", "Monster/Monster.h" },
				{ "None.Name", "MonsterAI::None" },
				{ "Patrol.Name", "MonsterAI::Patrol" },
				{ "Skill1.Name", "MonsterAI::Skill1" },
				{ "Skill2.Name", "MonsterAI::Skill2" },
				{ "Skill3.Name", "MonsterAI::Skill3" },
				{ "Skill4.Name", "MonsterAI::Skill4" },
				{ "Suspicious.Name", "MonsterAI::Suspicious" },
				{ "Trace.Name", "MonsterAI::Trace" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectTPS,
				nullptr,
				"MonsterAI",
				"MonsterAI",
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
	DEFINE_FUNCTION(AMonster::execSetTargetLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Loc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetLocation(Z_Param_Loc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMonster::execSetMonsterAIType)
	{
		P_GET_ENUM(MonsterAI,Z_Param_AIType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMonsterAIType(MonsterAI(Z_Param_AIType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMonster::execGetMonsterAIType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(MonsterAI*)Z_Param__Result=P_THIS->GetMonsterAIType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMonster::execGetMonsterAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMonsterAnim**)Z_Param__Result=P_THIS->GetMonsterAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMonster::execChangeAnimation)
	{
		P_GET_ENUM(EMonsterAnimType,Z_Param_AnimType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeAnimation(EMonsterAnimType(Z_Param_AnimType));
		P_NATIVE_END;
	}
	void AMonster::StaticRegisterNativesAMonster()
	{
		UClass* Class = AMonster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeAnimation", &AMonster::execChangeAnimation },
			{ "GetMonsterAIType", &AMonster::execGetMonsterAIType },
			{ "GetMonsterAnim", &AMonster::execGetMonsterAnim },
			{ "SetMonsterAIType", &AMonster::execSetMonsterAIType },
			{ "SetTargetLocation", &AMonster::execSetTargetLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMonster_ChangeAnimation_Statics
	{
		struct Monster_eventChangeAnimation_Parms
		{
			EMonsterAnimType AnimType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnimType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMonster_ChangeAnimation_Statics::NewProp_AnimType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMonster_ChangeAnimation_Statics::NewProp_AnimType = { "AnimType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Monster_eventChangeAnimation_Parms, AnimType), Z_Construct_UEnum_ProjectTPS_EMonsterAnimType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMonster_ChangeAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_ChangeAnimation_Statics::NewProp_AnimType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_ChangeAnimation_Statics::NewProp_AnimType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonster_ChangeAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonster_ChangeAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonster, nullptr, "ChangeAnimation", nullptr, nullptr, sizeof(Monster_eventChangeAnimation_Parms), Z_Construct_UFunction_AMonster_ChangeAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_ChangeAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonster_ChangeAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_ChangeAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonster_ChangeAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonster_ChangeAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMonster_GetMonsterAIType_Statics
	{
		struct Monster_eventGetMonsterAIType_Parms
		{
			MonsterAI ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMonster_GetMonsterAIType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMonster_GetMonsterAIType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Monster_eventGetMonsterAIType_Parms, ReturnValue), Z_Construct_UEnum_ProjectTPS_MonsterAI, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMonster_GetMonsterAIType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_GetMonsterAIType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_GetMonsterAIType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonster_GetMonsterAIType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonster_GetMonsterAIType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonster, nullptr, "GetMonsterAIType", nullptr, nullptr, sizeof(Monster_eventGetMonsterAIType_Parms), Z_Construct_UFunction_AMonster_GetMonsterAIType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_GetMonsterAIType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonster_GetMonsterAIType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_GetMonsterAIType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonster_GetMonsterAIType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonster_GetMonsterAIType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMonster_GetMonsterAnim_Statics
	{
		struct Monster_eventGetMonsterAnim_Parms
		{
			UMonsterAnim* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMonster_GetMonsterAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Monster_eventGetMonsterAnim_Parms, ReturnValue), Z_Construct_UClass_UMonsterAnim_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMonster_GetMonsterAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_GetMonsterAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonster_GetMonsterAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonster_GetMonsterAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonster, nullptr, "GetMonsterAnim", nullptr, nullptr, sizeof(Monster_eventGetMonsterAnim_Parms), Z_Construct_UFunction_AMonster_GetMonsterAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_GetMonsterAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonster_GetMonsterAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_GetMonsterAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonster_GetMonsterAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonster_GetMonsterAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMonster_SetMonsterAIType_Statics
	{
		struct Monster_eventSetMonsterAIType_Parms
		{
			MonsterAI AIType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AIType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AIType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMonster_SetMonsterAIType_Statics::NewProp_AIType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMonster_SetMonsterAIType_Statics::NewProp_AIType = { "AIType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Monster_eventSetMonsterAIType_Parms, AIType), Z_Construct_UEnum_ProjectTPS_MonsterAI, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMonster_SetMonsterAIType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_SetMonsterAIType_Statics::NewProp_AIType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_SetMonsterAIType_Statics::NewProp_AIType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonster_SetMonsterAIType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonster_SetMonsterAIType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonster, nullptr, "SetMonsterAIType", nullptr, nullptr, sizeof(Monster_eventSetMonsterAIType_Parms), Z_Construct_UFunction_AMonster_SetMonsterAIType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_SetMonsterAIType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonster_SetMonsterAIType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_SetMonsterAIType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonster_SetMonsterAIType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonster_SetMonsterAIType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMonster_SetTargetLocation_Statics
	{
		struct Monster_eventSetTargetLocation_Parms
		{
			FVector Loc;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Loc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMonster_SetTargetLocation_Statics::NewProp_Loc = { "Loc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Monster_eventSetTargetLocation_Parms, Loc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMonster_SetTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_SetTargetLocation_Statics::NewProp_Loc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonster_SetTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonster_SetTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonster, nullptr, "SetTargetLocation", nullptr, nullptr, sizeof(Monster_eventSetTargetLocation_Parms), Z_Construct_UFunction_AMonster_SetTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_SetTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonster_SetTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_SetTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonster_SetTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonster_SetTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMonster_NoRegister()
	{
		return AMonster::StaticClass();
	}
	struct Z_Construct_UClass_AMonster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HPMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_HPMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_Attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AttackRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_AttackRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_WalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_WalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_RunSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MonsterAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_MonsterAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CloseAttackDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_CloseAttackDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_LongAttackDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_LongAttackDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SuspiciousVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_SuspiciousVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_EnemySpotVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_EnemySpotVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_LongAttackSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_LongAttackSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HeadShotSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HeadShotSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HitParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HitParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HurtSound1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HurtSound1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HurtSound2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HurtSound2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HeadshotEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_HeadshotEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_LongAttackMuzzle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_LongAttackMuzzle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_LongAttackBullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_LongAttackBullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DropItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_DropItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_PatrolPoint_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PatrolPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_PatrolPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_WaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_WaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bCallBackupEnable_MetaData[];
#endif
		static void NewProp_m_bCallBackupEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bCallBackupEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bDeath_MetaData[];
#endif
		static void NewProp_m_bDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bDeath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMonster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMonster_ChangeAnimation, "ChangeAnimation" }, // 1352577499
		{ &Z_Construct_UFunction_AMonster_GetMonsterAIType, "GetMonsterAIType" }, // 1634751223
		{ &Z_Construct_UFunction_AMonster_GetMonsterAnim, "GetMonsterAnim" }, // 3822644090
		{ &Z_Construct_UFunction_AMonster_SetMonsterAIType, "SetMonsterAIType" }, // 2051374347
		{ &Z_Construct_UFunction_AMonster_SetTargetLocation, "SetTargetLocation" }, // 2138786329
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Monster/Monster.h" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_HP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_HP = { "m_HP", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_HP), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_HPMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_HPMax = { "m_HPMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_HPMax), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_HPMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_HPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_Attack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_Attack = { "m_Attack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_Attack), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_Armor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_Armor = { "m_Armor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_Armor), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_MovementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_MovementSpeed = { "m_MovementSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_AttackRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_AttackRate = { "m_AttackRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_AttackRate), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_AttackRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_AttackRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_WalkSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_WalkSpeed = { "m_WalkSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_RunSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_RunSpeed = { "m_RunSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_RunSpeed), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_RunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_RunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_MonsterAnim_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_MonsterAnim = { "m_MonsterAnim", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_MonsterAnim), Z_Construct_UClass_UMonsterAnim_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_MonsterAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_MonsterAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_CloseAttackDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_CloseAttackDistance = { "m_CloseAttackDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_CloseAttackDistance), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_CloseAttackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_CloseAttackDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackDistance = { "m_LongAttackDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_LongAttackDistance), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_SuspiciousVoice_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_SuspiciousVoice = { "m_SuspiciousVoice", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_SuspiciousVoice), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_SuspiciousVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_SuspiciousVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_EnemySpotVoice_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_EnemySpotVoice = { "m_EnemySpotVoice", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_EnemySpotVoice), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_EnemySpotVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_EnemySpotVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackSound = { "m_LongAttackSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_LongAttackSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_HitSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_HitSound = { "m_HitSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_HitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_HitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_HitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_HeadShotSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_HeadShotSound = { "m_HeadShotSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_HeadShotSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_HeadShotSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_HeadShotSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_HitParticle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_HitParticle = { "m_HitParticle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_HitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_HitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_HitParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_HurtSound1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n//\x09UNiagaraSystem* m_HeadShotParticle;\n" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n       UNiagaraSystem* m_HeadShotParticle;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_HurtSound1 = { "m_HurtSound1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_HurtSound1), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_HurtSound1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_HurtSound1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_HurtSound2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_HurtSound2 = { "m_HurtSound2", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_HurtSound2), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_HurtSound2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_HurtSound2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_HeadshotEffect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_HeadshotEffect = { "m_HeadshotEffect", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_HeadshotEffect), Z_Construct_UClass_AHitEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_HeadshotEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_HeadshotEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackMuzzle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackMuzzle = { "m_LongAttackMuzzle", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_LongAttackMuzzle), Z_Construct_UClass_AEffectNormal_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackMuzzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackMuzzle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackBullet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackBullet = { "m_LongAttackBullet", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_LongAttackBullet), Z_Construct_UClass_AEnemyBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackBullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackBullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_DropItem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_DropItem = { "m_DropItem", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_DropItem), Z_Construct_UClass_ADropItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_DropItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_DropItem_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_PatrolPoint_Inner = { "m_PatrolPoint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_PatrolPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_PatrolPoint = { "m_PatrolPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_PatrolPoint), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_PatrolPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_PatrolPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_WaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_WaitTime = { "m_WaitTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, m_WaitTime), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_WaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_bCallBackupEnable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	void Z_Construct_UClass_AMonster_Statics::NewProp_m_bCallBackupEnable_SetBit(void* Obj)
	{
		((AMonster*)Obj)->m_bCallBackupEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_bCallBackupEnable = { "m_bCallBackupEnable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonster), &Z_Construct_UClass_AMonster_Statics::NewProp_m_bCallBackupEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_bCallBackupEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_bCallBackupEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_m_bDeath_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Monster/Monster.h" },
	};
#endif
	void Z_Construct_UClass_AMonster_Statics::NewProp_m_bDeath_SetBit(void* Obj)
	{
		((AMonster*)Obj)->m_bDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_m_bDeath = { "m_bDeath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonster), &Z_Construct_UClass_AMonster_Statics::NewProp_m_bDeath_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_m_bDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_m_bDeath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_HPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_AttackRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_WalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_RunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_MonsterAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_CloseAttackDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_SuspiciousVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_EnemySpotVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_HitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_HeadShotSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_HitParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_HurtSound1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_HurtSound2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_HeadshotEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackMuzzle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_LongAttackBullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_DropItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_PatrolPoint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_PatrolPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_WaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_bCallBackupEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_m_bDeath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonster_Statics::ClassParams = {
		&AMonster::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMonster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonster, 3555356834);
	template<> PROJECTTPS_API UClass* StaticClass<AMonster>()
	{
		return AMonster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonster(Z_Construct_UClass_AMonster, &AMonster::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("AMonster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
