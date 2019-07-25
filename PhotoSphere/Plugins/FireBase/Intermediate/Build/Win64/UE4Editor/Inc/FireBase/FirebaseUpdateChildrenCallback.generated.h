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
class UFirebaseUpdateChildrenCallback;
#ifdef FIREBASE_FirebaseUpdateChildrenCallback_generated_h
#error "FirebaseUpdateChildrenCallback.generated.h already included, missing '#pragma once' in FirebaseUpdateChildrenCallback.h"
#endif
#define FIREBASE_FirebaseUpdateChildrenCallback_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateChildren) \
	{ \
		P_GET_OBJECT(UFirebaseDatabaseRef,Z_Param_databaseRef); \
		P_GET_TMAP_REF(FString,UFirebaseVariant*,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseUpdateChildrenCallback**)Z_Param__Result=UFirebaseUpdateChildrenCallback::UpdateChildren(Z_Param_databaseRef,Z_Param_Out_value); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateChildren) \
	{ \
		P_GET_OBJECT(UFirebaseDatabaseRef,Z_Param_databaseRef); \
		P_GET_TMAP_REF(FString,UFirebaseVariant*,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseUpdateChildrenCallback**)Z_Param__Result=UFirebaseUpdateChildrenCallback::UpdateChildren(Z_Param_databaseRef,Z_Param_Out_value); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseUpdateChildrenCallback(); \
	friend struct Z_Construct_UClass_UFirebaseUpdateChildrenCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseUpdateChildrenCallback, UAsyncWaitOperateFinish, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseUpdateChildrenCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseUpdateChildrenCallback(); \
	friend struct Z_Construct_UClass_UFirebaseUpdateChildrenCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseUpdateChildrenCallback, UAsyncWaitOperateFinish, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseUpdateChildrenCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseUpdateChildrenCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseUpdateChildrenCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseUpdateChildrenCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseUpdateChildrenCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseUpdateChildrenCallback(UFirebaseUpdateChildrenCallback&&); \
	NO_API UFirebaseUpdateChildrenCallback(const UFirebaseUpdateChildrenCallback&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseUpdateChildrenCallback() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseUpdateChildrenCallback(UFirebaseUpdateChildrenCallback&&); \
	NO_API UFirebaseUpdateChildrenCallback(const UFirebaseUpdateChildrenCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseUpdateChildrenCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseUpdateChildrenCallback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirebaseUpdateChildrenCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_14_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseUpdateChildrenCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
