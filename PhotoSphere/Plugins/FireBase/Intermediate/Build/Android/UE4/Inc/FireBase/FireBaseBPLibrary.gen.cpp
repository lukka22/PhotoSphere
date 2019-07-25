// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FireBaseBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireBaseBPLibrary() {}
// Cross Module References
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseSignOutDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature();
	FIREBASE_API UScriptStruct* Z_Construct_UScriptStruct_FFireBaseUser();
	FIREBASE_API UClass* Z_Construct_UClass_UFireBaseBPLibrary_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFireBaseBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFireBaseBPLibrary_FireBaseInitialize();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFireBaseBPLibrary_FirebaseSignout();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FireBase_FireBaseSignOutDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseSignOutDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FireBaseBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FireBase_FireBaseSignOutDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FireBase, "FireBaseSignOutDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseSignOutDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseSignOutDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseSignOutDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FireBase_FireBaseSignOutDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature_Statics
	{
		struct _Script_FireBase_eventFireBaseSignSuccessDelegate_Parms
		{
			FFireBaseUser User;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature_Statics::NewProp_User = { UE4CodeGen_Private::EPropertyClass::Struct, "User", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FireBase_eventFireBaseSignSuccessDelegate_Parms, User), Z_Construct_UScriptStruct_FFireBaseUser, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature_Statics::NewProp_User,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FireBaseBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FireBase, "FireBaseSignSuccessDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FireBase_eventFireBaseSignSuccessDelegate_Parms), Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FireBase_FireBaseSignSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FFireBaseUser::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASE_API uint32 Get_Z_Construct_UScriptStruct_FFireBaseUser_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFireBaseUser, Z_Construct_UPackage__Script_FireBase(), TEXT("FireBaseUser"), sizeof(FFireBaseUser), Get_Z_Construct_UScriptStruct_FFireBaseUser_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFireBaseUser(FFireBaseUser::StaticStruct, TEXT("/Script/FireBase"), TEXT("FireBaseUser"), false, nullptr, nullptr);
static struct FScriptStruct_FireBase_StaticRegisterNativesFFireBaseUser
{
	FScriptStruct_FireBase_StaticRegisterNativesFFireBaseUser()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FireBaseUser")),new UScriptStruct::TCppStructOps<FFireBaseUser>);
	}
} ScriptStruct_FireBase_StaticRegisterNativesFFireBaseUser;
	struct Z_Construct_UScriptStruct_FFireBaseUser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAnonymous_MetaData[];
#endif
		static void NewProp_isAnonymous_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAnonymous;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_photoUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_photoUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_uid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_displayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_displayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_email;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFireBaseUser_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FireBaseBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFireBaseUser>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_isAnonymous_MetaData[] = {
		{ "Category", "FireBaseUser" },
		{ "ModuleRelativePath", "Public/FireBaseBPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_isAnonymous_SetBit(void* Obj)
	{
		((FFireBaseUser*)Obj)->isAnonymous = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_isAnonymous = { UE4CodeGen_Private::EPropertyClass::Bool, "isAnonymous", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFireBaseUser), &Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_isAnonymous_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_isAnonymous_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_isAnonymous_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_photoUrl_MetaData[] = {
		{ "Category", "FireBaseUser" },
		{ "ModuleRelativePath", "Public/FireBaseBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_photoUrl = { UE4CodeGen_Private::EPropertyClass::Str, "photoUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FFireBaseUser, photoUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_photoUrl_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_photoUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_uid_MetaData[] = {
		{ "Category", "FireBaseUser" },
		{ "ModuleRelativePath", "Public/FireBaseBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_uid = { UE4CodeGen_Private::EPropertyClass::Str, "uid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FFireBaseUser, uid), METADATA_PARAMS(Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_uid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_uid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_displayName_MetaData[] = {
		{ "Category", "FireBaseUser" },
		{ "ModuleRelativePath", "Public/FireBaseBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_displayName = { UE4CodeGen_Private::EPropertyClass::Str, "displayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FFireBaseUser, displayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_displayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_displayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_email_MetaData[] = {
		{ "Category", "FireBaseUser" },
		{ "ModuleRelativePath", "Public/FireBaseBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_email = { UE4CodeGen_Private::EPropertyClass::Str, "email", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FFireBaseUser, email), METADATA_PARAMS(Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_email_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_email_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFireBaseUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_isAnonymous,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_photoUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_uid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_displayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFireBaseUser_Statics::NewProp_email,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFireBaseUser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
		nullptr,
		&NewStructOps,
		"FireBaseUser",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFireBaseUser),
		alignof(FFireBaseUser),
		Z_Construct_UScriptStruct_FFireBaseUser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFireBaseUser_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFireBaseUser_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFireBaseUser_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFireBaseUser()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFireBaseUser_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FireBase();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FireBaseUser"), sizeof(FFireBaseUser), Get_Z_Construct_UScriptStruct_FFireBaseUser_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFireBaseUser_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFireBaseUser_CRC() { return 3856417125U; }
	void UFireBaseBPLibrary::StaticRegisterNativesUFireBaseBPLibrary()
	{
		UClass* Class = UFireBaseBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireBaseInitialize", &UFireBaseBPLibrary::execFireBaseInitialize },
			{ "FirebaseSignout", &UFireBaseBPLibrary::execFirebaseSignout },
			{ "isFirebaseUserLogin", &UFireBaseBPLibrary::execisFirebaseUserLogin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFireBaseBPLibrary_FireBaseInitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFireBaseBPLibrary_FireBaseInitialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FireBaseBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFireBaseBPLibrary_FireBaseInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFireBaseBPLibrary, "FireBaseInitialize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFireBaseBPLibrary_FireBaseInitialize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFireBaseBPLibrary_FireBaseInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFireBaseBPLibrary_FireBaseInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFireBaseBPLibrary_FireBaseInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFireBaseBPLibrary_FirebaseSignout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFireBaseBPLibrary_FirebaseSignout_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FireBaseBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFireBaseBPLibrary_FirebaseSignout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFireBaseBPLibrary, "FirebaseSignout", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFireBaseBPLibrary_FirebaseSignout_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFireBaseBPLibrary_FirebaseSignout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFireBaseBPLibrary_FirebaseSignout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFireBaseBPLibrary_FirebaseSignout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin_Statics
	{
		struct FireBaseBPLibrary_eventisFirebaseUserLogin_Parms
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
	void Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FireBaseBPLibrary_eventisFirebaseUserLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FireBaseBPLibrary_eventisFirebaseUserLogin_Parms), &Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FireBaseBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFireBaseBPLibrary, "isFirebaseUserLogin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FireBaseBPLibrary_eventisFirebaseUserLogin_Parms), Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFireBaseBPLibrary_NoRegister()
	{
		return UFireBaseBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFireBaseBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireBaseBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFireBaseBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFireBaseBPLibrary_FireBaseInitialize, "FireBaseInitialize" }, // 2056047248
		{ &Z_Construct_UFunction_UFireBaseBPLibrary_FirebaseSignout, "FirebaseSignout" }, // 611063454
		{ &Z_Construct_UFunction_UFireBaseBPLibrary_isFirebaseUserLogin, "isFirebaseUserLogin" }, // 1705180511
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireBaseBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FireBaseBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FireBaseBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireBaseBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireBaseBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFireBaseBPLibrary_Statics::ClassParams = {
		&UFireBaseBPLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFireBaseBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFireBaseBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireBaseBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFireBaseBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFireBaseBPLibrary, 79972792);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFireBaseBPLibrary(Z_Construct_UClass_UFireBaseBPLibrary, &UFireBaseBPLibrary::StaticClass, TEXT("/Script/FireBase"), TEXT("UFireBaseBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireBaseBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
