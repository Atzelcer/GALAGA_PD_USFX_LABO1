// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/Torreta_Espacial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTorreta_Espacial() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ATorreta_Espacial_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ATorreta_Espacial();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATorreta_Espacial::StaticRegisterNativesATorreta_Espacial()
	{
	}
	UClass* Z_Construct_UClass_ATorreta_Espacial_NoRegister()
	{
		return ATorreta_Espacial::StaticClass();
	}
	struct Z_Construct_UClass_ATorreta_Espacial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Malla_Torreta_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Malla_Torreta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATorreta_Espacial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATorreta_Espacial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Torreta_Espacial.h" },
		{ "ModuleRelativePath", "Torreta_Espacial.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATorreta_Espacial_Statics::NewProp_Malla_Torreta_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Torreta_Espacial.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATorreta_Espacial_Statics::NewProp_Malla_Torreta = { "Malla_Torreta", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATorreta_Espacial, Malla_Torreta), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATorreta_Espacial_Statics::NewProp_Malla_Torreta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATorreta_Espacial_Statics::NewProp_Malla_Torreta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATorreta_Espacial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATorreta_Espacial_Statics::NewProp_Malla_Torreta,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATorreta_Espacial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATorreta_Espacial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATorreta_Espacial_Statics::ClassParams = {
		&ATorreta_Espacial::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATorreta_Espacial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATorreta_Espacial_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATorreta_Espacial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATorreta_Espacial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATorreta_Espacial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATorreta_Espacial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATorreta_Espacial, 3509903512);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<ATorreta_Espacial>()
	{
		return ATorreta_Espacial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATorreta_Espacial(Z_Construct_UClass_ATorreta_Espacial, &ATorreta_Espacial::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("ATorreta_Espacial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATorreta_Espacial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
