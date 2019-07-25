// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/AsyncWaitOperateFinish.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncWaitOperateFinish() {}
// Cross Module References
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UClass* Z_Construct_UClass_UAsyncWaitOperateFinish_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UAsyncWaitOperateFinish();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics
	{
		struct _Script_FireBase_eventFireBaseFinishDelegate_Parms
		{
			int32 errcode;
			FString errmsg;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errmsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errmsg;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_errcode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::NewProp_errmsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::NewProp_errmsg = { UE4CodeGen_Private::EPropertyClass::Str, "errmsg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseFinishDelegate_Parms, errmsg), METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::NewProp_errmsg_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::NewProp_errmsg_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::NewProp_errcode = { UE4CodeGen_Private::EPropertyClass::Int, "errcode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseFinishDelegate_Parms, errcode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::NewProp_errmsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::NewProp_errcode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncWaitOperateFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FireBase, "FireBaseFinishDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FireBase_eventFireBaseFinishDelegate_Parms), Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAsyncWaitOperateFinish::StaticRegisterNativesUAsyncWaitOperateFinish()
	{
	}
	UClass* Z_Construct_UClass_UAsyncWaitOperateFinish_NoRegister()
	{
		return UAsyncWaitOperateFinish::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncWaitOperateFinish_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncWaitOperateFinish.h" },
		{ "ModuleRelativePath", "Public/AsyncWaitOperateFinish.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncWaitOperateFinish.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::NewProp_OnComplete = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnComplete", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAsyncWaitOperateFinish, OnComplete), Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::NewProp_OnComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::NewProp_OnComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::NewProp_OnComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncWaitOperateFinish>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::ClassParams = {
		&UAsyncWaitOperateFinish::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncWaitOperateFinish()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsyncWaitOperateFinish_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsyncWaitOperateFinish, 2256744883);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncWaitOperateFinish(Z_Construct_UClass_UAsyncWaitOperateFinish, &UAsyncWaitOperateFinish::StaticClass, TEXT("/Script/FireBase"), TEXT("UAsyncWaitOperateFinish"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncWaitOperateFinish);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
