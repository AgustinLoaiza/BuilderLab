// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderLab/BuilderLabGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderLabGameMode() {}
// Cross Module References
	BUILDERLAB_API UClass* Z_Construct_UClass_ABuilderLabGameMode_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_ABuilderLabGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BuilderLab();
// End Cross Module References
	void ABuilderLabGameMode::StaticRegisterNativesABuilderLabGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABuilderLabGameMode_NoRegister()
	{
		return ABuilderLabGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABuilderLabGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilderLabGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderLabGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BuilderLabGameMode.h" },
		{ "ModuleRelativePath", "BuilderLabGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilderLabGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilderLabGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilderLabGameMode_Statics::ClassParams = {
		&ABuilderLabGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABuilderLabGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderLabGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilderLabGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilderLabGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilderLabGameMode, 108708685);
	template<> BUILDERLAB_API UClass* StaticClass<ABuilderLabGameMode>()
	{
		return ABuilderLabGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilderLabGameMode(Z_Construct_UClass_ABuilderLabGameMode, &ABuilderLabGameMode::StaticClass, TEXT("/Script/BuilderLab"), TEXT("ABuilderLabGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilderLabGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
