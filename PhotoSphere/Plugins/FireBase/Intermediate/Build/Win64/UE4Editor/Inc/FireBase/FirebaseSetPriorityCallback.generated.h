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
class UFirebaseSetPriorityCallback;
#ifdef FIREBASE_FirebaseSetPriorityCallback_generated_h
#error "FirebaseSetPriorityCallback.generated.h already included, missing '#pragma once' in FirebaseSetPriorityCallback.h"
#endif
#define FIREBASE_FirebaseSetPriorityCallback_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPriority) \
	{ \
		P_GET_OBJECT(UFirebaseDatabaseRef,Z_Param_databaseRef); \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_priority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseSetPriorityCallback**)Z_Param__Result=UFirebaseSetPriorityCallback::SetPriority(Z_Param_databaseRef,Z_Param_priority); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPriority) \
	{ \
		P_GET_OBJECT(UFirebaseDatabaseRef,Z_Param_databaseRef); \
		P_GET_OBJECT(UFirebaseVariant,Z_Param_priority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseSetPriorityCallback**)Z_Param__Result=UFirebaseSetPriorityCallback::SetPriority(Z_Param_databaseRef,Z_Param_priority); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseSetPriorityCallback(); \
	friend struct Z_Construct_UClass_UFirebaseSetPriorityCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseSetPriorityCallback, UAsyncWaitOperateFinish, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseSetPriorityCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseSetPriorityCallback(); \
	friend struct Z_Construct_UClass_UFirebaseSetPriorityCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseSetPriorityCallback, UAsyncWaitOperateFinish, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseSetPriorityCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseSetPriorityCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseSetPriorityCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseSetPriorityCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseSetPriorityCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseSetPriorityCallback(UFirebaseSetPriorityCallback&&); \
	NO_API UFirebaseSetPriorityCallback(const UFirebaseSetPriorityCallback&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseSetPriorityCallback() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseSetPriorityCallback(UFirebaseSetPriorityCallback&&); \
	NO_API UFirebaseSetPriorityCallback(const UFirebaseSetPriorityCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseSetPriorityCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseSetPriorityCallback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirebaseSetPriorityCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_15_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseSetPriorityCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
