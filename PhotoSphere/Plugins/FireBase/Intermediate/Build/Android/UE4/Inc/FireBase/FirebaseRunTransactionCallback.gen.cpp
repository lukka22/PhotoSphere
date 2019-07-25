// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FirebaseRunTransactionCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseRunTransactionCallback() {}
// Cross Module References
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UEnum* Z_Construct_UEnum_FireBase_TransactionResult();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseMutableData_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseRunTransactionCallback_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseRunTransactionCallback();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics
	{
		struct _Script_FireBase_eventFireBaseTransactionDelegate_Parms
		{
			UFirebaseMutableData* mutableData;
			TransactionResult result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mutableData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics::NewProp_result = { UE4CodeGen_Private::EPropertyClass::Enum, "result", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseTransactionDelegate_Parms, result), Z_Construct_UEnum_FireBase_TransactionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics::NewProp_result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics::NewProp_mutableData = { UE4CodeGen_Private::EPropertyClass::Object, "mutableData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseTransactionDelegate_Parms, mutableData), Z_Construct_UClass_UFirebaseMutableData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics::NewProp_mutableData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseRunTransactionCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FireBase, "FireBaseTransactionDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_FireBase_eventFireBaseTransactionDelegate_Parms), Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFirebaseRunTransactionCallback::StaticRegisterNativesUFirebaseRunTransactionCallback()
	{
		UClass* Class = UFirebaseRunTransactionCallback::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunTransaction", &UFirebaseRunTransactionCallback::execRunTransaction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics
	{
		struct FirebaseRunTransactionCallback_eventRunTransaction_Parms
		{
			UFirebaseDatabaseRef* databaseRef;
			FScriptDelegate transation;
			UFirebaseRunTransactionCallback* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_transation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_databaseRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseRunTransactionCallback_eventRunTransaction_Parms, ReturnValue), Z_Construct_UClass_UFirebaseRunTransactionCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics::NewProp_transation = { UE4CodeGen_Private::EPropertyClass::Delegate, "transation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseRunTransactionCallback_eventRunTransaction_Parms, transation), Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics::NewProp_databaseRef = { UE4CodeGen_Private::EPropertyClass::Object, "databaseRef", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseRunTransactionCallback_eventRunTransaction_Parms, databaseRef), Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics::NewProp_transation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics::NewProp_databaseRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FireBase" },
		{ "DisplayName", "RunTransaction" },
		{ "ModuleRelativePath", "Public/FirebaseRunTransactionCallback.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRunTransactionCallback, "RunTransaction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FirebaseRunTransactionCallback_eventRunTransaction_Parms), Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseRunTransactionCallback_NoRegister()
	{
		return UFirebaseRunTransactionCallback::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDataBaseRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDataBaseRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTransaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnTransaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseRunTransactionCallback_RunTransaction, "RunTransaction" }, // 188318540
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirebaseRunTransactionCallback.h" },
		{ "ModuleRelativePath", "Public/FirebaseRunTransactionCallback.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_mDataBaseRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirebaseRunTransactionCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_mDataBaseRef = { UE4CodeGen_Private::EPropertyClass::Object, "mDataBaseRef", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFirebaseRunTransactionCallback, mDataBaseRef), Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_mDataBaseRef_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_mDataBaseRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirebaseRunTransactionCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_OnComplete = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnComplete", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFirebaseRunTransactionCallback, OnComplete), Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_OnComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_OnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_OnTransaction_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirebaseRunTransactionCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_OnTransaction = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnTransaction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UFirebaseRunTransactionCallback, OnTransaction), Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_OnTransaction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_OnTransaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_mDataBaseRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_OnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::NewProp_OnTransaction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseRunTransactionCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::ClassParams = {
		&UFirebaseRunTransactionCallback::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseRunTransactionCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseRunTransactionCallback, 61104735);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseRunTransactionCallback(Z_Construct_UClass_UFirebaseRunTransactionCallback, &UFirebaseRunTransactionCallback::StaticClass, TEXT("/Script/FireBase"), TEXT("UFirebaseRunTransactionCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseRunTransactionCallback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
