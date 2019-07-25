// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireBase_init() {}
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseSignOutDelegate__DelegateSignature();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseUserFail__DelegateSignature();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FireBase()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FireBase_FireBaseSignOutDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FireBase_FireBaseFinishDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FireBase_FireBaseChildAddListenerDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FireBase_FireBaseChildChangeListenerDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FireBase_FireBaseChildMoveListenerDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FireBase_FireBaseChildRemoveListenerDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FireBase_FireBaseGetUserSucced__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FireBase_FireBaseUserFail__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FireBase_FireBaseGetValueDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FireBase_FireBaseTransactionDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FireBase_FireBaseSetValueDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FireBase_FireBaseValueListenerDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/FireBase",
				PKG_CompiledIn | 0x00000000,
				0xD18FB347,
				0x16D73886,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
