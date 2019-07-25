// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGoogleSignOutCallback;
#ifdef FIREBASE_GoogleSignOutCallback_generated_h
#error "GoogleSignOutCallback.generated.h already included, missing '#pragma once' in GoogleSignOutCallback.h"
#endif
#define FIREBASE_GoogleSignOutCallback_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGoogleSignOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGoogleSignOutCallback**)Z_Param__Result=UGoogleSignOutCallback::GoogleSignOut(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGoogleSignOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGoogleSignOutCallback**)Z_Param__Result=UGoogleSignOutCallback::GoogleSignOut(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogleSignOutCallback(); \
	friend struct Z_Construct_UClass_UGoogleSignOutCallback_Statics; \
public: \
	DECLARE_CLASS(UGoogleSignOutCallback, USignOutCallbackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UGoogleSignOutCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGoogleSignOutCallback(); \
	friend struct Z_Construct_UClass_UGoogleSignOutCallback_Statics; \
public: \
	DECLARE_CLASS(UGoogleSignOutCallback, USignOutCallbackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UGoogleSignOutCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleSignOutCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleSignOutCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleSignOutCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleSignOutCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogleSignOutCallback(UGoogleSignOutCallback&&); \
	NO_API UGoogleSignOutCallback(const UGoogleSignOutCallback&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleSignOutCallback() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogleSignOutCallback(UGoogleSignOutCallback&&); \
	NO_API UGoogleSignOutCallback(const UGoogleSignOutCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleSignOutCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleSignOutCallback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGoogleSignOutCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_14_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_GoogleSignOutCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
