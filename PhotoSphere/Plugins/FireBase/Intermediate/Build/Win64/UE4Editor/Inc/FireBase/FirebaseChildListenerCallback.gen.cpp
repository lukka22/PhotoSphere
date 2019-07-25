// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FirebaseChildListenerCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseChildListenerCallback() {}
// Cross Module References
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseDataSnapshot_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseChildListenerCallback_NoRegister();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseChildListenerCallback();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseQuery_NoRegister();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseChildListenerCallback_RemoveChildListener();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature_Statics
	{
		struct _Script_FireBase_eventFireBaseChildRemoveListenerDelegate_Parms
		{
			UFirebaseChildListenerCallback* thiz;
			UFirebaseDataSnapshot* dataSnapshot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dataSnapshot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thiz;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature_Statics::NewProp_dataSnapshot = { UE4CodeGen_Private::EPropertyClass::Object, "dataSnapshot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseChildRemoveListenerDelegate_Parms, dataSnapshot), Z_Construct_UClass_UFirebaseDataSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature_Statics::NewProp_thiz = { UE4CodeGen_Private::EPropertyClass::Object, "thiz", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseChildRemoveListenerDelegate_Parms, thiz), Z_Construct_UClass_UFirebaseChildListenerCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature_Statics::NewProp_dataSnapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature_Statics::NewProp_thiz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseChildListenerCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FireBase, "FireBaseChildRemoveListenerDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FireBase_eventFireBaseChildRemoveListenerDelegate_Parms), Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics
	{
		struct _Script_FireBase_eventFireBaseChildMoveListenerDelegate_Parms
		{
			UFirebaseChildListenerCallback* thiz;
			UFirebaseDataSnapshot* dataSnapshot;
			FString preSiblingKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_preSiblingKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_preSiblingKey;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dataSnapshot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thiz;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey = { UE4CodeGen_Private::EPropertyClass::Str, "preSiblingKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseChildMoveListenerDelegate_Parms, preSiblingKey), METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::NewProp_dataSnapshot = { UE4CodeGen_Private::EPropertyClass::Object, "dataSnapshot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseChildMoveListenerDelegate_Parms, dataSnapshot), Z_Construct_UClass_UFirebaseDataSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::NewProp_thiz = { UE4CodeGen_Private::EPropertyClass::Object, "thiz", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseChildMoveListenerDelegate_Parms, thiz), Z_Construct_UClass_UFirebaseChildListenerCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::NewProp_dataSnapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::NewProp_thiz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseChildListenerCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FireBase, "FireBaseChildMoveListenerDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FireBase_eventFireBaseChildMoveListenerDelegate_Parms), Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics
	{
		struct _Script_FireBase_eventFireBaseChildChangeListenerDelegate_Parms
		{
			UFirebaseChildListenerCallback* thiz;
			UFirebaseDataSnapshot* dataSnapshot;
			FString preSiblingKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_preSiblingKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_preSiblingKey;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dataSnapshot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thiz;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey = { UE4CodeGen_Private::EPropertyClass::Str, "preSiblingKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseChildChangeListenerDelegate_Parms, preSiblingKey), METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::NewProp_dataSnapshot = { UE4CodeGen_Private::EPropertyClass::Object, "dataSnapshot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseChildChangeListenerDelegate_Parms, dataSnapshot), Z_Construct_UClass_UFirebaseDataSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::NewProp_thiz = { UE4CodeGen_Private::EPropertyClass::Object, "thiz", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseChildChangeListenerDelegate_Parms, thiz), Z_Construct_UClass_UFirebaseChildListenerCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::NewProp_dataSnapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::NewProp_thiz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseChildListenerCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FireBase, "FireBaseChildChangeListenerDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FireBase_eventFireBaseChildChangeListenerDelegate_Parms), Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics
	{
		struct _Script_FireBase_eventFireBaseChildAddListenerDelegate_Parms
		{
			UFirebaseChildListenerCallback* thiz;
			UFirebaseDataSnapshot* dataSnapshot;
			FString preSiblingKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_preSiblingKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_preSiblingKey;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dataSnapshot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thiz;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey = { UE4CodeGen_Private::EPropertyClass::Str, "preSiblingKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseChildAddListenerDelegate_Parms, preSiblingKey), METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::NewProp_dataSnapshot = { UE4CodeGen_Private::EPropertyClass::Object, "dataSnapshot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseChildAddListenerDelegate_Parms, dataSnapshot), Z_Construct_UClass_UFirebaseDataSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::NewProp_thiz = { UE4CodeGen_Private::EPropertyClass::Object, "thiz", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseChildAddListenerDelegate_Parms, thiz), Z_Construct_UClass_UFirebaseChildListenerCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::NewProp_preSiblingKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::NewProp_dataSnapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::NewProp_thiz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseChildListenerCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FireBase, "FireBaseChildAddListenerDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FireBase_eventFireBaseChildAddListenerDelegate_Parms), Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFirebaseChildListenerCallback::StaticRegisterNativesUFirebaseChildListenerCallback()
	{
		UClass* Class = UFirebaseChildListenerCallback::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildListener", &UFirebaseChildListenerCallback::execAddChildListener },
			{ "RemoveChildListener", &UFirebaseChildListenerCallback::execRemoveChildListener },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener_Statics
	{
		struct FirebaseChildListenerCallback_eventAddChildListener_Parms
		{
			UFirebaseQuery* query;
			UFirebaseChildListenerCallback* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseChildListenerCallback_eventAddChildListener_Parms, ReturnValue), Z_Construct_UClass_UFirebaseChildListenerCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener_Statics::NewProp_query = { UE4CodeGen_Private::EPropertyClass::Object, "query", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseChildListenerCallback_eventAddChildListener_Parms, query), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener_Statics::NewProp_query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FireBase" },
		{ "DisplayName", "AddChildListener" },
		{ "ModuleRelativePath", "Public/FirebaseChildListenerCallback.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseChildListenerCallback, "AddChildListener", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FirebaseChildListenerCallback_eventAddChildListener_Parms), Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseChildListenerCallback_RemoveChildListener_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseChildListenerCallback_RemoveChildListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseChildListenerCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseChildListenerCallback_RemoveChildListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseChildListenerCallback, "RemoveChildListener", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseChildListenerCallback_RemoveChildListener_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseChildListenerCallback_RemoveChildListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseChildListenerCallback_RemoveChildListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseChildListenerCallback_RemoveChildListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseChildListenerCallback_NoRegister()
	{
		return UFirebaseChildListenerCallback::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseChildListenerCallback_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChildRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChildRemove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChildMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChildMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChildChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChildChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChildAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChildAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseChildListenerCallback_AddChildListener, "AddChildListener" }, // 371096925
		{ &Z_Construct_UFunction_UFirebaseChildListenerCallback_RemoveChildListener, "RemoveChildListener" }, // 798552510
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirebaseChildListenerCallback.h" },
		{ "ModuleRelativePath", "Public/FirebaseChildListenerCallback.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_mQuery_MetaData[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseChildListenerCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_mQuery = { UE4CodeGen_Private::EPropertyClass::Object, "mQuery", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFirebaseChildListenerCallback, mQuery), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_mQuery_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_mQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildRemove_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirebaseChildListenerCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildRemove = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnChildRemove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFirebaseChildListenerCallback, OnChildRemove), Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildRemove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildRemove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildMove_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirebaseChildListenerCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildMove = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnChildMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFirebaseChildListenerCallback, OnChildMove), Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirebaseChildListenerCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildChange = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnChildChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFirebaseChildListenerCallback, OnChildChange), Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildAdd_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirebaseChildListenerCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildAdd = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnChildAdd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFirebaseChildListenerCallback, OnChildAdd), Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildAdd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildAdd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_mQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::NewProp_OnChildAdd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseChildListenerCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::ClassParams = {
		&UFirebaseChildListenerCallback::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseChildListenerCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseChildListenerCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseChildListenerCallback, 1955317885);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseChildListenerCallback(Z_Construct_UClass_UFirebaseChildListenerCallback, &UFirebaseChildListenerCallback::StaticClass, TEXT("/Script/FireBase"), TEXT("UFirebaseChildListenerCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseChildListenerCallback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
