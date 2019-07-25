// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFirebaseDataSnapshot;
class UFirebaseQuery;
class UFirebaseReadValueCallback;
#ifdef FIREBASE_FirebaseReadValueCallback_generated_h
#error "FirebaseReadValueCallback.generated.h already included, missing '#pragma once' in FirebaseReadValueCallback.h"
#endif
#define FIREBASE_FirebaseReadValueCallback_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_15_DELEGATE \
struct _Script_FireBase_eventFireBaseGetValueDelegate_Parms \
{ \
	int32 errcode; \
	FString errmsg; \
	UFirebaseDataSnapshot* dataSnapshot; \
}; \
static inline void FFireBaseGetValueDelegate_DelegateWrapper(const FMulticastScriptDelegate& FireBaseGetValueDelegate, int32 errcode, const FString& errmsg, UFirebaseDataSnapshot* dataSnapshot) \
{ \
	_Script_FireBase_eventFireBaseGetValueDelegate_Parms Parms; \
	Parms.errcode=errcode; \
	Parms.errmsg=errmsg; \
	Parms.dataSnapshot=dataSnapshot; \
	FireBaseGetValueDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_GET_OBJECT(UFirebaseQuery,Z_Param_query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseReadValueCallback**)Z_Param__Result=UFirebaseReadValueCallback::GetValue(Z_Param_query); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_GET_OBJECT(UFirebaseQuery,Z_Param_query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseReadValueCallback**)Z_Param__Result=UFirebaseReadValueCallback::GetValue(Z_Param_query); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseReadValueCallback(); \
	friend struct Z_Construct_UClass_UFirebaseReadValueCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseReadValueCallback, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseReadValueCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseReadValueCallback(); \
	friend struct Z_Construct_UClass_UFirebaseReadValueCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseReadValueCallback, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseReadValueCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseReadValueCallback(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseReadValueCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseReadValueCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseReadValueCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseReadValueCallback(UFirebaseReadValueCallback&&); \
	NO_API UFirebaseReadValueCallback(const UFirebaseReadValueCallback&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseReadValueCallback(UFirebaseReadValueCallback&&); \
	NO_API UFirebaseReadValueCallback(const UFirebaseReadValueCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseReadValueCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseReadValueCallback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirebaseReadValueCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_20_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseReadValueCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
