// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderLab/Mejora.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMejora() {}
// Cross Module References
	BUILDERLAB_API UClass* Z_Construct_UClass_AMejora_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_AMejora();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_BuilderLab();
// End Cross Module References
	void AMejora::StaticRegisterNativesAMejora()
	{
	}
	UClass* Z_Construct_UClass_AMejora_NoRegister()
	{
		return AMejora::StaticClass();
	}
	struct Z_Construct_UClass_AMejora_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMejora_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMejora_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Mejora.h" },
		{ "ModuleRelativePath", "Mejora.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMejora_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMejora>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMejora_Statics::ClassParams = {
		&AMejora::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMejora_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMejora_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMejora()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMejora_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMejora, 4018521546);
	template<> BUILDERLAB_API UClass* StaticClass<AMejora>()
	{
		return AMejora::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMejora(Z_Construct_UClass_AMejora, &AMejora::StaticClass, TEXT("/Script/BuilderLab"), TEXT("AMejora"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMejora);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
