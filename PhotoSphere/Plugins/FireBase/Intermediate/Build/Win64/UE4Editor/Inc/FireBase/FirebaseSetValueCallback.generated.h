// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFirebaseDatabaseRef;
class UFirebaseVariant;
class UFirebaseSetValueCallback;
#ifdef FIREBASE_FirebaseSetValueCallback_generated_h
#error "FirebaseSetValueCallback.generated.h already included, missing '#pragma once' in FirebaseSetValueCallback.h"
#endif
#define FIREBASE_FirebaseSetValueCallback_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_12_DELEGATE \
struct _Script_FireBase_eventFireBaseSetValueDelegate_Parms \
{ \
	int32 errcode; \
	FString errmsg; \
}; \
static inline void FFireBaseSetValueDelegate_DelegateWrapper(const FMulticastScriptDelegate& FireBaseSetValueDelegate, int32 errcode, const FString& errmsg) \
{ \
	_Script_FireBase_eventFireBaseSetValueDelegate_Parms Parms; \
	Parms.errcode=errcode; \
	Parms.errmsg=errmsg; \
	FireBaseSetValueDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_OBJECT(UFirebaseDatabaseRef,Z_Param_databaseRef); \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseSetValueCallback**)Z_Param__Result=UFirebaseSetValueCallback::SetValue(Z_Param_databaseRef,Z_Param_value); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_OBJECT(UFirebaseDatabaseRef,Z_Param_databaseRef); \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseSetValueCallback**)Z_Param__Result=UFirebaseSetValueCallback::SetValue(Z_Param_databaseRef,Z_Param_value); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseSetValueCallback(); \
	friend struct Z_Construct_UClass_UFirebaseSetValueCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseSetValueCallback, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseSetValueCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseSetValueCallback(); \
	friend struct Z_Construct_UClass_UFirebaseSetValueCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseSetValueCallback, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseSetValueCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseSetValueCallback(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseSetValueCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseSetValueCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseSetValueCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseSetValueCallback(UFirebaseSetValueCallback&&); \
	NO_API UFirebaseSetValueCallback(const UFirebaseSetValueCallback&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseSetValueCallback(UFirebaseSetValueCallback&&); \
	NO_API UFirebaseSetValueCallback(const UFirebaseSetValueCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseSetValueCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseSetValueCallback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirebaseSetValueCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_19_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetValueCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
