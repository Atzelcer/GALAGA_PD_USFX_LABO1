// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/Torreta_Espacial_03.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTorreta_Espacial_03() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ATorreta_Espacial_03_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ATorreta_Espacial_03();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ATorreta_Espacial_02();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
// End Cross Module References
	void ATorreta_Espacial_03::StaticRegisterNativesATorreta_Espacial_03()
	{
	}
	UClass* Z_Construct_UClass_ATorreta_Espacial_03_NoRegister()
	{
		return ATorreta_Espacial_03::StaticClass();
	}
	struct Z_Construct_UClass_ATorreta_Espacial_03_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATorreta_Espacial_03_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATorreta_Espacial_02,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATorreta_Espacial_03_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Torreta_Espacial_03.h" },
		{ "ModuleRelativePath", "Torreta_Espacial_03.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATorreta_Espacial_03_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATorreta_Espacial_03>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATorreta_Espacial_03_Statics::ClassParams = {
		&ATorreta_Espacial_03::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATorreta_Espacial_03_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATorreta_Espacial_03_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATorreta_Espacial_03()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATorreta_Espacial_03_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATorreta_Espacial_03, 3090478113);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<ATorreta_Espacial_03>()
	{
		return ATorreta_Espacial_03::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATorreta_Espacial_03(Z_Construct_UClass_ATorreta_Espacial_03, &ATorreta_Espacial_03::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("ATorreta_Espacial_03"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATorreta_Espacial_03);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
