// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FirebaseMutableData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseMutableData() {}
// Cross Module References
	FIREBASE_API UEnum* Z_Construct_UEnum_FireBase_TransactionResult();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseMutableData_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseMutableData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseMutableData_Child();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseMutableData_children();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseMutableData_children_count();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseMutableData_HasChild();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseMutableData_key();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseMutableData_priority();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseVariant_NoRegister();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseMutableData_set_priority();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseMutableData_set_value();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseMutableData_value();
// End Cross Module References
	static UEnum* TransactionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FireBase_TransactionResult, Z_Construct_UPackage__Script_FireBase(), TEXT("TransactionResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TransactionResult(TransactionResult_StaticEnum, TEXT("/Script/FireBase"), TEXT("TransactionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FireBase_TransactionResult_CRC() { return 420405068U; }
	UEnum* Z_Construct_UEnum_FireBase_TransactionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FireBase();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TransactionResult"), 0, Get_Z_Construct_UEnum_FireBase_TransactionResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TransactionResult::kTransactionResultSuccess", (int64)TransactionResult::kTransactionResultSuccess },
				{ "TransactionResult::kTransactionResultAbort", (int64)TransactionResult::kTransactionResultAbort },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "kTransactionResultAbort.DisplayName", "kTransactionResultAbort" },
				{ "kTransactionResultSuccess.DisplayName", "kTransactionResultSuccess" },
				{ "ModuleRelativePath", "Public/FirebaseMutableData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FireBase,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"TransactionResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"TransactionResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UFirebaseMutableData::StaticRegisterNativesUFirebaseMutableData()
	{
		UClass* Class = UFirebaseMutableData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Child", &UFirebaseMutableData::execChild },
			{ "children", &UFirebaseMutableData::execchildren },
			{ "children_count", &UFirebaseMutableData::execchildren_count },
			{ "HasChild", &UFirebaseMutableData::execHasChild },
			{ "key", &UFirebaseMutableData::execkey },
			{ "priority", &UFirebaseMutableData::execpriority },
			{ "set_priority", &UFirebaseMutableData::execset_priority },
			{ "set_value", &UFirebaseMutableData::execset_value },
			{ "value", &UFirebaseMutableData::execvalue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseMutableData_Child_Statics
	{
		struct FirebaseMutableData_eventChild_Parms
		{
			FString path;
			UFirebaseMutableData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseMutableData_eventChild_Parms, ReturnValue), Z_Construct_UClass_UFirebaseMutableData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::NewProp_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::NewProp_path = { UE4CodeGen_Private::EPropertyClass::Str, "path", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseMutableData_eventChild_Parms, path), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::NewProp_path_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::NewProp_path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseMutableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseMutableData, "Child", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseMutableData_eventChild_Parms), Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseMutableData_Child()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseMutableData_Child_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseMutableData_children_Statics
	{
		struct FirebaseMutableData_eventchildren_Parms
		{
			TArray<UFirebaseMutableData*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseMutableData_children_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseMutableData_eventchildren_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseMutableData_children_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UFirebaseMutableData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseMutableData_children_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseMutableData_children_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseMutableData_children_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseMutableData_children_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseMutableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseMutableData_children_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseMutableData, "children", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseMutableData_eventchildren_Parms), Z_Construct_UFunction_UFirebaseMutableData_children_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_children_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseMutableData_children_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_children_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseMutableData_children()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseMutableData_children_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseMutableData_children_count_Statics
	{
		struct FirebaseMutableData_eventchildren_count_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFirebaseMutableData_children_count_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseMutableData_eventchildren_count_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseMutableData_children_count_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseMutableData_children_count_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseMutableData_children_count_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseMutableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseMutableData_children_count_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseMutableData, "children_count", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseMutableData_eventchildren_count_Parms), Z_Construct_UFunction_UFirebaseMutableData_children_count_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_children_count_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseMutableData_children_count_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_children_count_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseMutableData_children_count()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseMutableData_children_count_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics
	{
		struct FirebaseMutableData_eventHasChild_Parms
		{
			FString path;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirebaseMutableData_eventHasChild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FirebaseMutableData_eventHasChild_Parms), &Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::NewProp_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::NewProp_path = { UE4CodeGen_Private::EPropertyClass::Str, "path", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseMutableData_eventHasChild_Parms, path), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::NewProp_path_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::NewProp_path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseMutableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseMutableData, "HasChild", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseMutableData_eventHasChild_Parms), Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseMutableData_HasChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseMutableData_HasChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseMutableData_key_Statics
	{
		struct FirebaseMutableData_eventkey_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseMutableData_key_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseMutableData_eventkey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseMutableData_key_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseMutableData_key_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseMutableData_key_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseMutableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseMutableData_key_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseMutableData, "key", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseMutableData_eventkey_Parms), Z_Construct_UFunction_UFirebaseMutableData_key_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_key_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseMutableData_key_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_key_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseMutableData_key()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseMutableData_key_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseMutableData_priority_Statics
	{
		struct FirebaseMutableData_eventpriority_Parms
		{
			UFirebaseVariant* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseMutableData_priority_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseMutableData_eventpriority_Parms, ReturnValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseMutableData_priority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseMutableData_priority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseMutableData_priority_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseMutableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseMutableData_priority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseMutableData, "priority", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseMutableData_eventpriority_Parms), Z_Construct_UFunction_UFirebaseMutableData_priority_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_priority_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseMutableData_priority_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_priority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseMutableData_priority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseMutableData_priority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseMutableData_set_priority_Statics
	{
		struct FirebaseMutableData_eventset_priority_Parms
		{
			UFirebaseVariant* value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseMutableData_set_priority_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Object, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseMutableData_eventset_priority_Parms, value), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseMutableData_set_priority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseMutableData_set_priority_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseMutableData_set_priority_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseMutableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseMutableData_set_priority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseMutableData, "set_priority", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseMutableData_eventset_priority_Parms), Z_Construct_UFunction_UFirebaseMutableData_set_priority_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_set_priority_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseMutableData_set_priority_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_set_priority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseMutableData_set_priority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseMutableData_set_priority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseMutableData_set_value_Statics
	{
		struct FirebaseMutableData_eventset_value_Parms
		{
			UFirebaseVariant* value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseMutableData_set_value_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Object, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseMutableData_eventset_value_Parms, value), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseMutableData_set_value_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseMutableData_set_value_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseMutableData_set_value_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseMutableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseMutableData_set_value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseMutableData, "set_value", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FirebaseMutableData_eventset_value_Parms), Z_Construct_UFunction_UFirebaseMutableData_set_value_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_set_value_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseMutableData_set_value_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_set_value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseMutableData_set_value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseMutableData_set_value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseMutableData_value_Statics
	{
		struct FirebaseMutableData_eventvalue_Parms
		{
			UFirebaseVariant* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseMutableData_value_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseMutableData_eventvalue_Parms, ReturnValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseMutableData_value_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseMutableData_value_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseMutableData_value_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseMutableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseMutableData_value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseMutableData, "value", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseMutableData_eventvalue_Parms), Z_Construct_UFunction_UFirebaseMutableData_value_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_value_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseMutableData_value_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseMutableData_value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseMutableData_value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseMutableData_value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseMutableData_NoRegister()
	{
		return UFirebaseMutableData::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseMutableData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseMutableData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseMutableData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseMutableData_Child, "Child" }, // 1193322888
		{ &Z_Construct_UFunction_UFirebaseMutableData_children, "children" }, // 3501924526
		{ &Z_Construct_UFunction_UFirebaseMutableData_children_count, "children_count" }, // 3411707748
		{ &Z_Construct_UFunction_UFirebaseMutableData_HasChild, "HasChild" }, // 343450560
		{ &Z_Construct_UFunction_UFirebaseMutableData_key, "key" }, // 3245545998
		{ &Z_Construct_UFunction_UFirebaseMutableData_priority, "priority" }, // 3697242073
		{ &Z_Construct_UFunction_UFirebaseMutableData_set_priority, "set_priority" }, // 1482200279
		{ &Z_Construct_UFunction_UFirebaseMutableData_set_value, "set_value" }, // 209881936
		{ &Z_Construct_UFunction_UFirebaseMutableData_value, "value" }, // 195626832
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseMutableData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FirebaseMutableData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FirebaseMutableData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseMutableData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseMutableData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseMutableData_Statics::ClassParams = {
		&UFirebaseMutableData::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseMutableData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFirebaseMutableData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseMutableData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseMutableData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseMutableData, 1297357502);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseMutableData(Z_Construct_UClass_UFirebaseMutableData, &UFirebaseMutableData::StaticClass, TEXT("/Script/FireBase"), TEXT("UFirebaseMutableData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseMutableData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
