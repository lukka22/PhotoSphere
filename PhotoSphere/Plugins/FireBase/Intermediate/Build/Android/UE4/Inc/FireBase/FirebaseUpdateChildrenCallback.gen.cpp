// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FirebaseUpdateChildrenCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseUpdateChildrenCallback() {}
// Cross Module References
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseUpdateChildrenCallback_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseUpdateChildrenCallback();
	FIREBASE_API UClass* Z_Construct_UClass_UAsyncWaitOperateFinish();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseVariant_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister();
// End Cross Module References
	void UFirebaseUpdateChildrenCallback::StaticRegisterNativesUFirebaseUpdateChildrenCallback()
	{
		UClass* Class = UFirebaseUpdateChildrenCallback::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateChildren", &UFirebaseUpdateChildrenCallback::execUpdateChildren },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics
	{
		struct FirebaseUpdateChildrenCallback_eventUpdateChildren_Parms
		{
			UFirebaseDatabaseRef* databaseRef;
			TMap<FString,UFirebaseVariant*> value;
			UFirebaseUpdateChildrenCallback* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_databaseRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseUpdateChildrenCallback_eventUpdateChildren_Parms, ReturnValue), Z_Construct_UClass_UFirebaseUpdateChildrenCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Map, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FirebaseUpdateChildrenCallback_eventUpdateChildren_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::NewProp_value_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "value_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::NewProp_value_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::NewProp_databaseRef = { UE4CodeGen_Private::EPropertyClass::Object, "databaseRef", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseUpdateChildrenCallback_eventUpdateChildren_Parms, databaseRef), Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::NewProp_value_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::NewProp_value_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::NewProp_databaseRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FireBase" },
		{ "DisplayName", "UpdateChildren" },
		{ "ModuleRelativePath", "Public/FirebaseUpdateChildrenCallback.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseUpdateChildrenCallback, "UpdateChildren", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FirebaseUpdateChildrenCallback_eventUpdateChildren_Parms), Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseUpdateChildrenCallback_NoRegister()
	{
		return UFirebaseUpdateChildrenCallback::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseUpdateChildrenCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseUpdateChildrenCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAsyncWaitOperateFinish,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseUpdateChildrenCallback_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseUpdateChildrenCallback_UpdateChildren, "UpdateChildren" }, // 3477419140
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseUpdateChildrenCallback_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirebaseUpdateChildrenCallback.h" },
		{ "ModuleRelativePath", "Public/FirebaseUpdateChildrenCallback.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseUpdateChildrenCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseUpdateChildrenCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseUpdateChildrenCallback_Statics::ClassParams = {
		&UFirebaseUpdateChildrenCallback::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseUpdateChildrenCallback_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFirebaseUpdateChildrenCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseUpdateChildrenCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseUpdateChildrenCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseUpdateChildrenCallback, 633943125);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseUpdateChildrenCallback(Z_Construct_UClass_UFirebaseUpdateChildrenCallback, &UFirebaseUpdateChildrenCallback::StaticClass, TEXT("/Script/FireBase"), TEXT("UFirebaseUpdateChildrenCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseUpdateChildrenCallback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
