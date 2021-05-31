// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTPS/UI/HitMarkerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitMarkerWidget() {}
// Cross Module References
	PROJECTTPS_API UClass* Z_Construct_UClass_UHitMarkerWidget_NoRegister();
	PROJECTTPS_API UClass* Z_Construct_UClass_UHitMarkerWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ProjectTPS();
// End Cross Module References
	static FName NAME_UHitMarkerWidget_OnBodyShot = FName(TEXT("OnBodyShot"));
	void UHitMarkerWidget::OnBodyShot()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHitMarkerWidget_OnBodyShot),NULL);
	}
	static FName NAME_UHitMarkerWidget_OnHeadShot = FName(TEXT("OnHeadShot"));
	void UHitMarkerWidget::OnHeadShot()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHitMarkerWidget_OnHeadShot),NULL);
	}
	void UHitMarkerWidget::StaticRegisterNativesUHitMarkerWidget()
	{
	}
	struct Z_Construct_UFunction_UHitMarkerWidget_OnBodyShot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitMarkerWidget_OnBodyShot_Statics::Function_MetaDataParams[] = {
		{ "Category", "HitMarker" },
		{ "ModuleRelativePath", "UI/HitMarkerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitMarkerWidget_OnBodyShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitMarkerWidget, nullptr, "OnBodyShot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitMarkerWidget_OnBodyShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitMarkerWidget_OnBodyShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitMarkerWidget_OnBodyShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitMarkerWidget_OnBodyShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHitMarkerWidget_OnHeadShot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitMarkerWidget_OnHeadShot_Statics::Function_MetaDataParams[] = {
		{ "Category", "HitMarker" },
		{ "ModuleRelativePath", "UI/HitMarkerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitMarkerWidget_OnHeadShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitMarkerWidget, nullptr, "OnHeadShot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitMarkerWidget_OnHeadShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitMarkerWidget_OnHeadShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitMarkerWidget_OnHeadShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitMarkerWidget_OnHeadShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHitMarkerWidget_NoRegister()
	{
		return UHitMarkerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHitMarkerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHitMarkerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHitMarkerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitMarkerWidget_OnBodyShot, "OnBodyShot" }, // 39349330
		{ &Z_Construct_UFunction_UHitMarkerWidget_OnHeadShot, "OnHeadShot" }, // 1574320005
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitMarkerWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/HitMarkerWidget.h" },
		{ "ModuleRelativePath", "UI/HitMarkerWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHitMarkerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitMarkerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHitMarkerWidget_Statics::ClassParams = {
		&UHitMarkerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHitMarkerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHitMarkerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHitMarkerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHitMarkerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHitMarkerWidget, 58976036);
	template<> PROJECTTPS_API UClass* StaticClass<UHitMarkerWidget>()
	{
		return UHitMarkerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHitMarkerWidget(Z_Construct_UClass_UHitMarkerWidget, &UHitMarkerWidget::StaticClass, TEXT("/Script/ProjectTPS"), TEXT("UHitMarkerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHitMarkerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
