// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/S_P_BUI_Director_Sistema_Defensa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_P_BUI_Director_Sistema_Defensa() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AS_P_BUI_Director_Sistema_Defensa_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AS_P_BUI_Director_Sistema_Defensa();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
// End Cross Module References
	void AS_P_BUI_Director_Sistema_Defensa::StaticRegisterNativesAS_P_BUI_Director_Sistema_Defensa()
	{
	}
	UClass* Z_Construct_UClass_AS_P_BUI_Director_Sistema_Defensa_NoRegister()
	{
		return AS_P_BUI_Director_Sistema_Defensa::StaticClass();
	}
	struct Z_Construct_UClass_AS_P_BUI_Director_Sistema_Defensa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AS_P_BUI_Director_Sistema_Defensa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_P_BUI_Director_Sistema_Defensa_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "S_P_BUI_Director_Sistema_Defensa.h" },
		{ "ModuleRelativePath", "S_P_BUI_Director_Sistema_Defensa.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AS_P_BUI_Director_Sistema_Defensa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AS_P_BUI_Director_Sistema_Defensa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AS_P_BUI_Director_Sistema_Defensa_Statics::ClassParams = {
		&AS_P_BUI_Director_Sistema_Defensa::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AS_P_BUI_Director_Sistema_Defensa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AS_P_BUI_Director_Sistema_Defensa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AS_P_BUI_Director_Sistema_Defensa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AS_P_BUI_Director_Sistema_Defensa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AS_P_BUI_Director_Sistema_Defensa, 3961487965);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AS_P_BUI_Director_Sistema_Defensa>()
	{
		return AS_P_BUI_Director_Sistema_Defensa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AS_P_BUI_Director_Sistema_Defensa(Z_Construct_UClass_AS_P_BUI_Director_Sistema_Defensa, &AS_P_BUI_Director_Sistema_Defensa::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AS_P_BUI_Director_Sistema_Defensa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AS_P_BUI_Director_Sistema_Defensa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
