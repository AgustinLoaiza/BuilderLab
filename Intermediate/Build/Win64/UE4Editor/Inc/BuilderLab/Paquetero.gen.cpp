// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderLab/Paquetero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaquetero() {}
// Cross Module References
	BUILDERLAB_API UClass* Z_Construct_UClass_UPaquetero_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_UPaquetero();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BuilderLab();
// End Cross Module References
	void UPaquetero::StaticRegisterNativesUPaquetero()
	{
	}
	UClass* Z_Construct_UClass_UPaquetero_NoRegister()
	{
		return UPaquetero::StaticClass();
	}
	struct Z_Construct_UClass_UPaquetero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaquetero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaquetero_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Paquetero.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaquetero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPaquetero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaquetero_Statics::ClassParams = {
		&UPaquetero::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPaquetero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaquetero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaquetero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaquetero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaquetero, 1202907078);
	template<> BUILDERLAB_API UClass* StaticClass<UPaquetero>()
	{
		return UPaquetero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaquetero(Z_Construct_UClass_UPaquetero, &UPaquetero::StaticClass, TEXT("/Script/BuilderLab"), TEXT("UPaquetero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaquetero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
