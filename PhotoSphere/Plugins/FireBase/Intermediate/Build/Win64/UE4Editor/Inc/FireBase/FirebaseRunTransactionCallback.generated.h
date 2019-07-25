// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFirebaseMutableData;
enum class TransactionResult : uint8;
class UFirebaseDatabaseRef;
class UFirebaseRunTransactionCallback;
#ifdef FIREBASE_FirebaseRunTransactionCallback_generated_h
#error "FirebaseRunTransactionCallback.generated.h already included, missing '#pragma once' in FirebaseRunTransactionCallback.h"
#endif
#define FIREBASE_FirebaseRunTransactionCallback_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_13_DELEGATE \
struct _Script_FireBase_eventFireBaseTransactionDelegate_Parms \
{ \
	UFirebaseMutableData* mutableData; \
	TransactionResult result; \
}; \
static inline void FFireBaseTransactionDelegate_DelegateWrapper(const FScriptDelegate& FireBaseTransactionDelegate, UFirebaseMutableData* mutableData, TransactionResult& result) \
{ \
	_Script_FireBase_eventFireBaseTransactionDelegate_Parms Parms; \
	Parms.mutableData=mutableData; \
	Parms.result=result; \
	FireBaseTransactionDelegate.ProcessDelegate<UObject>(&Parms); \
	result=Parms.result; \
}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRunTransaction) \
	{ \
		P_GET_OBJECT(UFirebaseDatabaseRef,Z_Param_databaseRef); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_transation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseRunTransactionCallback**)Z_Param__Result=UFirebaseRunTransactionCallback::RunTransaction(Z_Param_databaseRef,FFireBaseTransactionDelegate(Z_Param_transation)); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRunTransaction) \
	{ \
		P_GET_OBJECT(UFirebaseDatabaseRef,Z_Param_databaseRef); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_transation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseRunTransactionCallback**)Z_Param__Result=UFirebaseRunTransactionCallback::RunTransaction(Z_Param_databaseRef,FFireBaseTransactionDelegate(Z_Param_transation)); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseRunTransactionCallback(); \
	friend struct Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseRunTransactionCallback, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseRunTransactionCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseRunTransactionCallback(); \
	friend struct Z_Construct_UClass_UFirebaseRunTransactionCallback_Statics; \
public: \
	DECLARE_CLASS(UFirebaseRunTransactionCallback, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseRunTransactionCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseRunTransactionCallback(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseRunTransactionCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseRunTransactionCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseRunTransactionCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseRunTransactionCallback(UFirebaseRunTransactionCallback&&); \
	NO_API UFirebaseRunTransactionCallback(const UFirebaseRunTransactionCallback&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseRunTransactionCallback(UFirebaseRunTransactionCallback&&); \
	NO_API UFirebaseRunTransactionCallback(const UFirebaseRunTransactionCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseRunTransactionCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseRunTransactionCallback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirebaseRunTransactionCallback)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDataBaseRef() { return STRUCT_OFFSET(UFirebaseRunTransactionCallback, mDataBaseRef); }


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_18_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseRunTransactionCallback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
