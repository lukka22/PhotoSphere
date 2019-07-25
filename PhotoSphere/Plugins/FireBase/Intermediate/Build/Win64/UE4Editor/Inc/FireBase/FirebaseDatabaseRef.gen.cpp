// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FirebaseDatabaseRef.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseDatabaseRef() {}
// Cross Module References
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseDatabaseRef();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseQuery();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_Child();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_GetParent();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_GetRoot();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_GetRootDatabaseRef();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_GetUrl();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_GoOffline();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_GoOnline();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_Key();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_PushChild();
// End Cross Module References
	void UFirebaseDatabaseRef::StaticRegisterNativesUFirebaseDatabaseRef()
	{
		UClass* Class = UFirebaseDatabaseRef::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Child", &UFirebaseDatabaseRef::execChild },
			{ "GetParent", &UFirebaseDatabaseRef::execGetParent },
			{ "GetRoot", &UFirebaseDatabaseRef::execGetRoot },
			{ "GetRootDatabaseRef", &UFirebaseDatabaseRef::execGetRootDatabaseRef },
			{ "GetUrl", &UFirebaseDatabaseRef::execGetUrl },
			{ "GoOffline", &UFirebaseDatabaseRef::execGoOffline },
			{ "GoOnline", &UFirebaseDatabaseRef::execGoOnline },
			{ "IsRoot", &UFirebaseDatabaseRef::execIsRoot },
			{ "Key", &UFirebaseDatabaseRef::execKey },
			{ "PushChild", &UFirebaseDatabaseRef::execPushChild },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics
	{
		struct FirebaseDatabaseRef_eventChild_Parms
		{
			FString child;
			UFirebaseDatabaseRef* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_child_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_child;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseDatabaseRef_eventChild_Parms, ReturnValue), Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::NewProp_child_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::NewProp_child = { UE4CodeGen_Private::EPropertyClass::Str, "child", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(FirebaseDatabaseRef_eventChild_Parms, child), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::NewProp_child_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::NewProp_child_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::NewProp_child,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDatabaseRef.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDatabaseRef, "Child", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseDatabaseRef_eventChild_Parms), Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_Child()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDatabaseRef_Child_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDatabaseRef_GetParent_Statics
	{
		struct FirebaseDatabaseRef_eventGetParent_Parms
		{
			UFirebaseDatabaseRef* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseDatabaseRef_GetParent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseDatabaseRef_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDatabaseRef_GetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDatabaseRef_GetParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDatabaseRef_GetParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDatabaseRef.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDatabaseRef_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDatabaseRef, "GetParent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseDatabaseRef_eventGetParent_Parms), Z_Construct_UFunction_UFirebaseDatabaseRef_GetParent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_GetParent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDatabaseRef_GetParent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_GetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_GetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDatabaseRef_GetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDatabaseRef_GetRoot_Statics
	{
		struct FirebaseDatabaseRef_eventGetRoot_Parms
		{
			UFirebaseDatabaseRef* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseDatabaseRef_GetRoot_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseDatabaseRef_eventGetRoot_Parms, ReturnValue), Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDatabaseRef_GetRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDatabaseRef_GetRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDatabaseRef_GetRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDatabaseRef.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDatabaseRef_GetRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDatabaseRef, "GetRoot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseDatabaseRef_eventGetRoot_Parms), Z_Construct_UFunction_UFirebaseDatabaseRef_GetRoot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_GetRoot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDatabaseRef_GetRoot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_GetRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_GetRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDatabaseRef_GetRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDatabaseRef_GetRootDatabaseRef_Statics
	{
		struct FirebaseDatabaseRef_eventGetRootDatabaseRef_Parms
		{
			UFirebaseDatabaseRef* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseDatabaseRef_GetRootDatabaseRef_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseDatabaseRef_eventGetRootDatabaseRef_Parms, ReturnValue), Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDatabaseRef_GetRootDatabaseRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDatabaseRef_GetRootDatabaseRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDatabaseRef_GetRootDatabaseRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDatabaseRef.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDatabaseRef_GetRootDatabaseRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDatabaseRef, "GetRootDatabaseRef", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FirebaseDatabaseRef_eventGetRootDatabaseRef_Parms), Z_Construct_UFunction_UFirebaseDatabaseRef_GetRootDatabaseRef_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_GetRootDatabaseRef_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDatabaseRef_GetRootDatabaseRef_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_GetRootDatabaseRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_GetRootDatabaseRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDatabaseRef_GetRootDatabaseRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDatabaseRef_GetUrl_Statics
	{
		struct FirebaseDatabaseRef_eventGetUrl_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseDatabaseRef_GetUrl_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseDatabaseRef_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDatabaseRef_GetUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDatabaseRef_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDatabaseRef_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDatabaseRef.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDatabaseRef_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDatabaseRef, "GetUrl", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseDatabaseRef_eventGetUrl_Parms), Z_Construct_UFunction_UFirebaseDatabaseRef_GetUrl_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_GetUrl_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDatabaseRef_GetUrl_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDatabaseRef_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDatabaseRef_GoOffline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDatabaseRef_GoOffline_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDatabaseRef.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDatabaseRef_GoOffline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDatabaseRef, "GoOffline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDatabaseRef_GoOffline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_GoOffline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_GoOffline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDatabaseRef_GoOffline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDatabaseRef_GoOnline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDatabaseRef_GoOnline_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDatabaseRef.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDatabaseRef_GoOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDatabaseRef, "GoOnline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDatabaseRef_GoOnline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_GoOnline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_GoOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDatabaseRef_GoOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot_Statics
	{
		struct FirebaseDatabaseRef_eventIsRoot_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirebaseDatabaseRef_eventIsRoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FirebaseDatabaseRef_eventIsRoot_Parms), &Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDatabaseRef.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDatabaseRef, "IsRoot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseDatabaseRef_eventIsRoot_Parms), Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDatabaseRef_Key_Statics
	{
		struct FirebaseDatabaseRef_eventKey_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseDatabaseRef_Key_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseDatabaseRef_eventKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDatabaseRef_Key_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDatabaseRef_Key_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDatabaseRef_Key_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDatabaseRef.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDatabaseRef_Key_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDatabaseRef, "Key", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseDatabaseRef_eventKey_Parms), Z_Construct_UFunction_UFirebaseDatabaseRef_Key_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_Key_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDatabaseRef_Key_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_Key_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_Key()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDatabaseRef_Key_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDatabaseRef_PushChild_Statics
	{
		struct FirebaseDatabaseRef_eventPushChild_Parms
		{
			UFirebaseDatabaseRef* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseDatabaseRef_PushChild_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseDatabaseRef_eventPushChild_Parms, ReturnValue), Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDatabaseRef_PushChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDatabaseRef_PushChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDatabaseRef_PushChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDatabaseRef.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDatabaseRef_PushChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDatabaseRef, "PushChild", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseDatabaseRef_eventPushChild_Parms), Z_Construct_UFunction_UFirebaseDatabaseRef_PushChild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_PushChild_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDatabaseRef_PushChild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDatabaseRef_PushChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDatabaseRef_PushChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDatabaseRef_PushChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister()
	{
		return UFirebaseDatabaseRef::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseDatabaseRef_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseDatabaseRef_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFirebaseQuery,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseDatabaseRef_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseDatabaseRef_Child, "Child" }, // 789103356
		{ &Z_Construct_UFunction_UFirebaseDatabaseRef_GetParent, "GetParent" }, // 3496374766
		{ &Z_Construct_UFunction_UFirebaseDatabaseRef_GetRoot, "GetRoot" }, // 2345331822
		{ &Z_Construct_UFunction_UFirebaseDatabaseRef_GetRootDatabaseRef, "GetRootDatabaseRef" }, // 1882856717
		{ &Z_Construct_UFunction_UFirebaseDatabaseRef_GetUrl, "GetUrl" }, // 2113045814
		{ &Z_Construct_UFunction_UFirebaseDatabaseRef_GoOffline, "GoOffline" }, // 3132636263
		{ &Z_Construct_UFunction_UFirebaseDatabaseRef_GoOnline, "GoOnline" }, // 982656989
		{ &Z_Construct_UFunction_UFirebaseDatabaseRef_IsRoot, "IsRoot" }, // 261680915
		{ &Z_Construct_UFunction_UFirebaseDatabaseRef_Key, "Key" }, // 1435779177
		{ &Z_Construct_UFunction_UFirebaseDatabaseRef_PushChild, "PushChild" }, // 2875043778
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseDatabaseRef_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FirebaseDatabaseRef.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FirebaseDatabaseRef.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseDatabaseRef_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseDatabaseRef>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseDatabaseRef_Statics::ClassParams = {
		&UFirebaseDatabaseRef::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseDatabaseRef_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFirebaseDatabaseRef_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseDatabaseRef()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseDatabaseRef_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseDatabaseRef, 12539808);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseDatabaseRef(Z_Construct_UClass_UFirebaseDatabaseRef, &UFirebaseDatabaseRef::StaticClass, TEXT("/Script/FireBase"), TEXT("UFirebaseDatabaseRef"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseDatabaseRef);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
