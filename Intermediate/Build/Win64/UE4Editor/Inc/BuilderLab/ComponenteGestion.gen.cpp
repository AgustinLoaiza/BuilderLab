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
	DEFINE_FUNCTION(UComponenteGestion::execSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn();
		P_NATIVE_END;
	}
	void UComponenteGestion::StaticRegisterNativesUComponenteGestion()
	{
		UClass* Class = UComponenteGestion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Spawn", &UComponenteGestion::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComponenteGestion_Spawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteGestion_Spawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ComponenteGestion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteGestion_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteGestion, nullptr, "Spawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteGestion_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteGestion_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteGestion_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteGestion_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComponenteGestion_NoRegister()
	{
		return UComponenteGestion::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteGestion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UComponenteGestion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComponenteGestion_Spawn, "Spawn" }, // 593711767
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UComponenteGestion, 267501956);
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
