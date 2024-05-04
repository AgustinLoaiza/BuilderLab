// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderLab/PaqueteroBalas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaqueteroBalas() {}
// Cross Module References
	BUILDERLAB_API UClass* Z_Construct_UClass_APaqueteroBalas_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_APaqueteroBalas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuilderLab();
	BUILDERLAB_API UClass* Z_Construct_UClass_UPaquetero_NoRegister();
// End Cross Module References
	void APaqueteroBalas::StaticRegisterNativesAPaqueteroBalas()
	{
	}
	UClass* Z_Construct_UClass_APaqueteroBalas_NoRegister()
	{
		return APaqueteroBalas::StaticClass();
	}
	struct Z_Construct_UClass_APaqueteroBalas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaqueteroBalas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaqueteroBalas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaqueteroBalas.h" },
		{ "ModuleRelativePath", "PaqueteroBalas.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APaqueteroBalas_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPaquetero_NoRegister, (int32)VTABLE_OFFSET(APaqueteroBalas, IPaquetero), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaqueteroBalas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaqueteroBalas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaqueteroBalas_Statics::ClassParams = {
		&APaqueteroBalas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaqueteroBalas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaqueteroBalas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaqueteroBalas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaqueteroBalas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaqueteroBalas, 1456163116);
	template<> BUILDERLAB_API UClass* StaticClass<APaqueteroBalas>()
	{
		return APaqueteroBalas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaqueteroBalas(Z_Construct_UClass_APaqueteroBalas, &APaqueteroBalas::StaticClass, TEXT("/Script/BuilderLab"), TEXT("APaqueteroBalas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaqueteroBalas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
