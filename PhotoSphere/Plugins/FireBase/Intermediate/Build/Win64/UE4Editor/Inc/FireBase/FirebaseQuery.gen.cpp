// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FirebaseQuery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseQuery() {}
// Cross Module References
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseQuery_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseQuery();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_EndAt();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseVariant_NoRegister();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_EndAtChild();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_EqualTo();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_EqualToChild();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_GetReference();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_IsValid();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_LimitToFirst();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_LimitToLast();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_OrderByChild();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_OrderByKey();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_OrderByPriority();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_OrderByValue();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_StartAt();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseQuery_StartAtChild();
// End Cross Module References
	void UFirebaseQuery::StaticRegisterNativesUFirebaseQuery()
	{
		UClass* Class = UFirebaseQuery::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndAt", &UFirebaseQuery::execEndAt },
			{ "EndAtChild", &UFirebaseQuery::execEndAtChild },
			{ "EqualTo", &UFirebaseQuery::execEqualTo },
			{ "EqualToChild", &UFirebaseQuery::execEqualToChild },
			{ "GetReference", &UFirebaseQuery::execGetReference },
			{ "IsValid", &UFirebaseQuery::execIsValid },
			{ "LimitToFirst", &UFirebaseQuery::execLimitToFirst },
			{ "LimitToLast", &UFirebaseQuery::execLimitToLast },
			{ "OrderByChild", &UFirebaseQuery::execOrderByChild },
			{ "OrderByKey", &UFirebaseQuery::execOrderByKey },
			{ "OrderByPriority", &UFirebaseQuery::execOrderByPriority },
			{ "OrderByValue", &UFirebaseQuery::execOrderByValue },
			{ "SetKeepSynchronized", &UFirebaseQuery::execSetKeepSynchronized },
			{ "StartAt", &UFirebaseQuery::execStartAt },
			{ "StartAtChild", &UFirebaseQuery::execStartAtChild },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseQuery_EndAt_Statics
	{
		struct FirebaseQuery_eventEndAt_Parms
		{
			UFirebaseVariant* orderValue;
			UFirebaseQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_orderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_EndAt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventEndAt_Parms, ReturnValue), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_EndAt_Statics::NewProp_orderValue = { UE4CodeGen_Private::EPropertyClass::Object, "orderValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventEndAt_Parms, orderValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_EndAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_EndAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_EndAt_Statics::NewProp_orderValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_EndAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_EndAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "EndAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseQuery_eventEndAt_Parms), Z_Construct_UFunction_UFirebaseQuery_EndAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_EndAt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_EndAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_EndAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_EndAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_EndAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics
	{
		struct FirebaseQuery_eventEndAtChild_Parms
		{
			UFirebaseVariant* orderValue;
			FString childKey;
			UFirebaseQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_childKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_childKey;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_orderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventEndAtChild_Parms, ReturnValue), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::NewProp_childKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::NewProp_childKey = { UE4CodeGen_Private::EPropertyClass::Str, "childKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventEndAtChild_Parms, childKey), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::NewProp_childKey_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::NewProp_childKey_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::NewProp_orderValue = { UE4CodeGen_Private::EPropertyClass::Object, "orderValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventEndAtChild_Parms, orderValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::NewProp_childKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::NewProp_orderValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "EndAtChild", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseQuery_eventEndAtChild_Parms), Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_EndAtChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_EndAtChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseQuery_EqualTo_Statics
	{
		struct FirebaseQuery_eventEqualTo_Parms
		{
			UFirebaseVariant* orderValue;
			UFirebaseQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_orderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_EqualTo_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventEqualTo_Parms, ReturnValue), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_EqualTo_Statics::NewProp_orderValue = { UE4CodeGen_Private::EPropertyClass::Object, "orderValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventEqualTo_Parms, orderValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_EqualTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_EqualTo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_EqualTo_Statics::NewProp_orderValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_EqualTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_EqualTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "EqualTo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseQuery_eventEqualTo_Parms), Z_Construct_UFunction_UFirebaseQuery_EqualTo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_EqualTo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_EqualTo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_EqualTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_EqualTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_EqualTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics
	{
		struct FirebaseQuery_eventEqualToChild_Parms
		{
			UFirebaseVariant* orderValue;
			FString childKey;
			UFirebaseQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_childKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_childKey;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_orderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventEqualToChild_Parms, ReturnValue), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::NewProp_childKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::NewProp_childKey = { UE4CodeGen_Private::EPropertyClass::Str, "childKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventEqualToChild_Parms, childKey), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::NewProp_childKey_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::NewProp_childKey_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::NewProp_orderValue = { UE4CodeGen_Private::EPropertyClass::Object, "orderValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventEqualToChild_Parms, orderValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::NewProp_childKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::NewProp_orderValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "EqualToChild", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseQuery_eventEqualToChild_Parms), Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_EqualToChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_EqualToChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseQuery_GetReference_Statics
	{
		struct FirebaseQuery_eventGetReference_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_GetReference_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventGetReference_Parms, ReturnValue), Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_GetReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_GetReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_GetReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_GetReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "GetReference", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseQuery_eventGetReference_Parms), Z_Construct_UFunction_UFirebaseQuery_GetReference_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_GetReference_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_GetReference_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_GetReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_GetReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_GetReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseQuery_IsValid_Statics
	{
		struct FirebaseQuery_eventIsValid_Parms
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
	void Z_Construct_UFunction_UFirebaseQuery_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirebaseQuery_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseQuery_IsValid_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FirebaseQuery_eventIsValid_Parms), &Z_Construct_UFunction_UFirebaseQuery_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "IsValid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(FirebaseQuery_eventIsValid_Parms), Z_Construct_UFunction_UFirebaseQuery_IsValid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_IsValid_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_IsValid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseQuery_LimitToFirst_Statics
	{
		struct FirebaseQuery_eventLimitToFirst_Parms
		{
			int32 limit;
			UFirebaseQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_LimitToFirst_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventLimitToFirst_Parms, ReturnValue), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFirebaseQuery_LimitToFirst_Statics::NewProp_limit = { UE4CodeGen_Private::EPropertyClass::Int, "limit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventLimitToFirst_Parms, limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_LimitToFirst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_LimitToFirst_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_LimitToFirst_Statics::NewProp_limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_LimitToFirst_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_LimitToFirst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "LimitToFirst", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseQuery_eventLimitToFirst_Parms), Z_Construct_UFunction_UFirebaseQuery_LimitToFirst_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_LimitToFirst_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_LimitToFirst_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_LimitToFirst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_LimitToFirst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_LimitToFirst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseQuery_LimitToLast_Statics
	{
		struct FirebaseQuery_eventLimitToLast_Parms
		{
			int32 limit;
			UFirebaseQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_LimitToLast_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventLimitToLast_Parms, ReturnValue), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFirebaseQuery_LimitToLast_Statics::NewProp_limit = { UE4CodeGen_Private::EPropertyClass::Int, "limit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventLimitToLast_Parms, limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_LimitToLast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_LimitToLast_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_LimitToLast_Statics::NewProp_limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_LimitToLast_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_LimitToLast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "LimitToLast", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseQuery_eventLimitToLast_Parms), Z_Construct_UFunction_UFirebaseQuery_LimitToLast_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_LimitToLast_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_LimitToLast_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_LimitToLast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_LimitToLast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_LimitToLast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics
	{
		struct FirebaseQuery_eventOrderByChild_Parms
		{
			FString child;
			UFirebaseQuery* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventOrderByChild_Parms, ReturnValue), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::NewProp_child_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::NewProp_child = { UE4CodeGen_Private::EPropertyClass::Str, "child", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventOrderByChild_Parms, child), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::NewProp_child_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::NewProp_child_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::NewProp_child,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "OrderByChild", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseQuery_eventOrderByChild_Parms), Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_OrderByChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_OrderByChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseQuery_OrderByKey_Statics
	{
		struct FirebaseQuery_eventOrderByKey_Parms
		{
			UFirebaseQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_OrderByKey_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventOrderByKey_Parms, ReturnValue), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_OrderByKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_OrderByKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_OrderByKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_OrderByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "OrderByKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseQuery_eventOrderByKey_Parms), Z_Construct_UFunction_UFirebaseQuery_OrderByKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_OrderByKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_OrderByKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_OrderByKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_OrderByKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_OrderByKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseQuery_OrderByPriority_Statics
	{
		struct FirebaseQuery_eventOrderByPriority_Parms
		{
			UFirebaseQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_OrderByPriority_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventOrderByPriority_Parms, ReturnValue), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_OrderByPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_OrderByPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_OrderByPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_OrderByPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "OrderByPriority", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseQuery_eventOrderByPriority_Parms), Z_Construct_UFunction_UFirebaseQuery_OrderByPriority_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_OrderByPriority_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_OrderByPriority_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_OrderByPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_OrderByPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_OrderByPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseQuery_OrderByValue_Statics
	{
		struct FirebaseQuery_eventOrderByValue_Parms
		{
			UFirebaseQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_OrderByValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventOrderByValue_Parms, ReturnValue), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_OrderByValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_OrderByValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_OrderByValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_OrderByValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "OrderByValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseQuery_eventOrderByValue_Parms), Z_Construct_UFunction_UFirebaseQuery_OrderByValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_OrderByValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_OrderByValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_OrderByValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_OrderByValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_OrderByValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized_Statics
	{
		struct FirebaseQuery_eventSetKeepSynchronized_Parms
		{
			bool keep_sync;
		};
		static void NewProp_keep_sync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_keep_sync;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized_Statics::NewProp_keep_sync_SetBit(void* Obj)
	{
		((FirebaseQuery_eventSetKeepSynchronized_Parms*)Obj)->keep_sync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized_Statics::NewProp_keep_sync = { UE4CodeGen_Private::EPropertyClass::Bool, "keep_sync", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FirebaseQuery_eventSetKeepSynchronized_Parms), &Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized_Statics::NewProp_keep_sync_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized_Statics::NewProp_keep_sync,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "SetKeepSynchronized", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseQuery_eventSetKeepSynchronized_Parms), Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseQuery_StartAt_Statics
	{
		struct FirebaseQuery_eventStartAt_Parms
		{
			UFirebaseVariant* orderValue;
			UFirebaseQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_orderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_StartAt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventStartAt_Parms, ReturnValue), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_StartAt_Statics::NewProp_orderValue = { UE4CodeGen_Private::EPropertyClass::Object, "orderValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventStartAt_Parms, orderValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_StartAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_StartAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_StartAt_Statics::NewProp_orderValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_StartAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_StartAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "StartAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseQuery_eventStartAt_Parms), Z_Construct_UFunction_UFirebaseQuery_StartAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_StartAt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_StartAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_StartAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_StartAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_StartAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics
	{
		struct FirebaseQuery_eventStartAtChild_Parms
		{
			UFirebaseVariant* orderValue;
			FString childKey;
			UFirebaseQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_childKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_childKey;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_orderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventStartAtChild_Parms, ReturnValue), Z_Construct_UClass_UFirebaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::NewProp_childKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::NewProp_childKey = { UE4CodeGen_Private::EPropertyClass::Str, "childKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventStartAtChild_Parms, childKey), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::NewProp_childKey_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::NewProp_childKey_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::NewProp_orderValue = { UE4CodeGen_Private::EPropertyClass::Object, "orderValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseQuery_eventStartAtChild_Parms, orderValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::NewProp_childKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::NewProp_orderValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseQuery, "StartAtChild", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseQuery_eventStartAtChild_Parms), Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseQuery_StartAtChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseQuery_StartAtChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseQuery_NoRegister()
	{
		return UFirebaseQuery::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseQuery_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseQuery_EndAt, "EndAt" }, // 149268908
		{ &Z_Construct_UFunction_UFirebaseQuery_EndAtChild, "EndAtChild" }, // 4216373443
		{ &Z_Construct_UFunction_UFirebaseQuery_EqualTo, "EqualTo" }, // 2652328393
		{ &Z_Construct_UFunction_UFirebaseQuery_EqualToChild, "EqualToChild" }, // 3151058657
		{ &Z_Construct_UFunction_UFirebaseQuery_GetReference, "GetReference" }, // 3365381230
		{ &Z_Construct_UFunction_UFirebaseQuery_IsValid, "IsValid" }, // 236234229
		{ &Z_Construct_UFunction_UFirebaseQuery_LimitToFirst, "LimitToFirst" }, // 2941108593
		{ &Z_Construct_UFunction_UFirebaseQuery_LimitToLast, "LimitToLast" }, // 756010936
		{ &Z_Construct_UFunction_UFirebaseQuery_OrderByChild, "OrderByChild" }, // 24858388
		{ &Z_Construct_UFunction_UFirebaseQuery_OrderByKey, "OrderByKey" }, // 3987698830
		{ &Z_Construct_UFunction_UFirebaseQuery_OrderByPriority, "OrderByPriority" }, // 3434035749
		{ &Z_Construct_UFunction_UFirebaseQuery_OrderByValue, "OrderByValue" }, // 369758105
		{ &Z_Construct_UFunction_UFirebaseQuery_SetKeepSynchronized, "SetKeepSynchronized" }, // 296389333
		{ &Z_Construct_UFunction_UFirebaseQuery_StartAt, "StartAt" }, // 3175273420
		{ &Z_Construct_UFunction_UFirebaseQuery_StartAtChild, "StartAtChild" }, // 1202493524
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FirebaseQuery.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FirebaseQuery.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseQuery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseQuery_Statics::ClassParams = {
		&UFirebaseQuery::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseQuery_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFirebaseQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseQuery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseQuery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseQuery, 1184274391);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseQuery(Z_Construct_UClass_UFirebaseQuery, &UFirebaseQuery::StaticClass, TEXT("/Script/FireBase"), TEXT("UFirebaseQuery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseQuery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
