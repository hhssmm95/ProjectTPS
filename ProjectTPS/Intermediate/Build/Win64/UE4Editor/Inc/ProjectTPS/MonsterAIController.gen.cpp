// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Monster/MonsterAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterAIController() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_AMonsterAIController_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_AMonsterAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMonsterAIController::execSetTargetAsPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetAsPlayer();
		P_NATIVE_END;
	}
	void AMonsterAIController::StaticRegisterNativesAMonsterAIController()
	{
		UClass* Class = AMonsterAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTargetAsPlayer", &AMonsterAIController::execSetTargetAsPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMonsterAIController_SetTargetAsPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonsterAIController_SetTargetAsPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Monster/MonsterAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonsterAIController_SetTargetAsPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonsterAIController, nullptr, "SetTargetAsPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonsterAIController_SetTargetAsPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonsterAIController_SetTargetAsPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonsterAIController_SetTargetAsPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonsterAIController_SetTargetAsPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMonsterAIController_NoRegister()
	{
		return AMonsterAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AITree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AITree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AIBlackBoard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AIBlackBoard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsBoss_MetaData[];
#endif
		static void NewProp_m_bIsBoss_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsBoss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bDeath_MetaData[];
#endif
		static void NewProp_m_bDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bDeath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMonsterAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMonsterAIController_SetTargetAsPlayer, "SetTargetAsPlayer" }, // 253373956
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Monster/MonsterAIController.h" },
		{ "ModuleRelativePath", "Monster/MonsterAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_AITree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterAIController" },
		{ "ModuleRelativePath", "Monster/MonsterAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_AITree = { "m_AITree", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterAIController, m_AITree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_AITree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_AITree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_AIBlackBoard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterAIController" },
		{ "ModuleRelativePath", "Monster/MonsterAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_AIBlackBoard = { "m_AIBlackBoard", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterAIController, m_AIBlackBoard), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_AIBlackBoard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_AIBlackBoard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_bIsBoss_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterAIController" },
		{ "ModuleRelativePath", "Monster/MonsterAIController.h" },
	};
#endif
	void Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_bIsBoss_SetBit(void* Obj)
	{
		((AMonsterAIController*)Obj)->m_bIsBoss = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_bIsBoss = { "m_bIsBoss", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonsterAIController), &Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_bIsBoss_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_bIsBoss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_bIsBoss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_bDeath_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterAIController" },
		{ "ModuleRelativePath", "Monster/MonsterAIController.h" },
	};
#endif
	void Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_bDeath_SetBit(void* Obj)
	{
		((AMonsterAIController*)Obj)->m_bDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_bDeath = { "m_bDeath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonsterAIController), &Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_bDeath_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_bDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_bDeath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_AITree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_AIBlackBoard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_bIsBoss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_m_bDeath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonsterAIController_Statics::ClassParams = {
		&AMonsterAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMonsterAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterAIController, 1054907649);
	template<> PROJECTTPS_API UClass* StaticClass<AMonsterAIController>()
	{
		return AMonsterAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterAIController(Z_Construct_UClass_AMonsterAIController, &AMonsterAIController::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("AMonsterAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
