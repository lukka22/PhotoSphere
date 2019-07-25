// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFirebaseVariant;
class UFirebaseMutableData;
#ifdef FIREBASE_FirebaseMutableData_generated_h
#error "FirebaseMutableData.generated.h already included, missing '#pragma once' in FirebaseMutableData.h"
#endif
#define FIREBASE_FirebaseMutableData_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execpriority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=P_THIS->priority(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execset_priority) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->set_priority(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execset_value) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->set_value(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasChild) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasChild(Z_Param_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execvalue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=P_THIS->value(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execkey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->key(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execchildren_count) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->children_count(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execchildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UFirebaseMutableData*>*)Z_Param__Result=P_THIS->children(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChild) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseMutableData**)Z_Param__Result=P_THIS->Child(Z_Param_path); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execpriority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=P_THIS->priority(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execset_priority) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->set_priority(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execset_value) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->set_value(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasChild) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasChild(Z_Param_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execvalue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=P_THIS->value(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execkey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->key(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execchildren_count) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->children_count(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execchildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UFirebaseMutableData*>*)Z_Param__Result=P_THIS->children(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChild) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseMutableData**)Z_Param__Result=P_THIS->Child(Z_Param_path); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseMutableData(); \
	friend struct Z_Construct_UClass_UFirebaseMutableData_Statics; \
public: \
	DECLARE_CLASS(UFirebaseMutableData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseMutableData)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseMutableData(); \
	friend struct Z_Construct_UClass_UFirebaseMutableData_Statics; \
public: \
	DECLARE_CLASS(UFirebaseMutableData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseMutableData)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseMutableData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseMutableData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseMutableData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseMutableData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseMutableData(UFirebaseMutableData&&); \
	NO_API UFirebaseMutableData(const UFirebaseMutableData&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseMutableData(UFirebaseMutableData&&); \
	NO_API UFirebaseMutableData(const UFirebaseMutableData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseMutableData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseMutableData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirebaseMutableData)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_22_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseMutableData_h


#define FOREACH_ENUM_TRANSACTIONRESULT(op) \
	op(TransactionResult::kTransactionResultSuccess) \
	op(TransactionResult::kTransactionResultAbort) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
