// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFirebaseChildListenerCallback;
class UFirebaseDataSnapshot;
class UFirebaseQuery;
#ifdef FIREBASE_FirebaseChildListenerCallback_generated_h
#error "FirebaseChildListenerCallback.generated.h already included, missing '#pragma once' in FirebaseChildListenerCallback.h"
#endif
#define FIREBASE_FirebaseChildListenerCallback_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_15_DELEGATE \
struct _Script_FireBase_eventFireBaseChildRemoveListenerDelegate_Parms \
{ \
	UFirebaseChildListenerCallback* thiz; \
	UFirebaseDataSnapshot* dataSnapshot; \
}; \
static inline void FFireBaseChildRemoveListenerDelegate_DelegateWrapper(const FMulticastScriptDelegate& FireBaseChildRemoveListenerDelegate, UFirebaseChildListenerCallback* thiz, UFirebaseDataSnapshot* dataSnapshot) \
{ \
	_Script_FireBase_eventFireBaseChildRemoveListenerDelegate_Parms Parms; \
	Parms.thiz=thiz; \
	Parms.dataSnapshot=dataSnapshot; \
	FireBaseChildRemoveListenerDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_14_DELEGATE \
struct _Script_FireBase_eventFireBaseChildMoveListenerDelegate_Parms \
{ \
	UFirebaseChildListenerCallback* thiz; \
	UFirebaseDataSnapshot* dataSnapshot; \
	FString preSiblingKey; \
}; \
static inline void FFireBaseChildMoveListenerDelegate_DelegateWrapper(const FMulticastScriptDelegate& FireBaseChildMoveListenerDelegate, UFirebaseChildListenerCallback* thiz, UFirebaseDataSnapshot* dataSnapshot, const FString& preSiblingKey) \
{ \
	_Script_FireBase_eventFireBaseChildMoveListenerDelegate_Parms Parms; \
	Parms.thiz=thiz; \
	Parms.dataSnapshot=dataSnapshot; \
	Parms.preSiblingKey=preSiblingKey; \
	FireBaseChildMoveListenerDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_13_DELEGATE \
struct _Script_FireBase_eventFireBaseChildChangeListenerDelegate_Parms \
{ \
	UFirebaseChildListenerCallback* thiz; \
	UFirebaseDataSnapshot* dataSnapshot; \
	FString preSiblingKey; \
}; \
static inline void FFireBaseChildChangeListenerDelegate_DelegateWrapper(const FMulticastScriptDelegate& FireBaseChildChangeListenerDelegate, UFirebaseChildListenerCallback* thiz, UFirebaseDataSnapshot* dataSnapshot, const FString& preSiblingKey) \
{ \
	_Script_FireBase_eventFireBaseChildChangeListenerDelegate_Parms Parms; \
	Parms.thiz=thiz; \
	Parms.dataSnapshot=dataSnapshot; \
	Parms.preSiblingKey=preSiblingKey; \
	FireBaseChildChangeListenerDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_12_DELEGATE \
struct _Script_FireBase_eventFireBaseChildAddListenerDelegate_Parms \
{ \
	UFirebaseChildListenerCallback* thiz; \
	UFirebaseDataSnapshot* dataSnapshot; \
	FString preSiblingKey; \
}; \
static inline void FFireBaseChildAddListenerDelegate_DelegateWrapper(const FMulticastScriptDelegate& FireBaseChildAddListenerDelegate, UFirebaseChildListenerCallback* thiz, UFirebaseDataSnapshot* dataSnapshot, const FString& preSiblingKey) \
{ \
	_Script_FireBase_eventFireBaseChildAddListenerDelegate_Parms Parms; \
	Parms.thiz=thiz; \
	Parms.dataSnapshot=dataSnapshot; \
	Parms.preSiblingKey=preSiblingKey; \
	FireBaseChildAddListenerDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveChildListener) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveChildListener(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddChildListener) \
	{ \
		P_GET_OBJECT(UFirebaseQuery,Z_Param_query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseChildListenerCallback**)Z_Param__Result=UFirebaseChildListenerCallback::AddChildListener(Z_Param_query); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveChildListener) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveChildListener(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddChildListener) \
	{ \
		P_GET_OBJECT(UFirebaseQuery,Z_Param_query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseChildListenerCallback**)Z_Param__Result=UFirebaseChildListenerCallback::AddChildListener(Z_Param_query); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseChildListenerCallback(); \
	friend struct Z_Construct_UClass_UFirebaseChildListenerCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseChildListenerCallback, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseChildListenerCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseChildListenerCallback(); \
	friend struct Z_Construct_UClass_UFirebaseChildListenerCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseChildListenerCallback, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseChildListenerCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseChildListenerCallback(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseChildListenerCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseChildListenerCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseChildListenerCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseChildListenerCallback(UFirebaseChildListenerCallback&&); \
	NO_API UFirebaseChildListenerCallback(const UFirebaseChildListenerCallback&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseChildListenerCallback(UFirebaseChildListenerCallback&&); \
	NO_API UFirebaseChildListenerCallback(const UFirebaseChildListenerCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseChildListenerCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseChildListenerCallback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirebaseChildListenerCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_22_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseChildListenerCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
