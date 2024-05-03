// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/P_FM_CREATE_SQUADRON_01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_FM_CREATE_SQUADRON_01() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AP_FM_CREATE_SQUADRON_01_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AP_FM_CREATE_SQUADRON_01();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AP_FM_FABRICA_NAVES();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
// End Cross Module References
	void AP_FM_CREATE_SQUADRON_01::StaticRegisterNativesAP_FM_CREATE_SQUADRON_01()
	{
	}
	UClass* Z_Construct_UClass_AP_FM_CREATE_SQUADRON_01_NoRegister()
	{
		return AP_FM_CREATE_SQUADRON_01::StaticClass();
	}
	struct Z_Construct_UClass_AP_FM_CREATE_SQUADRON_01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP_FM_CREATE_SQUADRON_01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AP_FM_FABRICA_NAVES,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_FM_CREATE_SQUADRON_01_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "P_FM_CREATE_SQUADRON_01.h" },
		{ "ModuleRelativePath", "P_FM_CREATE_SQUADRON_01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP_FM_CREATE_SQUADRON_01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_FM_CREATE_SQUADRON_01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP_FM_CREATE_SQUADRON_01_Statics::ClassParams = {
		&AP_FM_CREATE_SQUADRON_01::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AP_FM_CREATE_SQUADRON_01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP_FM_CREATE_SQUADRON_01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP_FM_CREATE_SQUADRON_01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP_FM_CREATE_SQUADRON_01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP_FM_CREATE_SQUADRON_01, 2614560211);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AP_FM_CREATE_SQUADRON_01>()
	{
		return AP_FM_CREATE_SQUADRON_01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP_FM_CREATE_SQUADRON_01(Z_Construct_UClass_AP_FM_CREATE_SQUADRON_01, &AP_FM_CREATE_SQUADRON_01::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AP_FM_CREATE_SQUADRON_01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP_FM_CREATE_SQUADRON_01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
