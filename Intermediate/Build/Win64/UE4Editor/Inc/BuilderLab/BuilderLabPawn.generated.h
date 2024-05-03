// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDERLAB_BuilderLabPawn_generated_h
#error "BuilderLabPawn.generated.h already included, missing '#pragma once' in BuilderLabPawn.h"
#endif
#define BUILDERLAB_BuilderLabPawn_generated_h

#define BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_SPARSE_DATA
#define BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_RPC_WRAPPERS
#define BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuilderLabPawn(); \
	friend struct Z_Construct_UClass_ABuilderLabPawn_Statics; \
public: \
	DECLARE_CLASS(ABuilderLabPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuilderLab"), NO_API) \
	DECLARE_SERIALIZER(ABuilderLabPawn)


#define BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABuilderLabPawn(); \
	friend struct Z_Construct_UClass_ABuilderLabPawn_Statics; \
public: \
	DECLARE_CLASS(ABuilderLabPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuilderLab"), NO_API) \
	DECLARE_SERIALIZER(ABuilderLabPawn)


#define BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuilderLabPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuilderLabPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilderLabPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilderLabPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilderLabPawn(ABuilderLabPawn&&); \
	NO_API ABuilderLabPawn(const ABuilderLabPawn&); \
public:


#define BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilderLabPawn(ABuilderLabPawn&&); \
	NO_API ABuilderLabPawn(const ABuilderLabPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilderLabPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilderLabPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuilderLabPawn)


#define BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(ABuilderLabPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ABuilderLabPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABuilderLabPawn, CameraBoom); }


#define BuilderLab_Source_BuilderLab_BuilderLabPawn_h_9_PROLOG
#define BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_SPARSE_DATA \
	BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_RPC_WRAPPERS \
	BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_INCLASS \
	BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_SPARSE_DATA \
	BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_INCLASS_NO_PURE_DECLS \
	BuilderLab_Source_BuilderLab_BuilderLabPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDERLAB_API UClass* StaticClass<class ABuilderLabPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuilderLab_Source_BuilderLab_BuilderLabPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
