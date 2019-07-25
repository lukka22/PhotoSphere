// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIREBASE_AsyncWaitOperateFinish_generated_h
#error "AsyncWaitOperateFinish.generated.h already included, missing '#pragma once' in AsyncWaitOperateFinish.h"
#endif
#define FIREBASE_AsyncWaitOperateFinish_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_11_DELEGATE \
struct _Script_FireBase_eventFireBaseFinishDelegate_Parms \
{ \
	int32 errcode; \
	FString errmsg; \
}; \
static inline void FFireBaseFinishDelegate_DelegateWrapper(const FMulticastScriptDelegate& FireBaseFinishDelegate, int32 errcode, const FString& errmsg) \
{ \
	_Script_FireBase_eventFireBaseFinishDelegate_Parms Parms; \
	Parms.errcode=errcode; \
	Parms.errmsg=errmsg; \
	FireBaseFinishDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_RPC_WRAPPERS
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncWaitOperateFinish(); \
	friend struct Z_Construct_UClass_UAsyncWaitOperateFinish_Statics; \
public: \
	DECLARE_CLASS(UAsyncWaitOperateFinish, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UAsyncWaitOperateFinish)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncWaitOperateFinish(); \
	friend struct Z_Construct_UClass_UAsyncWaitOperateFinish_Statics; \
public: \
	DECLARE_CLASS(UAsyncWaitOperateFinish, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UAsyncWaitOperateFinish)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncWaitOperateFinish(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncWaitOperateFinish) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncWaitOperateFinish); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncWaitOperateFinish); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncWaitOperateFinish(UAsyncWaitOperateFinish&&); \
	NO_API UAsyncWaitOperateFinish(const UAsyncWaitOperateFinish&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncWaitOperateFinish(UAsyncWaitOperateFinish&&); \
	NO_API UAsyncWaitOperateFinish(const UAsyncWaitOperateFinish&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncWaitOperateFinish); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncWaitOperateFinish); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncWaitOperateFinish)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_16_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_AsyncWaitOperateFinish_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
