// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderLab/ComponenteMedicina.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteMedicina() {}
// Cross Module References
	BUILDERLAB_API UClass* Z_Construct_UClass_UComponenteMedicina_NoRegister();
	BUILDERLAB_API UClass* Z_Construct_UClass_UComponenteMedicina();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuilderLab();
	BUILDERLAB_API UClass* Z_Construct_UClass_AMedicina_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UComponenteMedicina::execRemoveFromInventory)
	{
		P_GET_OBJECT(AMedicina,Z_Param_ActorToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromInventory(Z_Param_ActorToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponenteMedicina::execAddToInventory)
	{
		P_GET_OBJECT(AMedicina,Z_Param_ActorToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddToInventory(Z_Param_ActorToAdd);
		P_NATIVE_END;
	}
	void UComponenteMedicina::StaticRegisterNativesUComponenteMedicina()
	{
		UClass* Class = UComponenteMedicina::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToInventory", &UComponenteMedicina::execAddToInventory },
			{ "RemoveFromInventory", &UComponenteMedicina::execRemoveFromInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComponenteMedicina_AddToInventory_Statics
	{
		struct ComponenteMedicina_eventAddToInventory_Parms
		{
			AMedicina* ActorToAdd;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToAdd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponenteMedicina_AddToInventory_Statics::NewProp_ActorToAdd = { "ActorToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteMedicina_eventAddToInventory_Parms, ActorToAdd), Z_Construct_UClass_AMedicina_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComponenteMedicina_AddToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteMedicina_eventAddToInventory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponenteMedicina_AddToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteMedicina_AddToInventory_Statics::NewProp_ActorToAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteMedicina_AddToInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteMedicina_AddToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ComponenteMedicina.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteMedicina_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteMedicina, nullptr, "AddToInventory", nullptr, nullptr, sizeof(ComponenteMedicina_eventAddToInventory_Parms), Z_Construct_UFunction_UComponenteMedicina_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteMedicina_AddToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteMedicina_AddToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteMedicina_AddToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteMedicina_AddToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteMedicina_AddToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponenteMedicina_RemoveFromInventory_Statics
	{
		struct ComponenteMedicina_eventRemoveFromInventory_Parms
		{
			AMedicina* ActorToRemove;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponenteMedicina_RemoveFromInventory_Statics::NewProp_ActorToRemove = { "ActorToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteMedicina_eventRemoveFromInventory_Parms, ActorToRemove), Z_Construct_UClass_AMedicina_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponenteMedicina_RemoveFromInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteMedicina_RemoveFromInventory_Statics::NewProp_ActorToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteMedicina_RemoveFromInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ComponenteMedicina.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteMedicina_RemoveFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteMedicina, nullptr, "RemoveFromInventory", nullptr, nullptr, sizeof(ComponenteMedicina_eventRemoveFromInventory_Parms), Z_Construct_UFunction_UComponenteMedicina_RemoveFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteMedicina_RemoveFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteMedicina_RemoveFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteMedicina_RemoveFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteMedicina_RemoveFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteMedicina_RemoveFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComponenteMedicina_NoRegister()
	{
		return UComponenteMedicina::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteMedicina_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteMedicina_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderLab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComponenteMedicina_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComponenteMedicina_AddToInventory, "AddToInventory" }, // 2168751931
		{ &Z_Construct_UFunction_UComponenteMedicina_RemoveFromInventory, "RemoveFromInventory" }, // 297731088
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMedicina_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponenteMedicina.h" },
		{ "ModuleRelativePath", "ComponenteMedicina.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComponenteMedicina_Statics::NewProp_CurrentInventory_Inner = { "CurrentInventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMedicina_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMedicina_Statics::NewProp_CurrentInventory_MetaData[] = {
		{ "ModuleRelativePath", "ComponenteMedicina.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComponenteMedicina_Statics::NewProp_CurrentInventory = { "CurrentInventory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteMedicina, CurrentInventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComponenteMedicina_Statics::NewProp_CurrentInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMedicina_Statics::NewProp_CurrentInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComponenteMedicina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteMedicina_Statics::NewProp_CurrentInventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteMedicina_Statics::NewProp_CurrentInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteMedicina_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteMedicina>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteMedicina_Statics::ClassParams = {
		&UComponenteMedicina::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComponenteMedicina_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMedicina_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteMedicina_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMedicina_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteMedicina()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteMedicina_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteMedicina, 1684463092);
	template<> BUILDERLAB_API UClass* StaticClass<UComponenteMedicina>()
	{
		return UComponenteMedicina::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteMedicina(Z_Construct_UClass_UComponenteMedicina, &UComponenteMedicina::StaticClass, TEXT("/Script/BuilderLab"), TEXT("UComponenteMedicina"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteMedicina);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
