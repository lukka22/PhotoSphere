// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/SignOutCallbackBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSignOutCallbackBase() {}
// Cross Module References
	FIREBASE_API UClass* Z_Construct_UClass_USignOutCallbackBase_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_USignOutCallbackBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseSignOutDelegate__DelegateSignature();
// End Cross Module References
	void USignOutCallbackBase::StaticRegisterNativesUSignOutCallbackBase()
	{
	}
	UClass* Z_Construct_UClass_USignOutCallbackBase_NoRegister()
	{
		return USignOutCallbackBase::StaticClass();
	}
	struct Z_Construct_UClass_USignOutCallbackBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSignOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSignOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USignOutCallbackBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignOutCallbackBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SignOutCallbackBase.h" },
		{ "ModuleRelativePath", "Public/SignOutCallbackBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignOutCallbackBase_Statics::NewProp_OnSignOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/SignOutCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USignOutCallbackBase_Statics::NewProp_OnSignOut = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSignOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USignOutCallbackBase, OnSignOut), Z_Construct_UDelegateFunction_FireBase_FireBaseSignOutDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USignOutCallbackBase_Statics::NewProp_OnSignOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_USignOutCallbackBase_Statics::NewProp_OnSignOut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USignOutCallbackBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignOutCallbackBase_Statics::NewProp_OnSignOut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USignOutCallbackBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USignOutCallbackBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USignOutCallbackBase_Statics::ClassParams = {
		&USignOutCallbackBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_USignOutCallbackBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USignOutCallbackBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USignOutCallbackBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USignOutCallbackBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USignOutCallbackBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USignOutCallbackBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USignOutCallbackBase, 3654319236);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USignOutCallbackBase(Z_Construct_UClass_USignOutCallbackBase, &USignOutCallbackBase::StaticClass, TEXT("/Script/FireBase"), TEXT("USignOutCallbackBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USignOutCallbackBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
