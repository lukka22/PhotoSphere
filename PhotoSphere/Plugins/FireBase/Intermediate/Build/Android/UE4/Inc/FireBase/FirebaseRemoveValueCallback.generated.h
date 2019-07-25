// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFirebaseDatabaseRef;
class UFirebaseRemoveValueCallback;
#ifdef FIREBASE_FirebaseRemoveValueCallback_generated_h
#error "FirebaseRemoveValueCallback.generated.h already included, missing '#pragma once' in FirebaseRemoveValueCallback.h"
#endif
#define FIREBASE_FirebaseRemoveValueCallback_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveValue) \
	{ \
		P_GET_OBJECT(UFirebaseDatabaseRef,Z_Param_databaseRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseRemoveValueCallback**)Z_Param__Result=UFirebaseRemoveValueCallback::RemoveValue(Z_Param_databaseRef); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveValue) \
	{ \
		P_GET_OBJECT(UFirebaseDatabaseRef,Z_Param_databaseRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseRemoveValueCallback**)Z_Param__Result=UFirebaseRemoveValueCallback::RemoveValue(Z_Param_databaseRef); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseRemoveValueCallback(); \
	friend struct Z_Construct_UClass_UFirebaseRemoveValueCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseRemoveValueCallback, UAsyncWaitOperateFinish, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseRemoveValueCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseRemoveValueCallback(); \
	friend struct Z_Construct_UClass_UFirebaseRemoveValueCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseRemoveValueCallback, UAsyncWaitOperateFinish, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseRemoveValueCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseRemoveValueCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseRemoveValueCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseRemoveValueCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseRemoveValueCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseRemoveValueCallback(UFirebaseRemoveValueCallback&&); \
	NO_API UFirebaseRemoveValueCallback(const UFirebaseRemoveValueCallback&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseRemoveValueCallback() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseRemoveValueCallback(UFirebaseRemoveValueCallback&&); \
	NO_API UFirebaseRemoveValueCallback(const UFirebaseRemoveValueCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseRemoveValueCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseRemoveValueCallback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirebaseRemoveValueCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_15_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRemoveValueCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
