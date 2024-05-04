// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderLab/ComponenteGestion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteGestion() {}
// Cross Module References
	BUILDERLAB_API UClass* Z_Construct_UClass_UComponenteGestion_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_UComponenteGestion();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_BuilderLab();
// End Cross Module References
	void UComponenteGestion::StaticRegisterNativesUComponenteGestion()
	{
	}
	UClass* Z_Construct_UClass_UComponenteGestion_NoRegister()
	{
		return UComponenteGestion::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteGestion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteGestion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteGestion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ComponenteGestion.h" },
		{ "ModuleRelativePath", "ComponenteGestion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteGestion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteGestion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteGestion_Statics::ClassParams = {
		&UComponenteGestion::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UComponenteGestion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteGestion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteGestion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteGestion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteGestion, 1166940237);
	template<> BUILDERLAB_API UClass* StaticClass<UComponenteGestion>()
	{
		return UComponenteGestion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteGestion(Z_Construct_UClass_UComponenteGestion, &UComponenteGestion::StaticClass, TEXT("/Script/BuilderLab"), TEXT("UComponenteGestion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteGestion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
