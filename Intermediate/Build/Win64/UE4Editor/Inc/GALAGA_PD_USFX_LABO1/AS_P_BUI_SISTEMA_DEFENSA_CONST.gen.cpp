// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/AS_P_BUI_SISTEMA_DEFENSA_CONST.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAS_P_BUI_SISTEMA_DEFENSA_CONST() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_US_P_INT_02_SISTEMA_DEFENSA_NoRegister();
// End Cross Module References
	void AAS_P_BUI_SISTEMA_DEFENSA_CONST::StaticRegisterNativesAAS_P_BUI_SISTEMA_DEFENSA_CONST()
	{
	}
	UClass* Z_Construct_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST_NoRegister()
	{
		return AAS_P_BUI_SISTEMA_DEFENSA_CONST::StaticClass();
	}
	struct Z_Construct_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AS_P_BUI_SISTEMA_DEFENSA_CONST.h" },
		{ "ModuleRelativePath", "AS_P_BUI_SISTEMA_DEFENSA_CONST.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_US_P_INT_02_SISTEMA_DEFENSA_NoRegister, (int32)VTABLE_OFFSET(AAS_P_BUI_SISTEMA_DEFENSA_CONST, IS_P_INT_02_SISTEMA_DEFENSA), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAS_P_BUI_SISTEMA_DEFENSA_CONST>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST_Statics::ClassParams = {
		&AAS_P_BUI_SISTEMA_DEFENSA_CONST::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAS_P_BUI_SISTEMA_DEFENSA_CONST, 2488954427);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AAS_P_BUI_SISTEMA_DEFENSA_CONST>()
	{
		return AAS_P_BUI_SISTEMA_DEFENSA_CONST::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST(Z_Construct_UClass_AAS_P_BUI_SISTEMA_DEFENSA_CONST, &AAS_P_BUI_SISTEMA_DEFENSA_CONST::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AAS_P_BUI_SISTEMA_DEFENSA_CONST"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAS_P_BUI_SISTEMA_DEFENSA_CONST);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
