// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FirebaseDataSnapshot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseDataSnapshot() {}
// Cross Module References
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseDataSnapshot_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseDataSnapshot();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_Child();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_Children();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_ChildrenCount();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_GetKey();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_GetValue();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseVariant_NoRegister();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid();
// End Cross Module References
	void UFirebaseDataSnapshot::StaticRegisterNativesUFirebaseDataSnapshot()
	{
		UClass* Class = UFirebaseDataSnapshot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Child", &UFirebaseDataSnapshot::execChild },
			{ "Children", &UFirebaseDataSnapshot::execChildren },
			{ "ChildrenCount", &UFirebaseDataSnapshot::execChildrenCount },
			{ "GetKey", &UFirebaseDataSnapshot::execGetKey },
			{ "GetValue", &UFirebaseDataSnapshot::execGetValue },
			{ "HasChild", &UFirebaseDataSnapshot::execHasChild },
			{ "HasChildren", &UFirebaseDataSnapshot::execHasChildren },
			{ "IsValid", &UFirebaseDataSnapshot::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics
	{
		struct FirebaseDataSnapshot_eventChild_Parms
		{
			FString path;
			UFirebaseDataSnapshot* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseDataSnapshot_eventChild_Parms, ReturnValue), Z_Construct_UClass_UFirebaseDataSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::NewProp_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::NewProp_path = { UE4CodeGen_Private::EPropertyClass::Str, "path", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseDataSnapshot_eventChild_Parms, path), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::NewProp_path_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::NewProp_path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDataSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDataSnapshot, "Child", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseDataSnapshot_eventChild_Parms), Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_Child()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDataSnapshot_Child_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDataSnapshot_Children_Statics
	{
		struct FirebaseDataSnapshot_eventChildren_Parms
		{
			TArray<UFirebaseDataSnapshot*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseDataSnapshot_Children_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseDataSnapshot_eventChildren_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseDataSnapshot_Children_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UFirebaseDataSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDataSnapshot_Children_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDataSnapshot_Children_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDataSnapshot_Children_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDataSnapshot_Children_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDataSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDataSnapshot_Children_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDataSnapshot, "Children", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseDataSnapshot_eventChildren_Parms), Z_Construct_UFunction_UFirebaseDataSnapshot_Children_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_Children_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDataSnapshot_Children_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_Children_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_Children()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDataSnapshot_Children_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDataSnapshot_ChildrenCount_Statics
	{
		struct FirebaseDataSnapshot_eventChildrenCount_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFirebaseDataSnapshot_ChildrenCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseDataSnapshot_eventChildrenCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDataSnapshot_ChildrenCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDataSnapshot_ChildrenCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDataSnapshot_ChildrenCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDataSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDataSnapshot_ChildrenCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDataSnapshot, "ChildrenCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseDataSnapshot_eventChildrenCount_Parms), Z_Construct_UFunction_UFirebaseDataSnapshot_ChildrenCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_ChildrenCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDataSnapshot_ChildrenCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_ChildrenCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_ChildrenCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDataSnapshot_ChildrenCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDataSnapshot_GetKey_Statics
	{
		struct FirebaseDataSnapshot_eventGetKey_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseDataSnapshot_GetKey_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseDataSnapshot_eventGetKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDataSnapshot_GetKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDataSnapshot_GetKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDataSnapshot_GetKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDataSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDataSnapshot_GetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDataSnapshot, "GetKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseDataSnapshot_eventGetKey_Parms), Z_Construct_UFunction_UFirebaseDataSnapshot_GetKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_GetKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDataSnapshot_GetKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_GetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_GetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDataSnapshot_GetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDataSnapshot_GetValue_Statics
	{
		struct FirebaseDataSnapshot_eventGetValue_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseDataSnapshot_GetValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseDataSnapshot_eventGetValue_Parms, ReturnValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDataSnapshot_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDataSnapshot_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDataSnapshot_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDataSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDataSnapshot_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDataSnapshot, "GetValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseDataSnapshot_eventGetValue_Parms), Z_Construct_UFunction_UFirebaseDataSnapshot_GetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_GetValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDataSnapshot_GetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDataSnapshot_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics
	{
		struct FirebaseDataSnapshot_eventHasChild_Parms
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
	void Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirebaseDataSnapshot_eventHasChild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FirebaseDataSnapshot_eventHasChild_Parms), &Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::NewProp_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::NewProp_path = { UE4CodeGen_Private::EPropertyClass::Str, "path", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseDataSnapshot_eventHasChild_Parms, path), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::NewProp_path_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::NewProp_path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDataSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDataSnapshot, "HasChild", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseDataSnapshot_eventHasChild_Parms), Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren_Statics
	{
		struct FirebaseDataSnapshot_eventHasChildren_Parms
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
	void Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirebaseDataSnapshot_eventHasChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FirebaseDataSnapshot_eventHasChildren_Parms), &Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDataSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDataSnapshot, "HasChildren", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseDataSnapshot_eventHasChildren_Parms), Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid_Statics
	{
		struct FirebaseDataSnapshot_eventIsValid_Parms
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
	void Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirebaseDataSnapshot_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FirebaseDataSnapshot_eventIsValid_Parms), &Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseDataSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseDataSnapshot, "IsValid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FirebaseDataSnapshot_eventIsValid_Parms), Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseDataSnapshot_NoRegister()
	{
		return UFirebaseDataSnapshot::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseDataSnapshot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseDataSnapshot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseDataSnapshot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseDataSnapshot_Child, "Child" }, // 1230247747
		{ &Z_Construct_UFunction_UFirebaseDataSnapshot_Children, "Children" }, // 1450583858
		{ &Z_Construct_UFunction_UFirebaseDataSnapshot_ChildrenCount, "ChildrenCount" }, // 1529118369
		{ &Z_Construct_UFunction_UFirebaseDataSnapshot_GetKey, "GetKey" }, // 1816182323
		{ &Z_Construct_UFunction_UFirebaseDataSnapshot_GetValue, "GetValue" }, // 1250603875
		{ &Z_Construct_UFunction_UFirebaseDataSnapshot_HasChild, "HasChild" }, // 3470946518
		{ &Z_Construct_UFunction_UFirebaseDataSnapshot_HasChildren, "HasChildren" }, // 2537256844
		{ &Z_Construct_UFunction_UFirebaseDataSnapshot_IsValid, "IsValid" }, // 1392114264
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseDataSnapshot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FirebaseDataSnapshot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FirebaseDataSnapshot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseDataSnapshot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseDataSnapshot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseDataSnapshot_Statics::ClassParams = {
		&UFirebaseDataSnapshot::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseDataSnapshot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFirebaseDataSnapshot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseDataSnapshot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseDataSnapshot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseDataSnapshot, 686411012);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseDataSnapshot(Z_Construct_UClass_UFirebaseDataSnapshot, &UFirebaseDataSnapshot::StaticClass, TEXT("/Script/FireBase"), TEXT("UFirebaseDataSnapshot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseDataSnapshot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
