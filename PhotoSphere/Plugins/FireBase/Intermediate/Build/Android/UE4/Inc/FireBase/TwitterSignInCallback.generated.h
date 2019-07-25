// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTwitterSignInCallback;
#ifdef FIREBASE_TwitterSignInCallback_generated_h
#error "TwitterSignInCallback.generated.h already included, missing '#pragma once' in TwitterSignInCallback.h"
#endif
#define FIREBASE_TwitterSignInCallback_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTwitterSignIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTwitterSignInCallback**)Z_Param__Result=UTwitterSignInCallback::TwitterSignIn(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTwitterSignIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTwitterSignInCallback**)Z_Param__Result=UTwitterSignInCallback::TwitterSignIn(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTwitterSignInCallback(); \
	friend struct Z_Construct_UClass_UTwitterSignInCallback_Statics; \
public: \
	DECLARE_CLASS(UTwitterSignInCallback, USignInCallbackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UTwitterSignInCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTwitterSignInCallback(); \
	friend struct Z_Construct_UClass_UTwitterSignInCallback_Statics; \
public: \
	DECLARE_CLASS(UTwitterSignInCallback, USignInCallbackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UTwitterSignInCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwitterSignInCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwitterSignInCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwitterSignInCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwitterSignInCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwitterSignInCallback(UTwitterSignInCallback&&); \
	NO_API UTwitterSignInCallback(const UTwitterSignInCallback&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwitterSignInCallback() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwitterSignInCallback(UTwitterSignInCallback&&); \
	NO_API UTwitterSignInCallback(const UTwitterSignInCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwitterSignInCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwitterSignInCallback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTwitterSignInCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_12_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_TwitterSignInCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
