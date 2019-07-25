// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnonymouslySignOutCallback;
#ifdef FIREBASE_AnonymouslySignOutCallback_generated_h
#error "AnonymouslySignOutCallback.generated.h already included, missing '#pragma once' in AnonymouslySignOutCallback.h"
#endif
#define FIREBASE_AnonymouslySignOutCallback_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnonymouslySignOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnonymouslySignOutCallback**)Z_Param__Result=UAnonymouslySignOutCallback::AnonymouslySignOut(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnonymouslySignOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnonymouslySignOutCallback**)Z_Param__Result=UAnonymouslySignOutCallback::AnonymouslySignOut(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnonymouslySignOutCallback(); \
	friend struct Z_Construct_UClass_UAnonymouslySignOutCallback_Statics; \
public: \
	DECLARE_CLASS(UAnonymouslySignOutCallback, USignOutCallbackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UAnonymouslySignOutCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnonymouslySignOutCallback(); \
	friend struct Z_Construct_UClass_UAnonymouslySignOutCallback_Statics; \
public: \
	DECLARE_CLASS(UAnonymouslySignOutCallback, USignOutCallbackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UAnonymouslySignOutCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnonymouslySignOutCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnonymouslySignOutCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnonymouslySignOutCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnonymouslySignOutCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnonymouslySignOutCallback(UAnonymouslySignOutCallback&&); \
	NO_API UAnonymouslySignOutCallback(const UAnonymouslySignOutCallback&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnonymouslySignOutCallback() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnonymouslySignOutCallback(UAnonymouslySignOutCallback&&); \
	NO_API UAnonymouslySignOutCallback(const UAnonymouslySignOutCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnonymouslySignOutCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnonymouslySignOutCallback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnonymouslySignOutCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_12_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AnonymouslySignOutCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
