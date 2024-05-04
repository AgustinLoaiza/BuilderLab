// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMunicion;
#ifdef BUILDERLAB_ComponenteMunicion_generated_h
#error "ComponenteMunicion.generated.h already included, missing '#pragma once' in ComponenteMunicion.h"
#endif
#define BUILDERLAB_ComponenteMunicion_generated_h

#define BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_SPARSE_DATA
#define BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execAddToInventory);


#define BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execAddToInventory);


#define BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponenteMunicion(); \
	friend struct Z_Construct_UClass_UComponenteMunicion_Statics; \
public: \
	DECLARE_CLASS(UComponenteMunicion, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuilderLab"), NO_API) \
	DECLARE_SERIALIZER(UComponenteMunicion)


#define BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUComponenteMunicion(); \
	friend struct Z_Construct_UClass_UComponenteMunicion_Statics; \
public: \
	DECLARE_CLASS(UComponenteMunicion, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuilderLab"), NO_API) \
	DECLARE_SERIALIZER(UComponenteMunicion)


#define BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComponenteMunicion(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponenteMunicion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComponenteMunicion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponenteMunicion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComponenteMunicion(UComponenteMunicion&&); \
	NO_API UComponenteMunicion(const UComponenteMunicion&); \
public:


#define BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComponenteMunicion(UComponenteMunicion&&); \
	NO_API UComponenteMunicion(const UComponenteMunicion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComponenteMunicion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponenteMunicion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComponenteMunicion)


#define BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_PRIVATE_PROPERTY_OFFSET
#define BuilderLab_Source_BuilderLab_ComponenteMunicion_h_11_PROLOG
#define BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_PRIVATE_PROPERTY_OFFSET \
	BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_SPARSE_DATA \
	BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_RPC_WRAPPERS \
	BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_INCLASS \
	BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_PRIVATE_PROPERTY_OFFSET \
	BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_SPARSE_DATA \
	BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_INCLASS_NO_PURE_DECLS \
	BuilderLab_Source_BuilderLab_ComponenteMunicion_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDERLAB_API UClass* StaticClass<class UComponenteMunicion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuilderLab_Source_BuilderLab_ComponenteMunicion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
