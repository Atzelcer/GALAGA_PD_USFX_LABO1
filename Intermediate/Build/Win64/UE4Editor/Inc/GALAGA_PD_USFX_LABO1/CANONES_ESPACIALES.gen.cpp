// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/CANONES_ESPACIALES.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCANONES_ESPACIALES() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ACANONES_ESPACIALES_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ACANONES_ESPACIALES();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACANONES_ESPACIALES::StaticRegisterNativesACANONES_ESPACIALES()
	{
	}
	UClass* Z_Construct_UClass_ACANONES_ESPACIALES_NoRegister()
	{
		return ACANONES_ESPACIALES::StaticClass();
	}
	struct Z_Construct_UClass_ACANONES_ESPACIALES_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Malla_Canone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Malla_Canone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACANONES_ESPACIALES_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACANONES_ESPACIALES_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CANONES_ESPACIALES.h" },
		{ "ModuleRelativePath", "CANONES_ESPACIALES.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACANONES_ESPACIALES_Statics::NewProp_Malla_Canone_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CANONES_ESPACIALES.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACANONES_ESPACIALES_Statics::NewProp_Malla_Canone = { "Malla_Canone", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACANONES_ESPACIALES, Malla_Canone), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACANONES_ESPACIALES_Statics::NewProp_Malla_Canone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACANONES_ESPACIALES_Statics::NewProp_Malla_Canone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACANONES_ESPACIALES_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACANONES_ESPACIALES_Statics::NewProp_Malla_Canone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACANONES_ESPACIALES_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACANONES_ESPACIALES>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACANONES_ESPACIALES_Statics::ClassParams = {
		&ACANONES_ESPACIALES::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACANONES_ESPACIALES_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACANONES_ESPACIALES_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACANONES_ESPACIALES_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACANONES_ESPACIALES_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACANONES_ESPACIALES()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACANONES_ESPACIALES_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACANONES_ESPACIALES, 220765895);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<ACANONES_ESPACIALES>()
	{
		return ACANONES_ESPACIALES::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACANONES_ESPACIALES(Z_Construct_UClass_ACANONES_ESPACIALES, &ACANONES_ESPACIALES::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("ACANONES_ESPACIALES"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACANONES_ESPACIALES);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
