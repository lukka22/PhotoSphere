// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FaceBookSignOutCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFaceBookSignOutCallback() {}
// Cross Module References
	FIREBASE_API UClass* Z_Construct_UClass_UFaceBookSignOutCallback_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFaceBookSignOutCallback();
	FIREBASE_API UClass* Z_Construct_UClass_USignOutCallbackBase();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFaceBookSignOutCallback_FaceBookSignOut();
// End Cross Module References
	void UFaceBookSignOutCallback::StaticRegisterNativesUFaceBookSignOutCallback()
	{
		UClass* Class = UFaceBookSignOutCallback::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FaceBookSignOut", &UFaceBookSignOutCallback::execFaceBookSignOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFaceBookSignOutCallback_FaceBookSignOut_Statics
	{
		struct FaceBookSignOutCallback_eventFaceBookSignOut_Parms
		{
			UFaceBookSignOutCallback* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFaceBookSignOutCallback_FaceBookSignOut_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FaceBookSignOutCallback_eventFaceBookSignOut_Parms, ReturnValue), Z_Construct_UClass_UFaceBookSignOutCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFaceBookSignOutCallback_FaceBookSignOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaceBookSignOutCallback_FaceBookSignOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFaceBookSignOutCallback_FaceBookSignOut_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FireBase" },
		{ "DisplayName", "FaceBookSignOut" },
		{ "ModuleRelativePath", "Public/FaceBookSignOutCallback.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFaceBookSignOutCallback_FaceBookSignOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFaceBookSignOutCallback, "FaceBookSignOut", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FaceBookSignOutCallback_eventFaceBookSignOut_Parms), Z_Construct_UFunction_UFaceBookSignOutCallback_FaceBookSignOut_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFaceBookSignOutCallback_FaceBookSignOut_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFaceBookSignOutCallback_FaceBookSignOut_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFaceBookSignOutCallback_FaceBookSignOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFaceBookSignOutCallback_FaceBookSignOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFaceBookSignOutCallback_FaceBookSignOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFaceBookSignOutCallback_NoRegister()
	{
		return UFaceBookSignOutCallback::StaticClass();
	}
	struct Z_Construct_UClass_UFaceBookSignOutCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFaceBookSignOutCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USignOutCallbackBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFaceBookSignOutCallback_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFaceBookSignOutCallback_FaceBookSignOut, "FaceBookSignOut" }, // 462601609
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaceBookSignOutCallback_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FaceBookSignOutCallback.h" },
		{ "ModuleRelativePath", "Public/FaceBookSignOutCallback.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFaceBookSignOutCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFaceBookSignOutCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFaceBookSignOutCallback_Statics::ClassParams = {
		&UFaceBookSignOutCallback::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFaceBookSignOutCallback_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFaceBookSignOutCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFaceBookSignOutCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFaceBookSignOutCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFaceBookSignOutCallback, 2872046567);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFaceBookSignOutCallback(Z_Construct_UClass_UFaceBookSignOutCallback, &UFaceBookSignOutCallback::StaticClass, TEXT("/Script/FireBase"), TEXT("UFaceBookSignOutCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFaceBookSignOutCallback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif