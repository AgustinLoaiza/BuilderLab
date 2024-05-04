// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDERLAB_Paquetero_generated_h
#error "Paquetero.generated.h already included, missing '#pragma once' in Paquetero.h"
#endif
#define BUILDERLAB_Paquetero_generated_h

#define BuilderLab_Source_BuilderLab_Paquetero_h_13_SPARSE_DATA
#define BuilderLab_Source_BuilderLab_Paquetero_h_13_RPC_WRAPPERS
#define BuilderLab_Source_BuilderLab_Paquetero_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BuilderLab_Source_BuilderLab_Paquetero_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BUILDERLAB_API UPaquetero(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaquetero) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUILDERLAB_API, UPaquetero); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaquetero); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BUILDERLAB_API UPaquetero(UPaquetero&&); \
	BUILDERLAB_API UPaquetero(const UPaquetero&); \
public:


#define BuilderLab_Source_BuilderLab_Paquetero_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BUILDERLAB_API UPaquetero(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BUILDERLAB_API UPaquetero(UPaquetero&&); \
	BUILDERLAB_API UPaquetero(const UPaquetero&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUILDERLAB_API, UPaquetero); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaquetero); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaquetero)


#define BuilderLab_Source_BuilderLab_Paquetero_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPaquetero(); \
	friend struct Z_Construct_UClass_UPaquetero_Statics; \
public: \
	DECLARE_CLASS(UPaquetero, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BuilderLab"), BUILDERLAB_API) \
	DECLARE_SERIALIZER(UPaquetero)


#define BuilderLab_Source_BuilderLab_Paquetero_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BuilderLab_Source_BuilderLab_Paquetero_h_13_GENERATED_UINTERFACE_BODY() \
	BuilderLab_Source_BuilderLab_Paquetero_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuilderLab_Source_BuilderLab_Paquetero_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BuilderLab_Source_BuilderLab_Paquetero_h_13_GENERATED_UINTERFACE_BODY() \
	BuilderLab_Source_BuilderLab_Paquetero_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuilderLab_Source_BuilderLab_Paquetero_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPaquetero() {} \
public: \
	typedef UPaquetero UClassType; \
	typedef IPaquetero ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BuilderLab_Source_BuilderLab_Paquetero_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPaquetero() {} \
public: \
	typedef UPaquetero UClassType; \
	typedef IPaquetero ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BuilderLab_Source_BuilderLab_Paquetero_h_10_PROLOG
#define BuilderLab_Source_BuilderLab_Paquetero_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderLab_Source_BuilderLab_Paquetero_h_13_SPARSE_DATA \
	BuilderLab_Source_BuilderLab_Paquetero_h_13_RPC_WRAPPERS \
	BuilderLab_Source_BuilderLab_Paquetero_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuilderLab_Source_BuilderLab_Paquetero_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderLab_Source_BuilderLab_Paquetero_h_13_SPARSE_DATA \
	BuilderLab_Source_BuilderLab_Paquetero_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BuilderLab_Source_BuilderLab_Paquetero_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDERLAB_API UClass* StaticClass<class UPaquetero>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuilderLab_Source_BuilderLab_Paquetero_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
