// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderLab/PaqueteroVelocidad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaqueteroVelocidad() {}
// Cross Module References
	BUILDERLAB_API UClass* Z_Construct_UClass_APaqueteroVelocidad_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_APaqueteroVelocidad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuilderLab();
// End Cross Module References
	void APaqueteroVelocidad::StaticRegisterNativesAPaqueteroVelocidad()
	{
	}
	UClass* Z_Construct_UClass_APaqueteroVelocidad_NoRegister()
	{
		return APaqueteroVelocidad::StaticClass();
	}
	struct Z_Construct_UClass_APaqueteroVelocidad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaqueteroVelocidad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaqueteroVelocidad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaqueteroVelocidad.h" },
		{ "ModuleRelativePath", "PaqueteroVelocidad.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaqueteroVelocidad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaqueteroVelocidad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaqueteroVelocidad_Statics::ClassParams = {
		&APaqueteroVelocidad::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaqueteroVelocidad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaqueteroVelocidad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaqueteroVelocidad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaqueteroVelocidad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaqueteroVelocidad, 544458848);
	template<> BUILDERLAB_API UClass* StaticClass<APaqueteroVelocidad>()
	{
		return APaqueteroVelocidad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaqueteroVelocidad(Z_Construct_UClass_APaqueteroVelocidad, &APaqueteroVelocidad::StaticClass, TEXT("/Script/BuilderLab"), TEXT("APaqueteroVelocidad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaqueteroVelocidad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
