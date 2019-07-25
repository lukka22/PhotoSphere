// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFireBaseUser;
class UFirebaseGetUserInfo;
#ifdef FIREBASE_FirebaseGetUserInfo_generated_h
#error "FirebaseGetUserInfo.generated.h already included, missing '#pragma once' in FirebaseGetUserInfo.h"
#endif
#define FIREBASE_FirebaseGetUserInfo_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_12_DELEGATE \
static inline void FFireBaseUserFail_DelegateWrapper(const FMulticastScriptDelegate& FireBaseUserFail) \
{ \
	FireBaseUserFail.ProcessMulticastDelegate<UObject>(NULL); \
}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_11_DELEGATE \
struct _Script_FireBase_eventFireBaseGetUserSucced_Parms \
{ \
	FFireBaseUser userInfo; \
}; \
static inline void FFireBaseGetUserSucced_DelegateWrapper(const FMulticastScriptDelegate& FireBaseGetUserSucced, FFireBaseUser userInfo) \
{ \
	_Script_FireBase_eventFireBaseGetUserSucced_Parms Parms; \
	Parms.userInfo=userInfo; \
	FireBaseGetUserSucced.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFirebaseUserInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseGetUserInfo**)Z_Param__Result=UFirebaseGetUserInfo::GetFirebaseUserInfo(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFirebaseUserInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseGetUserInfo**)Z_Param__Result=UFirebaseGetUserInfo::GetFirebaseUserInfo(); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseGetUserInfo(); \
	friend struct Z_Construct_UClass_UFirebaseGetUserInfo_Statics; \
public: \
	DECLARE_CLASS(UFirebaseGetUserInfo, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseGetUserInfo)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseGetUserInfo(); \
	friend struct Z_Construct_UClass_UFirebaseGetUserInfo_Statics; \
public: \
	DECLARE_CLASS(UFirebaseGetUserInfo, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseGetUserInfo)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseGetUserInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseGetUserInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseGetUserInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseGetUserInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseGetUserInfo(UFirebaseGetUserInfo&&); \
	NO_API UFirebaseGetUserInfo(const UFirebaseGetUserInfo&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseGetUserInfo(UFirebaseGetUserInfo&&); \
	NO_API UFirebaseGetUserInfo(const UFirebaseGetUserInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseGetUserInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseGetUserInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirebaseGetUserInfo)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_17_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseGetUserInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
