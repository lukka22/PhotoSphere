// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFirebaseVariant;
class UFirebaseDataSnapshot;
#ifdef FIREBASE_FirebaseDataSnapshot_generated_h
#error "FirebaseDataSnapshot.generated.h already included, missing '#pragma once' in FirebaseDataSnapshot.h"
#endif
#define FIREBASE_FirebaseDataSnapshot_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasChild) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasChild(Z_Param_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=P_THIS->GetValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetKey(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasChildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasChildren(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChildrenCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ChildrenCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UFirebaseDataSnapshot*>*)Z_Param__Result=P_THIS->Children(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChild) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseDataSnapshot**)Z_Param__Result=P_THIS->Child(Z_Param_path); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasChild) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasChild(Z_Param_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=P_THIS->GetValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetKey(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasChildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasChildren(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChildrenCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ChildrenCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UFirebaseDataSnapshot*>*)Z_Param__Result=P_THIS->Children(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChild) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseDataSnapshot**)Z_Param__Result=P_THIS->Child(Z_Param_path); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseDataSnapshot(); \
	friend struct Z_Construct_UClass_UFirebaseDataSnapshot_Statics; \
public: \
	DECLARE_CLASS(UFirebaseDataSnapshot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseDataSnapshot)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseDataSnapshot(); \
	friend struct Z_Construct_UClass_UFirebaseDataSnapshot_Statics; \
public: \
	DECLARE_CLASS(UFirebaseDataSnapshot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseDataSnapshot)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseDataSnapshot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseDataSnapshot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseDataSnapshot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseDataSnapshot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseDataSnapshot(UFirebaseDataSnapshot&&); \
	NO_API UFirebaseDataSnapshot(const UFirebaseDataSnapshot&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseDataSnapshot(UFirebaseDataSnapshot&&); \
	NO_API UFirebaseDataSnapshot(const UFirebaseDataSnapshot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseDataSnapshot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseDataSnapshot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirebaseDataSnapshot)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_14_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseDataSnapshot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
