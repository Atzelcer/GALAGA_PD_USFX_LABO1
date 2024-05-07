// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/AAAS_P_BUI_SISTEMA_DEFENSA_FURIA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAAAS_P_BUI_SISTEMA_DEFENSA_FURIA() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_NoRegister();
// End Cross Module References
	void AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA::StaticRegisterNativesAAAAS_P_BUI_SISTEMA_DEFENSA_FURIA()
	{
	}
	UClass* Z_Construct_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA_NoRegister()
	{
		return AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA::StaticClass();
	}
	struct Z_Construct_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AAAS_P_BUI_SISTEMA_DEFENSA_FURIA.h" },
		{ "ModuleRelativePath", "AAAS_P_BUI_SISTEMA_DEFENSA_FURIA.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_NoRegister, (int32)VTABLE_OFFSET(AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA, IS_P_INT_SISTEMA_DEFENSA), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA_Statics::ClassParams = {
		&AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA, 162407274);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA>()
	{
		return AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA(Z_Construct_UClass_AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA, &AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAAAS_P_BUI_SISTEMA_DEFENSA_FURIA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
