// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderLab/Medicina.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMedicina() {}
// Cross Module References
	BUILDERLAB_API UClass* Z_Construct_UClass_AMedicina_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_AMedicina();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_BuilderLab();
// End Cross Module References
	void AMedicina::StaticRegisterNativesAMedicina()
	{
	}
	UClass* Z_Construct_UClass_AMedicina_NoRegister()
	{
		return AMedicina::StaticClass();
	}
	struct Z_Construct_UClass_AMedicina_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMedicina_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedicina_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Medicina.h" },
		{ "ModuleRelativePath", "Medicina.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMedicina_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMedicina>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMedicina_Statics::ClassParams = {
		&AMedicina::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMedicina_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMedicina_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMedicina()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMedicina_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMedicina, 157135248);
	template<> BUILDERLAB_API UClass* StaticClass<AMedicina>()
	{
		return AMedicina::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMedicina(Z_Construct_UClass_AMedicina, &AMedicina::StaticClass, TEXT("/Script/BuilderLab"), TEXT("AMedicina"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMedicina);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
