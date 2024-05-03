// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/P_FM_ACTIVATION_NAVE.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_FM_ACTIVATION_NAVE() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AP_FM_ACTIVATION_NAVE_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AP_FM_ACTIVATION_NAVE();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AP_FM_FABRICA_NAVES();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
// End Cross Module References
	void AP_FM_ACTIVATION_NAVE::StaticRegisterNativesAP_FM_ACTIVATION_NAVE()
	{
	}
	UClass* Z_Construct_UClass_AP_FM_ACTIVATION_NAVE_NoRegister()
	{
		return AP_FM_ACTIVATION_NAVE::StaticClass();
	}
	struct Z_Construct_UClass_AP_FM_ACTIVATION_NAVE_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP_FM_ACTIVATION_NAVE_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AP_FM_FABRICA_NAVES,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_FM_ACTIVATION_NAVE_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "P_FM_ACTIVATION_NAVE.h" },
		{ "ModuleRelativePath", "P_FM_ACTIVATION_NAVE.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP_FM_ACTIVATION_NAVE_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_FM_ACTIVATION_NAVE>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP_FM_ACTIVATION_NAVE_Statics::ClassParams = {
		&AP_FM_ACTIVATION_NAVE::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AP_FM_ACTIVATION_NAVE_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP_FM_ACTIVATION_NAVE_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP_FM_ACTIVATION_NAVE()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP_FM_ACTIVATION_NAVE_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP_FM_ACTIVATION_NAVE, 493887117);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AP_FM_ACTIVATION_NAVE>()
	{
		return AP_FM_ACTIVATION_NAVE::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP_FM_ACTIVATION_NAVE(Z_Construct_UClass_AP_FM_ACTIVATION_NAVE, &AP_FM_ACTIVATION_NAVE::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AP_FM_ACTIVATION_NAVE"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP_FM_ACTIVATION_NAVE);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
