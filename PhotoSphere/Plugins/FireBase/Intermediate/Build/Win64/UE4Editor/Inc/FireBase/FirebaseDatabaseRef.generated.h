// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFirebaseDatabaseRef;
#ifdef FIREBASE_FirebaseDatabaseRef_generated_h
#error "FirebaseDatabaseRef.generated.h already included, missing '#pragma once' in FirebaseDatabaseRef.h"
#endif
#define FIREBASE_FirebaseDatabaseRef_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUrl) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUrl(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoOffline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GoOffline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoOnline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GoOnline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseDatabaseRef**)Z_Param__Result=P_THIS->GetRoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseDatabaseRef**)Z_Param__Result=P_THIS->GetParent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->Key(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushChild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseDatabaseRef**)Z_Param__Result=P_THIS->PushChild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChild) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_child); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseDatabaseRef**)Z_Param__Result=P_THIS->Child(Z_Param_child); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRootDatabaseRef) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseDatabaseRef**)Z_Param__Result=UFirebaseDatabaseRef::GetRootDatabaseRef(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUrl) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUrl(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoOffline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GoOffline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoOnline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GoOnline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseDatabaseRef**)Z_Param__Result=P_THIS->GetRoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseDatabaseRef**)Z_Param__Result=P_THIS->GetParent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->Key(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushChild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseDatabaseRef**)Z_Param__Result=P_THIS->PushChild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChild) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_child); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseDatabaseRef**)Z_Param__Result=P_THIS->Child(Z_Param_child); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRootDatabaseRef) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseDatabaseRef**)Z_Param__Result=UFirebaseDatabaseRef::GetRootDatabaseRef(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseDatabaseRef(); \
	friend struct Z_Construct_UClass_UFirebaseDatabaseRef_Statics; \
public: \
	DECLARE_CLASS(UFirebaseDatabaseRef, UFirebaseQuery, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseDatabaseRef)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseDatabaseRef(); \
	friend struct Z_Construct_UClass_UFirebaseDatabaseRef_Statics; \
public: \
	DECLARE_CLASS(UFirebaseDatabaseRef, UFirebaseQuery, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseDatabaseRef)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseDatabaseRef(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseDatabaseRef) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseDatabaseRef); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseDatabaseRef); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseDatabaseRef(UFirebaseDatabaseRef&&); \
	NO_API UFirebaseDatabaseRef(const UFirebaseDatabaseRef&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseDatabaseRef(UFirebaseDatabaseRef&&); \
	NO_API UFirebaseDatabaseRef(const UFirebaseDatabaseRef&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseDatabaseRef); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseDatabaseRef); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirebaseDatabaseRef)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_15_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDatabaseRef_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
