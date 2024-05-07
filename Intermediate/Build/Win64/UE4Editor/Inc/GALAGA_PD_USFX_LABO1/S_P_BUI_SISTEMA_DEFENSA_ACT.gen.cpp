// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/S_P_BUI_SISTEMA_DEFENSA_ACT.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_P_BUI_SISTEMA_DEFENSA_ACT() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_NoRegister();
// End Cross Module References
	void AS_P_BUI_SISTEMA_DEFENSA_ACT::StaticRegisterNativesAS_P_BUI_SISTEMA_DEFENSA_ACT()
	{
	}
	UClass* Z_Construct_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT_NoRegister()
	{
		return AS_P_BUI_SISTEMA_DEFENSA_ACT::StaticClass();
	}
	struct Z_Construct_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "S_P_BUI_SISTEMA_DEFENSA_ACT.h" },
		{ "ModuleRelativePath", "S_P_BUI_SISTEMA_DEFENSA_ACT.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_NoRegister, (int32)VTABLE_OFFSET(AS_P_BUI_SISTEMA_DEFENSA_ACT, IS_P_INT_SISTEMA_DEFENSA), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AS_P_BUI_SISTEMA_DEFENSA_ACT>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT_Statics::ClassParams = {
		&AS_P_BUI_SISTEMA_DEFENSA_ACT::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AS_P_BUI_SISTEMA_DEFENSA_ACT, 2559714716);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AS_P_BUI_SISTEMA_DEFENSA_ACT>()
	{
		return AS_P_BUI_SISTEMA_DEFENSA_ACT::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT(Z_Construct_UClass_AS_P_BUI_SISTEMA_DEFENSA_ACT, &AS_P_BUI_SISTEMA_DEFENSA_ACT::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AS_P_BUI_SISTEMA_DEFENSA_ACT"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AS_P_BUI_SISTEMA_DEFENSA_ACT);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
