// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/LANZA_COHETES_ESPACIAL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLANZA_COHETES_ESPACIAL() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ALANZA_COHETES_ESPACIAL();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ALANZA_COHETES_ESPACIAL::StaticRegisterNativesALANZA_COHETES_ESPACIAL()
	{
	}
	UClass* Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_NoRegister()
	{
		return ALANZA_COHETES_ESPACIAL::StaticClass();
	}
	struct Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Malla_Cohete_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Malla_Cohete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LANZA_COHETES_ESPACIAL.h" },
		{ "ModuleRelativePath", "LANZA_COHETES_ESPACIAL.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::NewProp_Malla_Cohete_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LANZA_COHETES_ESPACIAL.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::NewProp_Malla_Cohete = { "Malla_Cohete", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALANZA_COHETES_ESPACIAL, Malla_Cohete), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::NewProp_Malla_Cohete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::NewProp_Malla_Cohete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::NewProp_Malla_Cohete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALANZA_COHETES_ESPACIAL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::ClassParams = {
		&ALANZA_COHETES_ESPACIAL::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALANZA_COHETES_ESPACIAL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALANZA_COHETES_ESPACIAL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALANZA_COHETES_ESPACIAL, 1255424390);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<ALANZA_COHETES_ESPACIAL>()
	{
		return ALANZA_COHETES_ESPACIAL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALANZA_COHETES_ESPACIAL(Z_Construct_UClass_ALANZA_COHETES_ESPACIAL, &ALANZA_COHETES_ESPACIAL::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("ALANZA_COHETES_ESPACIAL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALANZA_COHETES_ESPACIAL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
