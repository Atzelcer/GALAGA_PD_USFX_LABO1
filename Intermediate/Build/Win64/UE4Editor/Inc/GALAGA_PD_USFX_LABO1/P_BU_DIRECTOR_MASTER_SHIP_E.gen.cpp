// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/P_BU_DIRECTOR_MASTER_SHIP_E.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_BU_DIRECTOR_MASTER_SHIP_E() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AP_BU_DIRECTOR_MASTER_SHIP_E_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AP_BU_DIRECTOR_MASTER_SHIP_E();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
// End Cross Module References
	void AP_BU_DIRECTOR_MASTER_SHIP_E::StaticRegisterNativesAP_BU_DIRECTOR_MASTER_SHIP_E()
	{
	}
	UClass* Z_Construct_UClass_AP_BU_DIRECTOR_MASTER_SHIP_E_NoRegister()
	{
		return AP_BU_DIRECTOR_MASTER_SHIP_E::StaticClass();
	}
	struct Z_Construct_UClass_AP_BU_DIRECTOR_MASTER_SHIP_E_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP_BU_DIRECTOR_MASTER_SHIP_E_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_BU_DIRECTOR_MASTER_SHIP_E_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "P_BU_DIRECTOR_MASTER_SHIP_E.h" },
		{ "ModuleRelativePath", "P_BU_DIRECTOR_MASTER_SHIP_E.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP_BU_DIRECTOR_MASTER_SHIP_E_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_BU_DIRECTOR_MASTER_SHIP_E>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP_BU_DIRECTOR_MASTER_SHIP_E_Statics::ClassParams = {
		&AP_BU_DIRECTOR_MASTER_SHIP_E::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AP_BU_DIRECTOR_MASTER_SHIP_E_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP_BU_DIRECTOR_MASTER_SHIP_E_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP_BU_DIRECTOR_MASTER_SHIP_E()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP_BU_DIRECTOR_MASTER_SHIP_E_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP_BU_DIRECTOR_MASTER_SHIP_E, 1574893271);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AP_BU_DIRECTOR_MASTER_SHIP_E>()
	{
		return AP_BU_DIRECTOR_MASTER_SHIP_E::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP_BU_DIRECTOR_MASTER_SHIP_E(Z_Construct_UClass_AP_BU_DIRECTOR_MASTER_SHIP_E, &AP_BU_DIRECTOR_MASTER_SHIP_E::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AP_BU_DIRECTOR_MASTER_SHIP_E"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP_BU_DIRECTOR_MASTER_SHIP_E);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
