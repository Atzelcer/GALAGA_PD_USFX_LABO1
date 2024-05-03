// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/PROYECTIL_NAVE_P.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePROYECTIL_NAVE_P() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_APROYECTIL_NAVE_P_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_APROYECTIL_NAVE_P();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_APROYECTIL_P();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void APROYECTIL_NAVE_P::StaticRegisterNativesAPROYECTIL_NAVE_P()
	{
	}
	UClass* Z_Construct_UClass_APROYECTIL_NAVE_P_NoRegister()
	{
		return APROYECTIL_NAVE_P::StaticClass();
	}
	struct Z_Construct_UClass_APROYECTIL_NAVE_P_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APROYECTIL_P,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PROYECTIL_NAVE_P.h" },
		{ "ModuleRelativePath", "PROYECTIL_NAVE_P.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "//Componente de Movimiento para el proyectil\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PROYECTIL_NAVE_P.h" },
		{ "ToolTip", "Componente de Movimiento para el proyectil" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APROYECTIL_NAVE_P, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::NewProp_ProjectileMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::NewProp_ProjectileMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::NewProp_ProjectileMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APROYECTIL_NAVE_P>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::ClassParams = {
		&APROYECTIL_NAVE_P::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APROYECTIL_NAVE_P()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APROYECTIL_NAVE_P_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APROYECTIL_NAVE_P, 2741645407);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<APROYECTIL_NAVE_P>()
	{
		return APROYECTIL_NAVE_P::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APROYECTIL_NAVE_P(Z_Construct_UClass_APROYECTIL_NAVE_P, &APROYECTIL_NAVE_P::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("APROYECTIL_NAVE_P"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APROYECTIL_NAVE_P);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
