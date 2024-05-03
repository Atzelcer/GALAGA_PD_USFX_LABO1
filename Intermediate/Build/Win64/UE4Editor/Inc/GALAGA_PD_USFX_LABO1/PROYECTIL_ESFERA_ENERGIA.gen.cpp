// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/PROYECTIL_ESFERA_ENERGIA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePROYECTIL_ESFERA_ENERGIA() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_APROYECTIL_ESFERA_ENERGIA_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_APROYECTIL_ESFERA_ENERGIA();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_APROYECTIL_NAVE_P();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
// End Cross Module References
	void APROYECTIL_ESFERA_ENERGIA::StaticRegisterNativesAPROYECTIL_ESFERA_ENERGIA()
	{
	}
	UClass* Z_Construct_UClass_APROYECTIL_ESFERA_ENERGIA_NoRegister()
	{
		return APROYECTIL_ESFERA_ENERGIA::StaticClass();
	}
	struct Z_Construct_UClass_APROYECTIL_ESFERA_ENERGIA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APROYECTIL_ESFERA_ENERGIA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APROYECTIL_NAVE_P,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APROYECTIL_ESFERA_ENERGIA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PROYECTIL_ESFERA_ENERGIA.h" },
		{ "ModuleRelativePath", "PROYECTIL_ESFERA_ENERGIA.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APROYECTIL_ESFERA_ENERGIA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APROYECTIL_ESFERA_ENERGIA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APROYECTIL_ESFERA_ENERGIA_Statics::ClassParams = {
		&APROYECTIL_ESFERA_ENERGIA::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APROYECTIL_ESFERA_ENERGIA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APROYECTIL_ESFERA_ENERGIA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APROYECTIL_ESFERA_ENERGIA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APROYECTIL_ESFERA_ENERGIA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APROYECTIL_ESFERA_ENERGIA, 1405188972);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<APROYECTIL_ESFERA_ENERGIA>()
	{
		return APROYECTIL_ESFERA_ENERGIA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APROYECTIL_ESFERA_ENERGIA(Z_Construct_UClass_APROYECTIL_ESFERA_ENERGIA, &APROYECTIL_ESFERA_ENERGIA::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("APROYECTIL_ESFERA_ENERGIA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APROYECTIL_ESFERA_ENERGIA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
