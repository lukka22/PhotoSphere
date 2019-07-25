// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FirebaseSetValueCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseSetValueCallback() {}
// Cross Module References
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseSetValueCallback_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseSetValueCallback();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseVariant_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics
	{
		struct _Script_FireBase_eventFireBaseSetValueDelegate_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::NewProp_errmsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::NewProp_errmsg = { UE4CodeGen_Private::EPropertyClass::Str, "errmsg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseSetValueDelegate_Parms, errmsg), METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::NewProp_errmsg_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::NewProp_errmsg_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::NewProp_errcode = { UE4CodeGen_Private::EPropertyClass::Int, "errcode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseSetValueDelegate_Parms, errcode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::NewProp_errmsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::NewProp_errcode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseSetValueCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FireBase, "FireBaseSetValueDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FireBase_eventFireBaseSetValueDelegate_Parms), Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFirebaseSetValueCallback::StaticRegisterNativesUFirebaseSetValueCallback()
	{
		UClass* Class = UFirebaseSetValueCallback::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetValue", &UFirebaseSetValueCallback::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics
	{
		struct FirebaseSetValueCallback_eventSetValue_Parms
		{
			UFirebaseDatabaseRef* databaseRef;
			UFirebaseVariant* value;
			UFirebaseSetValueCallback* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_databaseRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseSetValueCallback_eventSetValue_Parms, ReturnValue), Z_Construct_UClass_UFirebaseSetValueCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Object, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseSetValueCallback_eventSetValue_Parms, value), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics::NewProp_databaseRef = { UE4CodeGen_Private::EPropertyClass::Object, "databaseRef", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseSetValueCallback_eventSetValue_Parms, databaseRef), Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics::NewProp_databaseRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FireBase" },
		{ "DisplayName", "SetValue" },
		{ "ModuleRelativePath", "Public/FirebaseSetValueCallback.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseSetValueCallback, "SetValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FirebaseSetValueCallback_eventSetValue_Parms), Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseSetValueCallback_NoRegister()
	{
		return UFirebaseSetValueCallback::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseSetValueCallback_Statics
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
	UObject* (*const Z_Construct_UClass_UFirebaseSetValueCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseSetValueCallback_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseSetValueCallback_SetValue, "SetValue" }, // 2879247065
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseSetValueCallback_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirebaseSetValueCallback.h" },
		{ "ModuleRelativePath", "Public/FirebaseSetValueCallback.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseSetValueCallback_Statics::NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirebaseSetValueCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFirebaseSetValueCallback_Statics::NewProp_OnComplete = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnComplete", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFirebaseSetValueCallback, OnComplete), Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFirebaseSetValueCallback_Statics::NewProp_OnComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseSetValueCallback_Statics::NewProp_OnComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirebaseSetValueCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseSetValueCallback_Statics::NewProp_OnComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseSetValueCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseSetValueCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseSetValueCallback_Statics::ClassParams = {
		&UFirebaseSetValueCallback::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFirebaseSetValueCallback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFirebaseSetValueCallback_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseSetValueCallback_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFirebaseSetValueCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseSetValueCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseSetValueCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseSetValueCallback, 1307380388);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseSetValueCallback(Z_Construct_UClass_UFirebaseSetValueCallback, &UFirebaseSetValueCallback::StaticClass, TEXT("/Script/FireBase"), TEXT("UFirebaseSetValueCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseSetValueCallback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
