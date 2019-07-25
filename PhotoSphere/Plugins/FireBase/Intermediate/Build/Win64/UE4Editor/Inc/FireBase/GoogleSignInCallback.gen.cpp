// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/GoogleSignInCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleSignInCallback() {}
// Cross Module References
	FIREBASE_API UClass* Z_Construct_UClass_UGoogleSignInCallback_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UGoogleSignInCallback();
	FIREBASE_API UClass* Z_Construct_UClass_USignInCallbackBase();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UFunction* Z_Construct_UFunction_UGoogleSignInCallback_GoogleSignIn();
// End Cross Module References
	void UGoogleSignInCallback::StaticRegisterNativesUGoogleSignInCallback()
	{
		UClass* Class = UGoogleSignInCallback::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GoogleSignIn", &UGoogleSignInCallback::execGoogleSignIn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogleSignInCallback_GoogleSignIn_Statics
	{
		struct GoogleSignInCallback_eventGoogleSignIn_Parms
		{
			UGoogleSignInCallback* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleSignInCallback_GoogleSignIn_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GoogleSignInCallback_eventGoogleSignIn_Parms, ReturnValue), Z_Construct_UClass_UGoogleSignInCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleSignInCallback_GoogleSignIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleSignInCallback_GoogleSignIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleSignInCallback_GoogleSignIn_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FireBase" },
		{ "DisplayName", "GoogleSignIn" },
		{ "ModuleRelativePath", "Public/GoogleSignInCallback.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleSignInCallback_GoogleSignIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleSignInCallback, "GoogleSignIn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(GoogleSignInCallback_eventGoogleSignIn_Parms), Z_Construct_UFunction_UGoogleSignInCallback_GoogleSignIn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGoogleSignInCallback_GoogleSignIn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleSignInCallback_GoogleSignIn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGoogleSignInCallback_GoogleSignIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleSignInCallback_GoogleSignIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoogleSignInCallback_GoogleSignIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGoogleSignInCallback_NoRegister()
	{
		return UGoogleSignInCallback::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleSignInCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleSignInCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USignInCallbackBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleSignInCallback_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleSignInCallback_GoogleSignIn, "GoogleSignIn" }, // 1879230972
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleSignInCallback_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GoogleSignInCallback.h" },
		{ "ModuleRelativePath", "Public/GoogleSignInCallback.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleSignInCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleSignInCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGoogleSignInCallback_Statics::ClassParams = {
		&UGoogleSignInCallback::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleSignInCallback_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGoogleSignInCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleSignInCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGoogleSignInCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGoogleSignInCallback, 1065154190);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGoogleSignInCallback(Z_Construct_UClass_UGoogleSignInCallback, &UGoogleSignInCallback::StaticClass, TEXT("/Script/FireBase"), TEXT("UGoogleSignInCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleSignInCallback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
