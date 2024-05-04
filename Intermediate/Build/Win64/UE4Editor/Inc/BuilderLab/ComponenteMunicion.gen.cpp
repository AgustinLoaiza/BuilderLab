// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderLab/ComponenteMunicion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteMunicion() {}
// Cross Module References
	BUILDERLAB_API UClass* Z_Construct_UClass_UComponenteMunicion_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_UComponenteMunicion();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuilderLab();
// End Cross Module References
	void UComponenteMunicion::StaticRegisterNativesUComponenteMunicion()
	{
	}
	UClass* Z_Construct_UClass_UComponenteMunicion_NoRegister()
	{
		return UComponenteMunicion::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteMunicion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteMunicion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMunicion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponenteMunicion.h" },
		{ "ModuleRelativePath", "ComponenteMunicion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteMunicion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteMunicion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteMunicion_Statics::ClassParams = {
		&UComponenteMunicion::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteMunicion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMunicion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteMunicion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteMunicion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteMunicion, 3440122472);
	template<> BUILDERLAB_API UClass* StaticClass<UComponenteMunicion>()
	{
		return UComponenteMunicion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteMunicion(Z_Construct_UClass_UComponenteMunicion, &UComponenteMunicion::StaticClass, TEXT("/Script/BuilderLab"), TEXT("UComponenteMunicion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteMunicion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
