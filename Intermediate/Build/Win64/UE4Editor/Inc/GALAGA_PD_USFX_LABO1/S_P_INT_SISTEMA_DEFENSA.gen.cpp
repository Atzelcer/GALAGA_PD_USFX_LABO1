// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/S_P_INT_SISTEMA_DEFENSA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_P_INT_SISTEMA_DEFENSA() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
// End Cross Module References
	void US_P_INT_SISTEMA_DEFENSA::StaticRegisterNativesUS_P_INT_SISTEMA_DEFENSA()
	{
	}
	UClass* Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_NoRegister()
	{
		return US_P_INT_SISTEMA_DEFENSA::StaticClass();
	}
	struct Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "S_P_INT_SISTEMA_DEFENSA.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IS_P_INT_SISTEMA_DEFENSA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_Statics::ClassParams = {
		&US_P_INT_SISTEMA_DEFENSA::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(US_P_INT_SISTEMA_DEFENSA, 3236025103);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<US_P_INT_SISTEMA_DEFENSA>()
	{
		return US_P_INT_SISTEMA_DEFENSA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_US_P_INT_SISTEMA_DEFENSA(Z_Construct_UClass_US_P_INT_SISTEMA_DEFENSA, &US_P_INT_SISTEMA_DEFENSA::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("US_P_INT_SISTEMA_DEFENSA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(US_P_INT_SISTEMA_DEFENSA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
