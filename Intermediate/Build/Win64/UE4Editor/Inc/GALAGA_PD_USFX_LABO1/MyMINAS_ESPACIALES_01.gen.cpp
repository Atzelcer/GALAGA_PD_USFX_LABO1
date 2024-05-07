// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/MyMINAS_ESPACIALES_01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMINAS_ESPACIALES_01() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AMyMINAS_ESPACIALES_01_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AMyMINAS_ESPACIALES_01();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AMINAS_ESPACIALES();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
// End Cross Module References
	void AMyMINAS_ESPACIALES_01::StaticRegisterNativesAMyMINAS_ESPACIALES_01()
	{
	}
	UClass* Z_Construct_UClass_AMyMINAS_ESPACIALES_01_NoRegister()
	{
		return AMyMINAS_ESPACIALES_01::StaticClass();
	}
	struct Z_Construct_UClass_AMyMINAS_ESPACIALES_01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMINAS_ESPACIALES_01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMINAS_ESPACIALES,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMINAS_ESPACIALES_01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyMINAS_ESPACIALES_01.h" },
		{ "ModuleRelativePath", "MyMINAS_ESPACIALES_01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMINAS_ESPACIALES_01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMINAS_ESPACIALES_01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyMINAS_ESPACIALES_01_Statics::ClassParams = {
		&AMyMINAS_ESPACIALES_01::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyMINAS_ESPACIALES_01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMINAS_ESPACIALES_01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyMINAS_ESPACIALES_01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyMINAS_ESPACIALES_01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyMINAS_ESPACIALES_01, 3918368736);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AMyMINAS_ESPACIALES_01>()
	{
		return AMyMINAS_ESPACIALES_01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyMINAS_ESPACIALES_01(Z_Construct_UClass_AMyMINAS_ESPACIALES_01, &AMyMINAS_ESPACIALES_01::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AMyMINAS_ESPACIALES_01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMINAS_ESPACIALES_01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
