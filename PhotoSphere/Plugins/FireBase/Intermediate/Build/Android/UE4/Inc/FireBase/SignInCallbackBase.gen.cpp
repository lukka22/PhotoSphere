// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/SignInCallbackBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSignInCallbackBase() {}
// Cross Module References
	FIREBASE_API UClass* Z_Construct_UClass_USignInCallbackBase_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_USignInCallbackBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature();
// End Cross Module References
	void USignInCallbackBase::StaticRegisterNativesUSignInCallbackBase()
	{
	}
	UClass* Z_Construct_UClass_USignInCallbackBase_NoRegister()
	{
		return USignInCallbackBase::StaticClass();
	}
	struct Z_Construct_UClass_USignInCallbackBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USignInCallbackBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInCallbackBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SignInCallbackBase.h" },
		{ "ModuleRelativePath", "Public/SignInCallbackBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInCallbackBase_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/SignInCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USignInCallbackBase_Statics::NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USignInCallbackBase, OnSuccess), Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USignInCallbackBase_Statics::NewProp_OnSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_USignInCallbackBase_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USignInCallbackBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignInCallbackBase_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USignInCallbackBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USignInCallbackBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USignInCallbackBase_Statics::ClassParams = {
		&USignInCallbackBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_USignInCallbackBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USignInCallbackBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USignInCallbackBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USignInCallbackBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USignInCallbackBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USignInCallbackBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USignInCallbackBase, 2837533652);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USignInCallbackBase(Z_Construct_UClass_USignInCallbackBase, &USignInCallbackBase::StaticClass, TEXT("/Script/FireBase"), TEXT("USignInCallbackBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USignInCallbackBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
