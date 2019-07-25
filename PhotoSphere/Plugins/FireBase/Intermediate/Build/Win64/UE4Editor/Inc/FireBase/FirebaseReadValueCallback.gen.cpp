// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FirebaseReadValueCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseReadValueCallback() {}
// Cross Module References
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseDataSnapshot_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseReadValueCallback_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseReadValueCallback();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseQuery_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics
	{
		struct _Script_FireBase_eventFireBaseGetValueDelegate_Parms
		{
			int32 errcode;
			FString errmsg;
			UFirebaseDataSnapshot* dataSnapshot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dataSnapshot;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::NewProp_dataSnapshot = { UE4CodeGen_Private::EPropertyClass::Object, "dataSnapshot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseGetValueDelegate_Parms, dataSnapshot), Z_Construct_UClass_UFirebaseDataSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::NewProp_errmsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::NewProp_errmsg = { UE4CodeGen_Private::EPropertyClass::Str, "errmsg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseGetValueDelegate_Parms, errmsg), METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::NewProp_errmsg_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::NewProp_errmsg_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::NewProp_errcode = { UE4CodeGen_Private::EPropertyClass::Int, "errcode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseGetValueDelegate_Parms, errcode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::NewProp_dataSnapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::NewProp_errmsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::NewProp_errcode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseReadValueCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FireBase, "FireBaseGetValueDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FireBase_eventFireBaseGetValueDelegate_Parms), Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFirebaseReadValueCallback::StaticRegisterNativesUFirebaseReadValueCallback()
	{
		UClass* Class = UFirebaseReadValueCallback::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UFirebaseReadValueCallback::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue_Statics
	{
		struct FirebaseReadValueCallback_eventGetValue_Parms
		{
			UFirebaseQuery* query;
			UFirebaseReadValueCallback* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseReadValueCallback_eventGetValue_Parms, ReturnValue), Z_Construct_UClass_UFirebaseReadValueCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue_Statics::NewProp_query = { UE4CodeGen_Private::EPropertyClass::Object, "query", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseReadValueCallback_eventGetValue_Parms, query), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue_Statics::NewProp_query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FireBase" },
		{ "DisplayName", "GetValue" },
		{ "ModuleRelativePath", "Public/FirebaseReadValueCallback.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseReadValueCallback, "GetValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FirebaseReadValueCallback_eventGetValue_Parms), Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseReadValueCallback_NoRegister()
	{
		return UFirebaseReadValueCallback::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseReadValueCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_UFirebaseReadValueCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseReadValueCallback_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseReadValueCallback_GetValue, "GetValue" }, // 830931304
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseReadValueCallback_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirebaseReadValueCallback.h" },
		{ "ModuleRelativePath", "Public/FirebaseReadValueCallback.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseReadValueCallback_Statics::NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirebaseReadValueCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFirebaseReadValueCallback_Statics::NewProp_OnComplete = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnComplete", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFirebaseReadValueCallback, OnComplete), Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFirebaseReadValueCallback_Statics::NewProp_OnComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseReadValueCallback_Statics::NewProp_OnComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirebaseReadValueCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseReadValueCallback_Statics::NewProp_OnComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseReadValueCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseReadValueCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseReadValueCallback_Statics::ClassParams = {
		&UFirebaseReadValueCallback::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFirebaseReadValueCallback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFirebaseReadValueCallback_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseReadValueCallback_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFirebaseReadValueCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseReadValueCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseReadValueCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseReadValueCallback, 979092773);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseReadValueCallback(Z_Construct_UClass_UFirebaseReadValueCallback, &UFirebaseReadValueCallback::StaticClass, TEXT("/Script/FireBase"), TEXT("UFirebaseReadValueCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseReadValueCallback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
