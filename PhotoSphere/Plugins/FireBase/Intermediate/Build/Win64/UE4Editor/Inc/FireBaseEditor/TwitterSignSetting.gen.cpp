// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBaseEditor/Public/FireBaseEditor.h"
#include "FireBaseEditor/Private/TwitterSignSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwitterSignSetting() {}
// Cross Module References
	FIREBASEEDITOR_API UClass* Z_Construct_UClass_UTwitterSignSetting_NoRegister();
	FIREBASEEDITOR_API UClass* Z_Construct_UClass_UTwitterSignSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FireBaseEditor();
// End Cross Module References
	void UTwitterSignSetting::StaticRegisterNativesUTwitterSignSetting()
	{
	}
	UClass* Z_Construct_UClass_UTwitterSignSetting_NoRegister()
	{
		return UTwitterSignSetting::StaticClass();
	}
	struct Z_Construct_UClass_UTwitterSignSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_apiSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_apiSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_apiKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_apiKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAndroidEnabled_MetaData[];
#endif
		static void NewProp_bAndroidEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAndroidEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwitterSignSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBaseEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitterSignSetting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TwitterSignSetting.h" },
		{ "ModuleRelativePath", "Private/TwitterSignSetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_apiSecret_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "api secret" },
		{ "ModuleRelativePath", "Private/TwitterSignSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_apiSecret = { UE4CodeGen_Private::EPropertyClass::Str, "apiSecret", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UTwitterSignSetting, apiSecret), METADATA_PARAMS(Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_apiSecret_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_apiSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_apiKey_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "api key" },
		{ "ModuleRelativePath", "Private/TwitterSignSetting.h" },
		{ "ToolTip", "the android admob appid" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_apiKey = { UE4CodeGen_Private::EPropertyClass::Str, "apiKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UTwitterSignSetting, apiKey), METADATA_PARAMS(Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_apiKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_apiKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_bAndroidEnabled_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "If Android Google Signin Enable" },
		{ "ModuleRelativePath", "Private/TwitterSignSetting.h" },
	};
#endif
	void Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_bAndroidEnabled_SetBit(void* Obj)
	{
		((UTwitterSignSetting*)Obj)->bAndroidEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_bAndroidEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bAndroidEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTwitterSignSetting), &Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_bAndroidEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_bAndroidEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_bAndroidEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwitterSignSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_apiSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_apiKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitterSignSetting_Statics::NewProp_bAndroidEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwitterSignSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwitterSignSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwitterSignSetting_Statics::ClassParams = {
		&UTwitterSignSetting::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000ACu,
		nullptr, 0,
		Z_Construct_UClass_UTwitterSignSetting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTwitterSignSetting_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTwitterSignSetting_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTwitterSignSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwitterSignSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwitterSignSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwitterSignSetting, 3921737412);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwitterSignSetting(Z_Construct_UClass_UTwitterSignSetting, &UTwitterSignSetting::StaticClass, TEXT("/Script/FireBaseEditor"), TEXT("UTwitterSignSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwitterSignSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
