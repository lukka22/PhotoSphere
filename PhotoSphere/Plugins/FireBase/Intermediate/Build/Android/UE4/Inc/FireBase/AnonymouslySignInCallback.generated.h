// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnonymouslySignInCallback;
#ifdef FIREBASE_AnonymouslySignInCallback_generated_h
#error "AnonymouslySignInCallback.generated.h already included, missing '#pragma once' in AnonymouslySignInCallback.h"
#endif
#define FIREBASE_AnonymouslySignInCallback_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnonymouslySignIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnonymouslySignInCallback**)Z_Param__Result=UAnonymouslySignInCallback::AnonymouslySignIn(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnonymouslySignIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnonymouslySignInCallback**)Z_Param__Result=UAnonymouslySignInCallback::AnonymouslySignIn(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnonymouslySignInCallback(); \
	friend struct Z_Construct_UClass_UAnonymouslySignInCallback_Statics; \
public: \
	DECLARE_CLASS(UAnonymouslySignInCallback, USignInCallbackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UAnonymouslySignInCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnonymouslySignInCallback(); \
	friend struct Z_Construct_UClass_UAnonymouslySignInCallback_Statics; \
public: \
	DECLARE_CLASS(UAnonymouslySignInCallback, USignInCallbackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UAnonymouslySignInCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnonymouslySignInCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnonymouslySignInCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnonymouslySignInCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnonymouslySignInCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnonymouslySignInCallback(UAnonymouslySignInCallback&&); \
	NO_API UAnonymouslySignInCallback(const UAnonymouslySignInCallback&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnonymouslySignInCallback() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnonymouslySignInCallback(UAnonymouslySignInCallback&&); \
	NO_API UAnonymouslySignInCallback(const UAnonymouslySignInCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnonymouslySignInCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnonymouslySignInCallback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnonymouslySignInCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_12_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignInCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
