// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFirebaseValueListenerCallback;
class UFirebaseDataSnapshot;
class UFirebaseQuery;
#ifdef FIREBASE_FirebaseValueListenerCallback_generated_h
#error "FirebaseValueListenerCallback.generated.h already included, missing '#pragma once' in FirebaseValueListenerCallback.h"
#endif
#define FIREBASE_FirebaseValueListenerCallback_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_15_DELEGATE \
struct _Script_FireBase_eventFireBaseValueListenerDelegate_Parms \
{ \
	UFirebaseValueListenerCallback* thiz; \
	int32 errcode; \
	FString errmsg; \
	UFirebaseDataSnapshot* dataSnapshot; \
}; \
static inline void FFireBaseValueListenerDelegate_DelegateWrapper(const FMulticastScriptDelegate& FireBaseValueListenerDelegate, UFirebaseValueListenerCallback* thiz, int32 errcode, const FString& errmsg, UFirebaseDataSnapshot* dataSnapshot) \
{ \
	_Script_FireBase_eventFireBaseValueListenerDelegate_Parms Parms; \
	Parms.thiz=thiz; \
	Parms.errcode=errcode; \
	Parms.errmsg=errmsg; \
	Parms.dataSnapshot=dataSnapshot; \
	FireBaseValueListenerDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveValueListener) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveValueListener(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddValueListener) \
	{ \
		P_GET_OBJECT(UFirebaseQuery,Z_Param_query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseValueListenerCallback**)Z_Param__Result=UFirebaseValueListenerCallback::AddValueListener(Z_Param_query); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveValueListener) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveValueListener(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddValueListener) \
	{ \
		P_GET_OBJECT(UFirebaseQuery,Z_Param_query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseValueListenerCallback**)Z_Param__Result=UFirebaseValueListenerCallback::AddValueListener(Z_Param_query); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseValueListenerCallback(); \
	friend struct Z_Construct_UClass_UFirebaseValueListenerCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseValueListenerCallback, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseValueListenerCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseValueListenerCallback(); \
	friend struct Z_Construct_UClass_UFirebaseValueListenerCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseValueListenerCallback, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseValueListenerCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseValueListenerCallback(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseValueListenerCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseValueListenerCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseValueListenerCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseValueListenerCallback(UFirebaseValueListenerCallback&&); \
	NO_API UFirebaseValueListenerCallback(const UFirebaseValueListenerCallback&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseValueListenerCallback(UFirebaseValueListenerCallback&&); \
	NO_API UFirebaseValueListenerCallback(const UFirebaseValueListenerCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseValueListenerCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseValueListenerCallback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirebaseValueListenerCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_20_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseValueListenerCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
