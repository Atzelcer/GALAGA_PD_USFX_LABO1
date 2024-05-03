// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/P_BU_MASTER_SHIP_CONS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_BU_MASTER_SHIP_CONS() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UP_BU_INT01_SHIP_MASTER_E_NoRegister();
// End Cross Module References
	void AP_BU_MASTER_SHIP_CONS::StaticRegisterNativesAP_BU_MASTER_SHIP_CONS()
	{
	}
	UClass* Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_NoRegister()
	{
		return AP_BU_MASTER_SHIP_CONS::StaticClass();
	}
	struct Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "P_BU_MASTER_SHIP_CONS.h" },
		{ "ModuleRelativePath", "P_BU_MASTER_SHIP_CONS.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UP_BU_INT01_SHIP_MASTER_E_NoRegister, (int32)VTABLE_OFFSET(AP_BU_MASTER_SHIP_CONS, IP_BU_INT01_SHIP_MASTER_E), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_BU_MASTER_SHIP_CONS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_Statics::ClassParams = {
		&AP_BU_MASTER_SHIP_CONS::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP_BU_MASTER_SHIP_CONS, 1255029665);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AP_BU_MASTER_SHIP_CONS>()
	{
		return AP_BU_MASTER_SHIP_CONS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP_BU_MASTER_SHIP_CONS(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS, &AP_BU_MASTER_SHIP_CONS::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AP_BU_MASTER_SHIP_CONS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP_BU_MASTER_SHIP_CONS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
