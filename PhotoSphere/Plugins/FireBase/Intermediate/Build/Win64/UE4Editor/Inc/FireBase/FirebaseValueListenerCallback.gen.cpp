// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FirebaseValueListenerCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseValueListenerCallback() {}
// Cross Module References
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseDataSnapshot_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseValueListenerCallback_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseValueListenerCallback();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseQuery_NoRegister();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseValueListenerCallback_RemoveValueListener();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics
	{
		struct _Script_FireBase_eventFireBaseValueListenerDelegate_Parms
		{
			UFirebaseValueListenerCallback* thiz;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thiz;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::NewProp_dataSnapshot = { UE4CodeGen_Private::EPropertyClass::Object, "dataSnapshot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseValueListenerDelegate_Parms, dataSnapshot), Z_Construct_UClass_UFirebaseDataSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::NewProp_errmsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::NewProp_errmsg = { UE4CodeGen_Private::EPropertyClass::Str, "errmsg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseValueListenerDelegate_Parms, errmsg), METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::NewProp_errmsg_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::NewProp_errmsg_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::NewProp_errcode = { UE4CodeGen_Private::EPropertyClass::Int, "errcode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseValueListenerDelegate_Parms, errcode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::NewProp_thiz = { UE4CodeGen_Private::EPropertyClass::Object, "thiz", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseValueListenerDelegate_Parms, thiz), Z_Construct_UClass_UFirebaseValueListenerCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::NewProp_dataSnapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::NewProp_errmsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::NewProp_errcode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::NewProp_thiz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseValueListenerCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FireBase, "FireBaseValueListenerDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FireBase_eventFireBaseValueListenerDelegate_Parms), Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFirebaseValueListenerCallback::StaticRegisterNativesUFirebaseValueListenerCallback()
	{
		UClass* Class = UFirebaseValueListenerCallback::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddValueListener", &UFirebaseValueListenerCallback::execAddValueListener },
			{ "RemoveValueListener", &UFirebaseValueListenerCallback::execRemoveValueListener },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener_Statics
	{
		struct FirebaseValueListenerCallback_eventAddValueListener_Parms
		{
			UFirebaseQuery* query;
			UFirebaseValueListenerCallback* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseValueListenerCallback_eventAddValueListener_Parms, ReturnValue), Z_Construct_UClass_UFirebaseValueListenerCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener_Statics::NewProp_query = { UE4CodeGen_Private::EPropertyClass::Object, "query", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseValueListenerCallback_eventAddValueListener_Parms, query), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener_Statics::NewProp_query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FireBase" },
		{ "DisplayName", "AddValueListener" },
		{ "ModuleRelativePath", "Public/FirebaseValueListenerCallback.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseValueListenerCallback, "AddValueListener", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FirebaseValueListenerCallback_eventAddValueListener_Parms), Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseValueListenerCallback_RemoveValueListener_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseValueListenerCallback_RemoveValueListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseValueListenerCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseValueListenerCallback_RemoveValueListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseValueListenerCallback, "RemoveValueListener", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseValueListenerCallback_RemoveValueListener_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseValueListenerCallback_RemoveValueListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseValueListenerCallback_RemoveValueListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseValueListenerCallback_RemoveValueListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseValueListenerCallback_NoRegister()
	{
		return UFirebaseValueListenerCallback::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseValueListenerCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseValueListenerCallback_AddValueListener, "AddValueListener" }, // 1174357414
		{ &Z_Construct_UFunction_UFirebaseValueListenerCallback_RemoveValueListener, "RemoveValueListener" }, // 2092861553
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirebaseValueListenerCallback.h" },
		{ "ModuleRelativePath", "Public/FirebaseValueListenerCallback.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::NewProp_mQuery_MetaData[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseValueListenerCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::NewProp_mQuery = { UE4CodeGen_Private::EPropertyClass::Object, "mQuery", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFirebaseValueListenerCallback, mQuery), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::NewProp_mQuery_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::NewProp_mQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::NewProp_OnChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirebaseValueListenerCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::NewProp_OnChange = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFirebaseValueListenerCallback, OnChange), Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::NewProp_OnChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::NewProp_OnChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::NewProp_mQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::NewProp_OnChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseValueListenerCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::ClassParams = {
		&UFirebaseValueListenerCallback::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseValueListenerCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseValueListenerCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseValueListenerCallback, 1559046398);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseValueListenerCallback(Z_Construct_UClass_UFirebaseValueListenerCallback, &UFirebaseValueListenerCallback::StaticClass, TEXT("/Script/FireBase"), TEXT("UFirebaseValueListenerCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseValueListenerCallback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
