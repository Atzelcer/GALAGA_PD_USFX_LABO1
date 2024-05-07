// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/AAS_P_BUI_SISTEMA_DEFENSA_PASIVA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAAS_P_BUI_SISTEMA_DEFENSA_PASIVA() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_NoRegister();
// End Cross Module References
	void AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA::StaticRegisterNativesAAAS_P_BUI_SISTEMA_DEFENSA_PASIVA()
	{
	}
	UClass* Z_Construct_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA_NoRegister()
	{
		return AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA::StaticClass();
	}
	struct Z_Construct_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AAS_P_BUI_SISTEMA_DEFENSA_PASIVA.h" },
		{ "ModuleRelativePath", "AAS_P_BUI_SISTEMA_DEFENSA_PASIVA.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_NoRegister, (int32)VTABLE_OFFSET(AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA, IS_P_INT_SISTEMA_DEFENSA), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA_Statics::ClassParams = {
		&AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA, 1833377330);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA>()
	{
		return AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA(Z_Construct_UClass_AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA, &AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAAS_P_BUI_SISTEMA_DEFENSA_PASIVA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
