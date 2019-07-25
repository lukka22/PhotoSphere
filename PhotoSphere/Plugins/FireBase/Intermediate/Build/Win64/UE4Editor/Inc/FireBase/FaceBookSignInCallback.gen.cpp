// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FaceBookSignInCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFaceBookSignInCallback() {}
// Cross Module References
	FIREBASE_API UClass* Z_Construct_UClass_UFaceBookSignInCallback_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFaceBookSignInCallback();
	FIREBASE_API UClass* Z_Construct_UClass_USignInCallbackBase();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFaceBookSignInCallback_FaceBookSignIn();
// End Cross Module References
	void UFaceBookSignInCallback::StaticRegisterNativesUFaceBookSignInCallback()
	{
		UClass* Class = UFaceBookSignInCallback::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FaceBookSignIn", &UFaceBookSignInCallback::execFaceBookSignIn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFaceBookSignInCallback_FaceBookSignIn_Statics
	{
		struct FaceBookSignInCallback_eventFaceBookSignIn_Parms
		{
			UFaceBookSignInCallback* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFaceBookSignInCallback_FaceBookSignIn_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FaceBookSignInCallback_eventFaceBookSignIn_Parms, ReturnValue), Z_Construct_UClass_UFaceBookSignInCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFaceBookSignInCallback_FaceBookSignIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaceBookSignInCallback_FaceBookSignIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFaceBookSignInCallback_FaceBookSignIn_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FireBase" },
		{ "DisplayName", "FaceBookSignIn" },
		{ "ModuleRelativePath", "Public/FaceBookSignInCallback.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFaceBookSignInCallback_FaceBookSignIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFaceBookSignInCallback, "FaceBookSignIn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FaceBookSignInCallback_eventFaceBookSignIn_Parms), Z_Construct_UFunction_UFaceBookSignInCallback_FaceBookSignIn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFaceBookSignInCallback_FaceBookSignIn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFaceBookSignInCallback_FaceBookSignIn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFaceBookSignInCallback_FaceBookSignIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFaceBookSignInCallback_FaceBookSignIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFaceBookSignInCallback_FaceBookSignIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFaceBookSignInCallback_NoRegister()
	{
		return UFaceBookSignInCallback::StaticClass();
	}
	struct Z_Construct_UClass_UFaceBookSignInCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFaceBookSignInCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USignInCallbackBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFaceBookSignInCallback_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFaceBookSignInCallback_FaceBookSignIn, "FaceBookSignIn" }, // 1365498000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaceBookSignInCallback_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FaceBookSignInCallback.h" },
		{ "ModuleRelativePath", "Public/FaceBookSignInCallback.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFaceBookSignInCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFaceBookSignInCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFaceBookSignInCallback_Statics::ClassParams = {
		&UFaceBookSignInCallback::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFaceBookSignInCallback_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFaceBookSignInCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFaceBookSignInCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFaceBookSignInCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFaceBookSignInCallback, 3513277576);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFaceBookSignInCallback(Z_Construct_UClass_UFaceBookSignInCallback, &UFaceBookSignInCallback::StaticClass, TEXT("/Script/FireBase"), TEXT("UFaceBookSignInCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFaceBookSignInCallback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
