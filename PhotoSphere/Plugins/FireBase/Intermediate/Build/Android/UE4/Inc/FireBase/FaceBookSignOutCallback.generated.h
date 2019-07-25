// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFaceBookSignOutCallback;
#ifdef FIREBASE_FaceBookSignOutCallback_generated_h
#error "FaceBookSignOutCallback.generated.h already included, missing '#pragma once' in FaceBookSignOutCallback.h"
#endif
#define FIREBASE_FaceBookSignOutCallback_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFaceBookSignOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFaceBookSignOutCallback**)Z_Param__Result=UFaceBookSignOutCallback::FaceBookSignOut(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFaceBookSignOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFaceBookSignOutCallback**)Z_Param__Result=UFaceBookSignOutCallback::FaceBookSignOut(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFaceBookSignOutCallback(); \
	friend struct Z_Construct_UClass_UFaceBookSignOutCallback_Statics; \
public: \
	DECLARE_CLASS(UFaceBookSignOutCallback, USignOutCallbackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFaceBookSignOutCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFaceBookSignOutCallback(); \
	friend struct Z_Construct_UClass_UFaceBookSignOutCallback_Statics; \
public: \
	DECLARE_CLASS(UFaceBookSignOutCallback, USignOutCallbackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFaceBookSignOutCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFaceBookSignOutCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFaceBookSignOutCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFaceBookSignOutCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFaceBookSignOutCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFaceBookSignOutCallback(UFaceBookSignOutCallback&&); \
	NO_API UFaceBookSignOutCallback(const UFaceBookSignOutCallback&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFaceBookSignOutCallback() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFaceBookSignOutCallback(UFaceBookSignOutCallback&&); \
	NO_API UFaceBookSignOutCallback(const UFaceBookSignOutCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFaceBookSignOutCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFaceBookSignOutCallback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFaceBookSignOutCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_13_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FaceBookSignOutCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
