// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FirebaseSetPriorityCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseSetPriorityCallback() {}
// Cross Module References
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseSetPriorityCallback_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseSetPriorityCallback();
	FIREBASE_API UClass* Z_Construct_UClass_UAsyncWaitOperateFinish();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseVariant_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister();
// End Cross Module References
	void UFirebaseSetPriorityCallback::StaticRegisterNativesUFirebaseSetPriorityCallback()
	{
		UClass* Class = UFirebaseSetPriorityCallback::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPriority", &UFirebaseSetPriorityCallback::execSetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics
	{
		struct FirebaseSetPriorityCallback_eventSetPriority_Parms
		{
			UFirebaseDatabaseRef* databaseRef;
			UFirebaseVariant* priority;
			UFirebaseSetPriorityCallback* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_priority;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_databaseRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseSetPriorityCallback_eventSetPriority_Parms, ReturnValue), Z_Construct_UClass_UFirebaseSetPriorityCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics::NewProp_priority = { UE4CodeGen_Private::EPropertyClass::Object, "priority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseSetPriorityCallback_eventSetPriority_Parms, priority), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics::NewProp_databaseRef = { UE4CodeGen_Private::EPropertyClass::Object, "databaseRef", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseSetPriorityCallback_eventSetPriority_Parms, databaseRef), Z_Construct_UClass_UFirebaseDatabaseRef_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics::NewProp_priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics::NewProp_databaseRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FireBase" },
		{ "DisplayName", "SetPriority" },
		{ "ModuleRelativePath", "Public/FirebaseSetPriorityCallback.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseSetPriorityCallback, "SetPriority", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FirebaseSetPriorityCallback_eventSetPriority_Parms), Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseSetPriorityCallback_NoRegister()
	{
		return UFirebaseSetPriorityCallback::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseSetPriorityCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseSetPriorityCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAsyncWaitOperateFinish,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseSetPriorityCallback_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseSetPriorityCallback_SetPriority, "SetPriority" }, // 1560127912
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseSetPriorityCallback_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirebaseSetPriorityCallback.h" },
		{ "ModuleRelativePath", "Public/FirebaseSetPriorityCallback.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseSetPriorityCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseSetPriorityCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseSetPriorityCallback_Statics::ClassParams = {
		&UFirebaseSetPriorityCallback::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseSetPriorityCallback_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFirebaseSetPriorityCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseSetPriorityCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseSetPriorityCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseSetPriorityCallback, 3995646746);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseSetPriorityCallback(Z_Construct_UClass_UFirebaseSetPriorityCallback, &UFirebaseSetPriorityCallback::StaticClass, TEXT("/Script/FireBase"), TEXT("UFirebaseSetPriorityCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseSetPriorityCallback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
