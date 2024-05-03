// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/P_FM_FABRICA_NAVES.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_FM_FABRICA_NAVES() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AP_FM_FABRICA_NAVES_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AP_FM_FABRICA_NAVES();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
// End Cross Module References
	void AP_FM_FABRICA_NAVES::StaticRegisterNativesAP_FM_FABRICA_NAVES()
	{
	}
	UClass* Z_Construct_UClass_AP_FM_FABRICA_NAVES_NoRegister()
	{
		return AP_FM_FABRICA_NAVES::StaticClass();
	}
	struct Z_Construct_UClass_AP_FM_FABRICA_NAVES_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP_FM_FABRICA_NAVES_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_FM_FABRICA_NAVES_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "P_FM_FABRICA_NAVES.h" },
		{ "ModuleRelativePath", "P_FM_FABRICA_NAVES.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP_FM_FABRICA_NAVES_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_FM_FABRICA_NAVES>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP_FM_FABRICA_NAVES_Statics::ClassParams = {
		&AP_FM_FABRICA_NAVES::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AP_FM_FABRICA_NAVES_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP_FM_FABRICA_NAVES_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP_FM_FABRICA_NAVES()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP_FM_FABRICA_NAVES_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP_FM_FABRICA_NAVES, 520100798);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AP_FM_FABRICA_NAVES>()
	{
		return AP_FM_FABRICA_NAVES::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP_FM_FABRICA_NAVES(Z_Construct_UClass_AP_FM_FABRICA_NAVES, &AP_FM_FABRICA_NAVES::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AP_FM_FABRICA_NAVES"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP_FM_FABRICA_NAVES);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
