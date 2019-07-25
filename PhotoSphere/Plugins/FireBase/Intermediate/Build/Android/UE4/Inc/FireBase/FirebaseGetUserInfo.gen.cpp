// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FirebaseGetUserInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseGetUserInfo() {}
// Cross Module References
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseUserFail__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature();
	FIREBASE_API UScriptStruct* Z_Construct_UScriptStruct_FFireBaseUser();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseGetUserInfo_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseGetUserInfo();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseGetUserInfo_GetFirebaseUserInfo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FireBase_FireBaseUserFail__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseUserFail__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseGetUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FireBase_FireBaseUserFail__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FireBase, "FireBaseUserFail__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseUserFail__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseUserFail__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseUserFail__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FireBase_FireBaseUserFail__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature_Statics
	{
		struct _Script_FireBase_eventFireBaseGetUserSucced_Parms
		{
			FFireBaseUser userInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_userInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature_Statics::NewProp_userInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "userInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseGetUserSucced_Parms, userInfo), Z_Construct_UScriptStruct_FFireBaseUser, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature_Statics::NewProp_userInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseGetUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FireBase, "FireBaseGetUserSucced__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FireBase_eventFireBaseGetUserSucced_Parms), Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFirebaseGetUserInfo::StaticRegisterNativesUFirebaseGetUserInfo()
	{
		UClass* Class = UFirebaseGetUserInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFirebaseUserInfo", &UFirebaseGetUserInfo::execGetFirebaseUserInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseGetUserInfo_GetFirebaseUserInfo_Statics
	{
		struct FirebaseGetUserInfo_eventGetFirebaseUserInfo_Parms
		{
			UFirebaseGetUserInfo* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseGetUserInfo_GetFirebaseUserInfo_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseGetUserInfo_eventGetFirebaseUserInfo_Parms, ReturnValue), Z_Construct_UClass_UFirebaseGetUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseGetUserInfo_GetFirebaseUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseGetUserInfo_GetFirebaseUserInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseGetUserInfo_GetFirebaseUserInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FireBase" },
		{ "DisplayName", "GetFirebaseUserInfo" },
		{ "ModuleRelativePath", "Public/FirebaseGetUserInfo.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseGetUserInfo_GetFirebaseUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseGetUserInfo, "GetFirebaseUserInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FirebaseGetUserInfo_eventGetFirebaseUserInfo_Parms), Z_Construct_UFunction_UFirebaseGetUserInfo_GetFirebaseUserInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseGetUserInfo_GetFirebaseUserInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseGetUserInfo_GetFirebaseUserInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseGetUserInfo_GetFirebaseUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseGetUserInfo_GetFirebaseUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseGetUserInfo_GetFirebaseUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseGetUserInfo_NoRegister()
	{
		return UFirebaseGetUserInfo::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseGetUserInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseGetUserInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseGetUserInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseGetUserInfo_GetFirebaseUserInfo, "GetFirebaseUserInfo" }, // 3920239983
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseGetUserInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirebaseGetUserInfo.h" },
		{ "ModuleRelativePath", "Public/FirebaseGetUserInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseGetUserInfo_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirebaseGetUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFirebaseGetUserInfo_Statics::NewProp_OnFail = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFail", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFirebaseGetUserInfo, OnFail), Z_Construct_UDelegateFunction_FireBase_FireBaseUserFail__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFirebaseGetUserInfo_Statics::NewProp_OnFail_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseGetUserInfo_Statics::NewProp_OnFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseGetUserInfo_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirebaseGetUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFirebaseGetUserInfo_Statics::NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFirebaseGetUserInfo, OnSuccess), Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFirebaseGetUserInfo_Statics::NewProp_OnSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseGetUserInfo_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirebaseGetUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseGetUserInfo_Statics::NewProp_OnFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseGetUserInfo_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseGetUserInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseGetUserInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseGetUserInfo_Statics::ClassParams = {
		&UFirebaseGetUserInfo::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFirebaseGetUserInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFirebaseGetUserInfo_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseGetUserInfo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFirebaseGetUserInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseGetUserInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseGetUserInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseGetUserInfo, 2486292257);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseGetUserInfo(Z_Construct_UClass_UFirebaseGetUserInfo, &UFirebaseGetUserInfo::StaticClass, TEXT("/Script/FireBase"), TEXT("UFirebaseGetUserInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseGetUserInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
