// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UFirebaseVariant;
class UFirebaseVariant;
#ifdef FIREBASE_FirebaseVariant_generated_h
#error "FirebaseVariant.generated.h already included, missing '#pragma once' in FirebaseVariant.h"
#endif
#define FIREBASE_FirebaseVariant_generated_h

#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateVariantMap) \
	{ \
		P_GET_TMAP_REF(FString,UFirebaseVariant*,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=UFirebaseVariant::CreateVariantMap(Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVariantVector) \
	{ \
		P_GET_TARRAY_REF(UFirebaseVariant*,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=UFirebaseVariant::CreateVariantVector(Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVariantString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=UFirebaseVariant::CreateVariantString(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVariantBool) \
	{ \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=UFirebaseVariant::CreateVariantBool(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVariantFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=UFirebaseVariant::CreateVariantFloat(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVariantInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=UFirebaseVariant::CreateVariantInt(Z_Param_value); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateVariantMap) \
	{ \
		P_GET_TMAP_REF(FString,UFirebaseVariant*,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=UFirebaseVariant::CreateVariantMap(Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVariantVector) \
	{ \
		P_GET_TARRAY_REF(UFirebaseVariant*,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=UFirebaseVariant::CreateVariantVector(Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVariantString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=UFirebaseVariant::CreateVariantString(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVariantBool) \
	{ \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=UFirebaseVariant::CreateVariantBool(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVariantFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=UFirebaseVariant::CreateVariantFloat(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVariantInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFirebaseVariant**)Z_Param__Result=UFirebaseVariant::CreateVariantInt(Z_Param_value); \
		P_NATIVE_END; \
	}


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseVariant(); \
	friend struct Z_Construct_UClass_UFirebaseVariant_Statics; \
public: \
	DECLARE_CLASS(UFirebaseVariant, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseVariant)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseVariant(); \
	friend struct Z_Construct_UClass_UFirebaseVariant_Statics; \
public: \
	DECLARE_CLASS(UFirebaseVariant, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FireBase"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseVariant)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseVariant(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseVariant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseVariant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseVariant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseVariant(UFirebaseVariant&&); \
	NO_API UFirebaseVariant(const UFirebaseVariant&); \
public:


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseVariant(UFirebaseVariant&&); \
	NO_API UFirebaseVariant(const UFirebaseVariant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseVariant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseVariant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirebaseVariant)


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_PRIVATE_PROPERTY_OFFSET
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_29_PROLOG
#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_RPC_WRAPPERS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_INCLASS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_PRIVATE_PROPERTY_OFFSET \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_INCLASS_NO_PURE_DECLS \
	PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhotoSphere_Plugins_FireBase_Source_FireBase_Public_FirebaseVariant_h


#define FOREACH_ENUM_VARIANTTYPE(op) \
	op(VariantType::Null) \
	op(VariantType::Int) \
	op(VariantType::Float) \
	op(VariantType::Bool) \
	op(VariantType::String) \
	op(VariantType::Vector) \
	op(VariantType::Map) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
