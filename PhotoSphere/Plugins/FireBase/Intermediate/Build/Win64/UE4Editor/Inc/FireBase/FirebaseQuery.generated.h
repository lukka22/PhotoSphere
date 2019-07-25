// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFirebaseQuery;
class UFirebaseVariant;
class UFirebaseDatabaseRef;
#ifdef FIREBASE_FirebaseQuery_generated_h
#error "FirebaseQuery.generated.h already included, missing '#pragma once' in FirebaseQuery.h"
#endif
#define FIREBASE_FirebaseQuery_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLimitToLast) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->LimitToLast(Z_Param_limit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLimitToFirst) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->LimitToFirst(Z_Param_limit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualToChild) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_orderValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_childKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->EqualToChild(Z_Param_orderValue,Z_Param_childKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualTo) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_orderValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->EqualTo(Z_Param_orderValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndAtChild) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_orderValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_childKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->EndAtChild(Z_Param_orderValue,Z_Param_childKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndAt) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_orderValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->EndAt(Z_Param_orderValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAtChild) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_orderValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_childKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->StartAtChild(Z_Param_orderValue,Z_Param_childKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAt) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_orderValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->StartAt(Z_Param_orderValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOrderByValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->OrderByValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOrderByPriority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->OrderByPriority(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOrderByKey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->OrderByKey(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOrderByChild) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_child); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->OrderByChild(Z_Param_child); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetKeepSynchronized) \
	{ \
		P_GET_UBOOL(Z_Param_keep_sync); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetKeepSynchronized(Z_Param_keep_sync); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReference) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseDatabaseRef**)Z_Param__Result=P_THIS->GetReference(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLimitToLast) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->LimitToLast(Z_Param_limit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLimitToFirst) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->LimitToFirst(Z_Param_limit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualToChild) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_orderValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_childKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->EqualToChild(Z_Param_orderValue,Z_Param_childKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualTo) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_orderValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->EqualTo(Z_Param_orderValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndAtChild) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_orderValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_childKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->EndAtChild(Z_Param_orderValue,Z_Param_childKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndAt) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_orderValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->EndAt(Z_Param_orderValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAtChild) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_orderValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_childKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->StartAtChild(Z_Param_orderValue,Z_Param_childKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAt) \
	{ \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_orderValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->StartAt(Z_Param_orderValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOrderByValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->OrderByValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOrderByPriority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->OrderByPriority(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOrderByKey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->OrderByKey(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOrderByChild) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_child); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseQuery**)Z_Param__Result=P_THIS->OrderByChild(Z_Param_child); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetKeepSynchronized) \
	{ \
		P_GET_UBOOL(Z_Param_keep_sync); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetKeepSynchronized(Z_Param_keep_sync); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReference) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseDatabaseRef**)Z_Param__Result=P_THIS->GetReference(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseQuery(); \
	friend struct Z_Construct_UClass_UFirebaseQuery_Statics; \
public: \
	DECLARE_CLASS(UFirebaseQuery, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseQuery)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseQuery(); \
	friend struct Z_Construct_UClass_UFirebaseQuery_Statics; \
public: \
	DECLARE_CLASS(UFirebaseQuery, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseQuery)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseQuery(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseQuery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseQuery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseQuery(UFirebaseQuery&&); \
	NO_API UFirebaseQuery(const UFirebaseQuery&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseQuery(UFirebaseQuery&&); \
	NO_API UFirebaseQuery(const UFirebaseQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseQuery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseQuery); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirebaseQuery)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_17_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseQuery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
