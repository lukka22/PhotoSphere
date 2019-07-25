// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBaseEditor/Public/FireBaseEditor.h"
#include "FireBaseEditor/Private/GoogleSignSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleSignSetting() {}
// Cross Module References
	FIREBASEEDITOR_API UClass* Z_Construct_UClass_UGoogleSignSetting_NoRegister();
	FIREBASEEDITOR_API UClass* Z_Construct_UClass_UGoogleSignSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FireBaseEditor();
// End Cross Module References
	void UGoogleSignSetting::StaticRegisterNativesUGoogleSignSetting()
	{
	}
	UClass* Z_Construct_UClass_UGoogleSignSetting_NoRegister()
	{
		return UGoogleSignSetting::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleSignSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_webClientID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_webClientID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAndroidEnabled_MetaData[];
#endif
		static void NewProp_bAndroidEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAndroidEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleSignSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBaseEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleSignSetting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GoogleSignSetting.h" },
		{ "ModuleRelativePath", "Private/GoogleSignSetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleSignSetting_Statics::NewProp_webClientID_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "WebClient ID" },
		{ "ModuleRelativePath", "Private/GoogleSignSetting.h" },
		{ "ToolTip", "the android admob appid" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGoogleSignSetting_Statics::NewProp_webClientID = { UE4CodeGen_Private::EPropertyClass::Str, "webClientID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UGoogleSignSetting, webClientID), METADATA_PARAMS(Z_Construct_UClass_UGoogleSignSetting_Statics::NewProp_webClientID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGoogleSignSetting_Statics::NewProp_webClientID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleSignSetting_Statics::NewProp_bAndroidEnabled_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "If Android Google Signin Enable" },
		{ "ModuleRelativePath", "Private/GoogleSignSetting.h" },
		{ "ToolTip", "if the android admob enable" },
	};
#endif
	void Z_Construct_UClass_UGoogleSignSetting_Statics::NewProp_bAndroidEnabled_SetBit(void* Obj)
	{
		((UGoogleSignSetting*)Obj)->bAndroidEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoogleSignSetting_Statics::NewProp_bAndroidEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bAndroidEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGoogleSignSetting), &Z_Construct_UClass_UGoogleSignSetting_Statics::NewProp_bAndroidEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGoogleSignSetting_Statics::NewProp_bAndroidEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGoogleSignSetting_Statics::NewProp_bAndroidEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoogleSignSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleSignSetting_Statics::NewProp_webClientID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleSignSetting_Statics::NewProp_bAndroidEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleSignSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleSignSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGoogleSignSetting_Statics::ClassParams = {
		&UGoogleSignSetting::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000ACu,
		nullptr, 0,
		Z_Construct_UClass_UGoogleSignSetting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGoogleSignSetting_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleSignSetting_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGoogleSignSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleSignSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGoogleSignSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGoogleSignSetting, 2592283615);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGoogleSignSetting(Z_Construct_UClass_UGoogleSignSetting, &UGoogleSignSetting::StaticClass, TEXT("/Script/FireBaseEditor"), TEXT("UGoogleSignSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleSignSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
