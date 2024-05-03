// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/SHIP_LEVEL_04.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHIP_LEVEL_04() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ASHIP_LEVEL_04_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ASHIP_LEVEL_04();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ASHIP_P();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
// End Cross Module References
	void ASHIP_LEVEL_04::StaticRegisterNativesASHIP_LEVEL_04()
	{
	}
	UClass* Z_Construct_UClass_ASHIP_LEVEL_04_NoRegister()
	{
		return ASHIP_LEVEL_04::StaticClass();
	}
	struct Z_Construct_UClass_ASHIP_LEVEL_04_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHIP_LEVEL_04_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASHIP_P,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHIP_LEVEL_04_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SHIP_LEVEL_04.h" },
		{ "ModuleRelativePath", "SHIP_LEVEL_04.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHIP_LEVEL_04_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHIP_LEVEL_04>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASHIP_LEVEL_04_Statics::ClassParams = {
		&ASHIP_LEVEL_04::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASHIP_LEVEL_04_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHIP_LEVEL_04_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHIP_LEVEL_04()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASHIP_LEVEL_04_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASHIP_LEVEL_04, 933156388);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<ASHIP_LEVEL_04>()
	{
		return ASHIP_LEVEL_04::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASHIP_LEVEL_04(Z_Construct_UClass_ASHIP_LEVEL_04, &ASHIP_LEVEL_04::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("ASHIP_LEVEL_04"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHIP_LEVEL_04);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
