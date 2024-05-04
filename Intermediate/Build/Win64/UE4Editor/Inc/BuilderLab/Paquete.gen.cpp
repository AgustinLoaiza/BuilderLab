// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderLab/Paquete.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaquete() {}
// Cross Module References
	BUILDERLAB_API UClass* Z_Construct_UClass_APaquete_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_APaquete();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuilderLab();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_UPlanosPaquete_NoRegister();
// End Cross Module References
	void APaquete::StaticRegisterNativesAPaquete()
	{
	}
	UClass* Z_Construct_UClass_APaquete_NoRegister()
	{
		return APaquete::StaticClass();
	}
	struct Z_Construct_UClass_APaquete_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsula_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Capsula;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaPaquete_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaPaquete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaquete_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaquete_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Paquete.h" },
		{ "ModuleRelativePath", "Paquete.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaquete_Statics::NewProp_Capsula_MetaData[] = {
		{ "Category", "Boqueron" },
		{ "ModuleRelativePath", "Paquete.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APaquete_Statics::NewProp_Capsula = { "Capsula", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaquete, Capsula), METADATA_PARAMS(Z_Construct_UClass_APaquete_Statics::NewProp_Capsula_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaquete_Statics::NewProp_Capsula_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaquete_Statics::NewProp_MallaPaquete_MetaData[] = {
		{ "Category", "Boqueron" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Paquete.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaquete_Statics::NewProp_MallaPaquete = { "MallaPaquete", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaquete, MallaPaquete), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaquete_Statics::NewProp_MallaPaquete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaquete_Statics::NewProp_MallaPaquete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaquete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaquete_Statics::NewProp_Capsula,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaquete_Statics::NewProp_MallaPaquete,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APaquete_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlanosPaquete_NoRegister, (int32)VTABLE_OFFSET(APaquete, IPlanosPaquete), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaquete_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaquete>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaquete_Statics::ClassParams = {
		&APaquete::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaquete_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaquete_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaquete_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaquete_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaquete()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaquete_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaquete, 471954218);
	template<> BUILDERLAB_API UClass* StaticClass<APaquete>()
	{
		return APaquete::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaquete(Z_Construct_UClass_APaquete, &APaquete::StaticClass, TEXT("/Script/BuilderLab"), TEXT("APaquete"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaquete);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
