// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/PROYECTIL_NAVE_02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePROYECTIL_NAVE_02() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_APROYECTIL_NAVE_02_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_APROYECTIL_NAVE_02();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_APROYECTIL_NAVE_P();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
// End Cross Module References
	void APROYECTIL_NAVE_02::StaticRegisterNativesAPROYECTIL_NAVE_02()
	{
	}
	UClass* Z_Construct_UClass_APROYECTIL_NAVE_02_NoRegister()
	{
		return APROYECTIL_NAVE_02::StaticClass();
	}
	struct Z_Construct_UClass_APROYECTIL_NAVE_02_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APROYECTIL_NAVE_02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APROYECTIL_NAVE_P,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APROYECTIL_NAVE_02_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PROYECTIL_NAVE_02.h" },
		{ "ModuleRelativePath", "PROYECTIL_NAVE_02.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APROYECTIL_NAVE_02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APROYECTIL_NAVE_02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APROYECTIL_NAVE_02_Statics::ClassParams = {
		&APROYECTIL_NAVE_02::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APROYECTIL_NAVE_02_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APROYECTIL_NAVE_02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APROYECTIL_NAVE_02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APROYECTIL_NAVE_02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APROYECTIL_NAVE_02, 1400861849);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<APROYECTIL_NAVE_02>()
	{
		return APROYECTIL_NAVE_02::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APROYECTIL_NAVE_02(Z_Construct_UClass_APROYECTIL_NAVE_02, &APROYECTIL_NAVE_02::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("APROYECTIL_NAVE_02"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APROYECTIL_NAVE_02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
