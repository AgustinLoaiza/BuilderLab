// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderLab/ObjetoPrueba.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjetoPrueba() {}
// Cross Module References
	BUILDERLAB_API UClass* Z_Construct_UClass_AObjetoPrueba_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_AObjetoPrueba();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuilderLab();
// End Cross Module References
	void AObjetoPrueba::StaticRegisterNativesAObjetoPrueba()
	{
	}
	UClass* Z_Construct_UClass_AObjetoPrueba_NoRegister()
	{
		return AObjetoPrueba::StaticClass();
	}
	struct Z_Construct_UClass_AObjetoPrueba_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjetoPrueba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjetoPrueba_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjetoPrueba.h" },
		{ "ModuleRelativePath", "ObjetoPrueba.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjetoPrueba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjetoPrueba>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjetoPrueba_Statics::ClassParams = {
		&AObjetoPrueba::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObjetoPrueba_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjetoPrueba_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjetoPrueba()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjetoPrueba_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjetoPrueba, 1783283166);
	template<> BUILDERLAB_API UClass* StaticClass<AObjetoPrueba>()
	{
		return AObjetoPrueba::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjetoPrueba(Z_Construct_UClass_AObjetoPrueba, &AObjetoPrueba::StaticClass, TEXT("/Script/BuilderLab"), TEXT("AObjetoPrueba"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjetoPrueba);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
