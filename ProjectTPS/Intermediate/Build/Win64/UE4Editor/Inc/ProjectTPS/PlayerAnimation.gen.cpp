// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/Player/PlayerAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimation() {}
// Cross Module References
	PROJECTTPS_API UEnum* Z_Construct_UEnum_ProjectTPS_PlayerAnimType();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
	PROJECTTPS_API UClass* Z_Construct_UClass_UPlayerAnimation_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UPlayerAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	PROJECTTPS_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	static UEnum* PlayerAnimType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectTPS_PlayerAnimType, Z_Construct_UPackage__Script_ProjectTPS(), TEXT("PlayerAnimType"));
		}
		return Singleton;
	}
	template<> PROJECTTPS_API UEnum* StaticEnum<PlayerAnimType>()
	{
		return PlayerAnimType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PlayerAnimType(PlayerAnimType_StaticEnum, TEXT("/Script/ProjectTPS"), TEXT("PlayerAnimType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectTPS_PlayerAnimType_Hash() { return 729443425U; }
	UEnum* Z_Construct_UEnum_ProjectTPS_PlayerAnimType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PlayerAnimType"), 0, Get_Z_Construct_UEnum_ProjectTPS_PlayerAnimType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PlayerAnimType::Idle", (int64)PlayerAnimType::Idle },
				{ "PlayerAnimType::Run", (int64)PlayerAnimType::Run },
				{ "PlayerAnimType::Attack", (int64)PlayerAnimType::Attack },
				{ "PlayerAnimType::Jump", (int64)PlayerAnimType::Jump },
				{ "PlayerAnimType::Death", (int64)PlayerAnimType::Death },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "PlayerAnimType::Attack" },
				{ "BlueprintType", "true" },
				{ "Death.Name", "PlayerAnimType::Death" },
				{ "Idle.Name", "PlayerAnimType::Idle" },
				{ "Jump.Name", "PlayerAnimType::Jump" },
				{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
				{ "Run.Name", "PlayerAnimType::Run" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectTPS,
				nullptr,
				"PlayerAnimType",
				"PlayerAnimType",
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
	void UPlayerAnimation::StaticRegisterNativesUPlayerAnimation()
	{
	}
	UClass* Z_Construct_UClass_UPlayerAnimation_NoRegister()
	{
		return UPlayerAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsDead_MetaData[];
#endif
		static void NewProp_m_bIsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pPlayer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_ePlayerAnim_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ePlayerAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_ePlayerAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RifleFireMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_RifleFireMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/PlayerAnimation.h" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bIsDead_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "Comment", "/*\n\x09\x09UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n\x09\x09\x09""float m_Direction;\n\n\x09\x09UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n\x09\x09\x09""float m_MoveSpeed;\n\n\x09\x09UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n\x09\x09\x09""float m_AttackSpeed;\n\n\x09\x09UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n\x09\x09\x09""bool m_Falling;\n\n\x09\x09UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n\x09\x09\x09""bool m_Jump;\n\n\x09\x09UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n\x09\x09\x09""bool m_Ground;*/" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n        float m_Direction;\n\nUPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n        float m_MoveSpeed;\n\nUPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n        float m_AttackSpeed;\n\nUPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n        bool m_Falling;\n\nUPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n        bool m_Jump;\n\nUPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))\n        bool m_Ground;" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bIsDead_SetBit(void* Obj)
	{
		((UPlayerAnimation*)Obj)->m_bIsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bIsDead = { "m_bIsDead", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnimation), &Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bIsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_pPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_pPlayer = { "m_pPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_pPlayer), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_pPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_pPlayer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerAnim_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerAnim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerAnim = { "m_ePlayerAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_ePlayerAnim), Z_Construct_UEnum_ProjectTPS_PlayerAnimType, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireMontage_MetaData[] = {
		{ "AllowPriavteAccess", "true" },
		{ "Category", "PlayerAnimation" },
		{ "ModuleRelativePath", "Player/PlayerAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireMontage = { "m_RifleFireMontage", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimation, m_RifleFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_bIsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_pPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerAnim_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_ePlayerAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimation_Statics::NewProp_m_RifleFireMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimation_Statics::ClassParams = {
		&UPlayerAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAnimation, 66127990);
	template<> PROJECTTPS_API UClass* StaticClass<UPlayerAnimation>()
	{
		return UPlayerAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAnimation(Z_Construct_UClass_UPlayerAnimation, &UPlayerAnimation::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UPlayerAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
