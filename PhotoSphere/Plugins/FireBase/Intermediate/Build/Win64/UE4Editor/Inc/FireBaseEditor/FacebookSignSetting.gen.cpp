// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBaseEditor/Public/FireBaseEditor.h"
#include "FireBaseEditor/Private/FacebookSignSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacebookSignSetting() {}
// Cross Module References
	FIREBASEEDITOR_API UClass* Z_Construct_UClass_UFacebookSignSetting_NoRegister();
	FIREBASEEDITOR_API UClass* Z_Construct_UClass_UFacebookSignSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FireBaseEditor();
// End Cross Module References
	void UFacebookSignSetting::StaticRegisterNativesUFacebookSignSetting()
	{
	}
	UClass* Z_Construct_UClass_UFacebookSignSetting_NoRegister()
	{
		return UFacebookSignSetting::StaticClass();
	}
	struct Z_Construct_UClass_UFacebookSignSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_facebookAppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_facebookAppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAndroidEnabled_MetaData[];
#endif
		static void NewProp_bAndroidEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAndroidEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFacebookSignSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBaseEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacebookSignSetting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FacebookSignSetting.h" },
		{ "ModuleRelativePath", "Private/FacebookSignSetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacebookSignSetting_Statics::NewProp_facebookAppID_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Appid" },
		{ "ModuleRelativePath", "Private/FacebookSignSetting.h" },
		{ "ToolTip", "the android admob appid" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFacebookSignSetting_Statics::NewProp_facebookAppID = { UE4CodeGen_Private::EPropertyClass::Str, "facebookAppID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UFacebookSignSetting, facebookAppID), METADATA_PARAMS(Z_Construct_UClass_UFacebookSignSetting_Statics::NewProp_facebookAppID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFacebookSignSetting_Statics::NewProp_facebookAppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacebookSignSetting_Statics::NewProp_bAndroidEnabled_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "If Android Facebook Signin Enable" },
		{ "ModuleRelativePath", "Private/FacebookSignSetting.h" },
	};
#endif
	void Z_Construct_UClass_UFacebookSignSetting_Statics::NewProp_bAndroidEnabled_SetBit(void* Obj)
	{
		((UFacebookSignSetting*)Obj)->bAndroidEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFacebookSignSetting_Statics::NewProp_bAndroidEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bAndroidEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFacebookSignSetting), &Z_Construct_UClass_UFacebookSignSetting_Statics::NewProp_bAndroidEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFacebookSignSetting_Statics::NewProp_bAndroidEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFacebookSignSetting_Statics::NewProp_bAndroidEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFacebookSignSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacebookSignSetting_Statics::NewProp_facebookAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacebookSignSetting_Statics::NewProp_bAndroidEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFacebookSignSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFacebookSignSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFacebookSignSetting_Statics::ClassParams = {
		&UFacebookSignSetting::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000ACu,
		nullptr, 0,
		Z_Construct_UClass_UFacebookSignSetting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFacebookSignSetting_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFacebookSignSetting_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFacebookSignSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFacebookSignSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFacebookSignSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFacebookSignSetting, 2056893532);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFacebookSignSetting(Z_Construct_UClass_UFacebookSignSetting, &UFacebookSignSetting::StaticClass, TEXT("/Script/FireBaseEditor"), TEXT("UFacebookSignSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFacebookSignSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
