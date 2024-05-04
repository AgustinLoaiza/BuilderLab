// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderLab/Velocidad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVelocidad() {}
// Cross Module References
	BUILDERLAB_API UClass* Z_Construct_UClass_AVelocidad_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_AVelocidad();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_BuilderLab();
// End Cross Module References
	void AVelocidad::StaticRegisterNativesAVelocidad()
	{
	}
	UClass* Z_Construct_UClass_AVelocidad_NoRegister()
	{
		return AVelocidad::StaticClass();
	}
	struct Z_Construct_UClass_AVelocidad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVelocidad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVelocidad_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Velocidad.h" },
		{ "ModuleRelativePath", "Velocidad.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVelocidad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVelocidad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVelocidad_Statics::ClassParams = {
		&AVelocidad::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVelocidad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVelocidad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVelocidad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVelocidad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVelocidad, 2628836388);
	template<> BUILDERLAB_API UClass* StaticClass<AVelocidad>()
	{
		return AVelocidad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVelocidad(Z_Construct_UClass_AVelocidad, &AVelocidad::StaticClass, TEXT("/Script/BuilderLab"), TEXT("AVelocidad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVelocidad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
