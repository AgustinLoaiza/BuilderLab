// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BUILDERLAB_BuilderLabProjectile_generated_h
#error "BuilderLabProjectile.generated.h already included, missing '#pragma once' in BuilderLabProjectile.h"
#endif
#define BUILDERLAB_BuilderLabProjectile_generated_h

#define BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_SPARSE_DATA
#define BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuilderLabProjectile(); \
	friend struct Z_Construct_UClass_ABuilderLabProjectile_Statics; \
public: \
	DECLARE_CLASS(ABuilderLabProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuilderLab"), NO_API) \
	DECLARE_SERIALIZER(ABuilderLabProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABuilderLabProjectile(); \
	friend struct Z_Construct_UClass_ABuilderLabProjectile_Statics; \
public: \
	DECLARE_CLASS(ABuilderLabProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuilderLab"), NO_API) \
	DECLARE_SERIALIZER(ABuilderLabProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuilderLabProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuilderLabProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilderLabProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilderLabProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilderLabProjectile(ABuilderLabProjectile&&); \
	NO_API ABuilderLabProjectile(const ABuilderLabProjectile&); \
public:


#define BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilderLabProjectile(ABuilderLabProjectile&&); \
	NO_API ABuilderLabProjectile(const ABuilderLabProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilderLabProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilderLabProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuilderLabProjectile)


#define BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ABuilderLabProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABuilderLabProjectile, ProjectileMovement); }


#define BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_12_PROLOG
#define BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_SPARSE_DATA \
	BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_RPC_WRAPPERS \
	BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_INCLASS \
	BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_SPARSE_DATA \
	BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_INCLASS_NO_PURE_DECLS \
	BuilderLab_Source_BuilderLab_BuilderLabProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDERLAB_API UClass* StaticClass<class ABuilderLabProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuilderLab_Source_BuilderLab_BuilderLabProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
