// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFaceBookSignInCallback;
#ifdef FIREBASE_FaceBookSignInCallback_generated_h
#error "FaceBookSignInCallback.generated.h already included, missing '#pragma once' in FaceBookSignInCallback.h"
#endif
#define FIREBASE_FaceBookSignInCallback_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFaceBookSignIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFaceBookSignInCallback**)Z_Param__Result=UFaceBookSignInCallback::FaceBookSignIn(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFaceBookSignIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFaceBookSignInCallback**)Z_Param__Result=UFaceBookSignInCallback::FaceBookSignIn(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFaceBookSignInCallback(); \
	friend struct Z_Construct_UClass_UFaceBookSignInCallback_Statics; \
public: \
	DECLARE_CLASS(UFaceBookSignInCallback, USignInCallbackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFaceBookSignInCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFaceBookSignInCallback(); \
	friend struct Z_Construct_UClass_UFaceBookSignInCallback_Statics; \
public: \
	DECLARE_CLASS(UFaceBookSignInCallback, USignInCallbackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFaceBookSignInCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFaceBookSignInCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFaceBookSignInCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFaceBookSignInCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFaceBookSignInCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFaceBookSignInCallback(UFaceBookSignInCallback&&); \
	NO_API UFaceBookSignInCallback(const UFaceBookSignInCallback&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFaceBookSignInCallback() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFaceBookSignInCallback(UFaceBookSignInCallback&&); \
	NO_API UFaceBookSignInCallback(const UFaceBookSignInCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFaceBookSignInCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFaceBookSignInCallback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFaceBookSignInCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_13_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignInCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
