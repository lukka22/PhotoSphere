// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireBase/Public/FirebaseVariant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseVariant() {}
// Cross Module References
	FIREBASE_API UEnum* Z_Construct_UEnum_FireBase_VariantType();
	UPackage* Z_Construct_UPackage__Script_FireBase();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseVariant_NoRegister();
	FIREBASE_API UClass* Z_Construct_UClass_UFirebaseVariant();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseVariant_CreateVariantString();
	FIREBASE_API UFunction* Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector();
// End Cross Module References
	static UEnum* VariantType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FireBase_VariantType, Z_Construct_UPackage__Script_FireBase(), TEXT("VariantType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_VariantType(VariantType_StaticEnum, TEXT("/Script/FireBase"), TEXT("VariantType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FireBase_VariantType_CRC() { return 1118980781U; }
	UEnum* Z_Construct_UEnum_FireBase_VariantType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FireBase();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("VariantType"), 0, Get_Z_Construct_UEnum_FireBase_VariantType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VariantType::Null", (int64)VariantType::Null },
				{ "VariantType::Int", (int64)VariantType::Int },
				{ "VariantType::Float", (int64)VariantType::Float },
				{ "VariantType::Bool", (int64)VariantType::Bool },
				{ "VariantType::String", (int64)VariantType::String },
				{ "VariantType::Vector", (int64)VariantType::Vector },
				{ "VariantType::Map", (int64)VariantType::Map },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Bool.DisplayName", "Bool" },
				{ "Float.DisplayName", "Float" },
				{ "Int.DisplayName", "Int" },
				{ "Map.DisplayName", "Map" },
				{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
				{ "Null.DisplayName", "Null" },
				{ "String.DisplayName", "String" },
				{ "Vector.DisplayName", "Vector" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FireBase,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"VariantType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"VariantType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UFirebaseVariant::StaticRegisterNativesUFirebaseVariant()
	{
		UClass* Class = UFirebaseVariant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateVariantBool", &UFirebaseVariant::execCreateVariantBool },
			{ "CreateVariantFloat", &UFirebaseVariant::execCreateVariantFloat },
			{ "CreateVariantInt", &UFirebaseVariant::execCreateVariantInt },
			{ "CreateVariantMap", &UFirebaseVariant::execCreateVariantMap },
			{ "CreateVariantString", &UFirebaseVariant::execCreateVariantString },
			{ "CreateVariantVector", &UFirebaseVariant::execCreateVariantVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics
	{
		struct FirebaseVariant_eventCreateVariantBool_Parms
		{
			bool value;
			UFirebaseVariant* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseVariant_eventCreateVariantBool_Parms, ReturnValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics::NewProp_value_SetBit(void* Obj)
	{
		((FirebaseVariant_eventCreateVariantBool_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Bool, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FirebaseVariant_eventCreateVariantBool_Parms), &Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseVariant, "CreateVariantBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FirebaseVariant_eventCreateVariantBool_Parms), Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat_Statics
	{
		struct FirebaseVariant_eventCreateVariantFloat_Parms
		{
			float value;
			UFirebaseVariant* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseVariant_eventCreateVariantFloat_Parms, ReturnValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseVariant_eventCreateVariantFloat_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseVariant, "CreateVariantFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FirebaseVariant_eventCreateVariantFloat_Parms), Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt_Statics
	{
		struct FirebaseVariant_eventCreateVariantInt_Parms
		{
			int32 value;
			UFirebaseVariant* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseVariant_eventCreateVariantInt_Parms, ReturnValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Int, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseVariant_eventCreateVariantInt_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseVariant, "CreateVariantInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FirebaseVariant_eventCreateVariantInt_Parms), Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics
	{
		struct FirebaseVariant_eventCreateVariantMap_Parms
		{
			TMap<FString,UFirebaseVariant*> value;
			UFirebaseVariant* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseVariant_eventCreateVariantMap_Parms, ReturnValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Map, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FirebaseVariant_eventCreateVariantMap_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::NewProp_value_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "value_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::NewProp_value_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::NewProp_value_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::NewProp_value_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseVariant, "CreateVariantMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FirebaseVariant_eventCreateVariantMap_Parms), Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics
	{
		struct FirebaseVariant_eventCreateVariantString_Parms
		{
			FString value;
			UFirebaseVariant* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseVariant_eventCreateVariantString_Parms, ReturnValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Str, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FirebaseVariant_eventCreateVariantString_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseVariant, "CreateVariantString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FirebaseVariant_eventCreateVariantString_Parms), Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseVariant_CreateVariantString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseVariant_CreateVariantString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics
	{
		struct FirebaseVariant_eventCreateVariantVector_Parms
		{
			TArray<UFirebaseVariant*> value;
			UFirebaseVariant* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FirebaseVariant_eventCreateVariantVector_Parms, ReturnValue), Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Array, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FirebaseVariant_eventCreateVariantVector_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::NewProp_value_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::NewProp_value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseVariant, "CreateVariantVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FirebaseVariant_eventCreateVariantVector_Parms), Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseVariant_NoRegister()
	{
		return UFirebaseVariant::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseVariant_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MapValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapValue_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapValue_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[];
#endif
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseVariant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FireBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseVariant_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseVariant_CreateVariantBool, "CreateVariantBool" }, // 2111145650
		{ &Z_Construct_UFunction_UFirebaseVariant_CreateVariantFloat, "CreateVariantFloat" }, // 1740351753
		{ &Z_Construct_UFunction_UFirebaseVariant_CreateVariantInt, "CreateVariantInt" }, // 1206632944
		{ &Z_Construct_UFunction_UFirebaseVariant_CreateVariantMap, "CreateVariantMap" }, // 4069412634
		{ &Z_Construct_UFunction_UFirebaseVariant_CreateVariantString, "CreateVariantString" }, // 3670426357
		{ &Z_Construct_UFunction_UFirebaseVariant_CreateVariantVector, "CreateVariantVector" }, // 1222860104
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseVariant_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FirebaseVariant.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_MapValue_MetaData[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_MapValue = { UE4CodeGen_Private::EPropertyClass::Map, "MapValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFirebaseVariant, MapValue), METADATA_PARAMS(Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_MapValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_MapValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_MapValue_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "MapValue_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_MapValue_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "MapValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_VectorValue_MetaData[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_VectorValue = { UE4CodeGen_Private::EPropertyClass::Array, "VectorValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFirebaseVariant, VectorValue), METADATA_PARAMS(Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_VectorValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_VectorValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_VectorValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "VectorValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UFirebaseVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_StringValue_MetaData[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_StringValue = { UE4CodeGen_Private::EPropertyClass::Str, "StringValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFirebaseVariant, StringValue), METADATA_PARAMS(Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_StringValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_StringValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_BoolValue_MetaData[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
	};
#endif
	void Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((UFirebaseVariant*)Obj)->BoolValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_BoolValue = { UE4CodeGen_Private::EPropertyClass::Bool, "BoolValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFirebaseVariant), &Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_BoolValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_BoolValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_FloatValue = { UE4CodeGen_Private::EPropertyClass::Float, "FloatValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFirebaseVariant, FloatValue), METADATA_PARAMS(Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_FloatValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_IntValue_MetaData[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_IntValue = { UE4CodeGen_Private::EPropertyClass::Int, "IntValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFirebaseVariant, IntValue), METADATA_PARAMS(Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_IntValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "FireBase" },
		{ "ModuleRelativePath", "Public/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_DataType = { UE4CodeGen_Private::EPropertyClass::Enum, "DataType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFirebaseVariant, DataType), Z_Construct_UEnum_FireBase_VariantType, METADATA_PARAMS(Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_DataType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_DataType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_DataType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirebaseVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_MapValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_MapValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_MapValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_VectorValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_VectorValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_StringValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_BoolValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_FloatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_IntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseVariant_Statics::NewProp_DataType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseVariant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseVariant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseVariant_Statics::ClassParams = {
		&UFirebaseVariant::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFirebaseVariant_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFirebaseVariant_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseVariant_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFirebaseVariant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseVariant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseVariant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseVariant, 3904863706);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseVariant(Z_Construct_UClass_UFirebaseVariant, &UFirebaseVariant::StaticClass, TEXT("/Script/FireBase"), TEXT("UFirebaseVariant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseVariant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
