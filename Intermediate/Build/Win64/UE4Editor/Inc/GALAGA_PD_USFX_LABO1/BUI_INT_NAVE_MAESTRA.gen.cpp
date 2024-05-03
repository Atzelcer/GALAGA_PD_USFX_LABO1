// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/BUI_INT_NAVE_MAESTRA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBUI_INT_NAVE_MAESTRA() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
// End Cross Module References
	void UBUI_INT_NAVE_MAESTRA::StaticRegisterNativesUBUI_INT_NAVE_MAESTRA()
	{
	}
	UClass* Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA_NoRegister()
	{
		return UBUI_INT_NAVE_MAESTRA::StaticClass();
	}
	struct Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BUI_INT_NAVE_MAESTRA.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBUI_INT_NAVE_MAESTRA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA_Statics::ClassParams = {
		&UBUI_INT_NAVE_MAESTRA::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBUI_INT_NAVE_MAESTRA, 2187078197);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<UBUI_INT_NAVE_MAESTRA>()
	{
		return UBUI_INT_NAVE_MAESTRA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBUI_INT_NAVE_MAESTRA(Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA, &UBUI_INT_NAVE_MAESTRA::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("UBUI_INT_NAVE_MAESTRA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBUI_INT_NAVE_MAESTRA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
