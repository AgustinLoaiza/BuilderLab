// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderLab/PaqueteroMejora.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaqueteroMejora() {}
// Cross Module References
	BUILDERLAB_API UClass* Z_Construct_UClass_APaqueteroMejora_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_APaqueteroMejora();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuilderLab();
	BUILDERLAB_API UClass* Z_Construct_UClass_UPaquetero_NoRegister();
// End Cross Module References
	void APaqueteroMejora::StaticRegisterNativesAPaqueteroMejora()
	{
	}
	UClass* Z_Construct_UClass_APaqueteroMejora_NoRegister()
	{
		return APaqueteroMejora::StaticClass();
	}
	struct Z_Construct_UClass_APaqueteroMejora_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaqueteroMejora_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaqueteroMejora_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaqueteroMejora.h" },
		{ "ModuleRelativePath", "PaqueteroMejora.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APaqueteroMejora_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPaquetero_NoRegister, (int32)VTABLE_OFFSET(APaqueteroMejora, IPaquetero), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaqueteroMejora_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaqueteroMejora>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaqueteroMejora_Statics::ClassParams = {
		&APaqueteroMejora::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaqueteroMejora_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaqueteroMejora_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaqueteroMejora()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaqueteroMejora_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaqueteroMejora, 1403924966);
	template<> BUILDERLAB_API UClass* StaticClass<APaqueteroMejora>()
	{
		return APaqueteroMejora::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaqueteroMejora(Z_Construct_UClass_APaqueteroMejora, &APaqueteroMejora::StaticClass, TEXT("/Script/BuilderLab"), TEXT("APaqueteroMejora"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaqueteroMejora);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
