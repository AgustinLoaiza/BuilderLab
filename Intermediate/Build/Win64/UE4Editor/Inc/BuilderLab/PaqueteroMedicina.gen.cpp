// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderLab/PaqueteroMedicina.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaqueteroMedicina() {}
// Cross Module References
	BUILDERLAB_API UClass* Z_Construct_UClass_APaqueteroMedicina_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_APaqueteroMedicina();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuilderLab();
	BUILDERLAB_API UClass* Z_Construct_UClass_UPaquetero_NoRegister();
// End Cross Module References
	void APaqueteroMedicina::StaticRegisterNativesAPaqueteroMedicina()
	{
	}
	UClass* Z_Construct_UClass_APaqueteroMedicina_NoRegister()
	{
		return APaqueteroMedicina::StaticClass();
	}
	struct Z_Construct_UClass_APaqueteroMedicina_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaqueteroMedicina_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaqueteroMedicina_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaqueteroMedicina.h" },
		{ "ModuleRelativePath", "PaqueteroMedicina.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APaqueteroMedicina_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPaquetero_NoRegister, (int32)VTABLE_OFFSET(APaqueteroMedicina, IPaquetero), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaqueteroMedicina_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaqueteroMedicina>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaqueteroMedicina_Statics::ClassParams = {
		&APaqueteroMedicina::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaqueteroMedicina_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaqueteroMedicina_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaqueteroMedicina()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaqueteroMedicina_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaqueteroMedicina, 1537107475);
	template<> BUILDERLAB_API UClass* StaticClass<APaqueteroMedicina>()
	{
		return APaqueteroMedicina::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaqueteroMedicina(Z_Construct_UClass_APaqueteroMedicina, &APaqueteroMedicina::StaticClass, TEXT("/Script/BuilderLab"), TEXT("APaqueteroMedicina"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaqueteroMedicina);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
