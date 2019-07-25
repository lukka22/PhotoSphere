// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFireBaseUser;
#ifdef FIREBASE_FireBaseBPLibrary_generated_h
#error "FireBaseBPLibrary.generated.h already included, missing '#pragma once' in FireBaseBPLibrary.h"
#endif
#define FIREBASE_FireBaseBPLibrary_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFireBaseUser_Statics; \
	FIREBASE_API static class UScriptStruct* StaticStruct();


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_50_DELEGATE \
static inline void FFireBaseSignOutDelegate_DelegateWrapper(const FMulticastScriptDelegate& FireBaseSignOutDelegate) \
{ \
	FireBaseSignOutDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_49_DELEGATE \
struct _Script_FireBase_eventFireBaseSignSuccessDelegate_Parms \
{ \
	FFireBaseUser User; \
}; \
static inline void FFireBaseSignSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& FireBaseSignSuccessDelegate, FFireBaseUser User) \
{ \
	_Script_FireBase_eventFireBaseSignSuccessDelegate_Parms Parms; \
	Parms.User=User; \
	FireBaseSignSuccessDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFirebaseSignout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFireBaseBPLibrary::FirebaseSignout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisFirebaseUserLogin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFireBaseBPLibrary::isFirebaseUserLogin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireBaseInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFireBaseBPLibrary::FireBaseInitialize(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFirebaseSignout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFireBaseBPLibrary::FirebaseSignout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisFirebaseUserLogin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFireBaseBPLibrary::isFirebaseUserLogin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireBaseInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFireBaseBPLibrary::FireBaseInitialize(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFireBaseBPLibrary(); \
	friend struct Z_Construct_UClass_UFireBaseBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFireBaseBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFireBaseBPLibrary)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUFireBaseBPLibrary(); \
	friend struct Z_Construct_UClass_UFireBaseBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFireBaseBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFireBaseBPLibrary)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFireBaseBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFireBaseBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFireBaseBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFireBaseBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFireBaseBPLibrary(UFireBaseBPLibrary&&); \
	NO_API UFireBaseBPLibrary(const UFireBaseBPLibrary&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFireBaseBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFireBaseBPLibrary(UFireBaseBPLibrary&&); \
	NO_API UFireBaseBPLibrary(const UFireBaseBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFireBaseBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFireBaseBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFireBaseBPLibrary)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_53_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h_56_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FireBaseBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FireBaseBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
