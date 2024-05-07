// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/MINAS_ESPACIALES.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMINAS_ESPACIALES() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AMINAS_ESPACIALES_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AMINAS_ESPACIALES();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AMINAS_ESPACIALES::StaticRegisterNativesAMINAS_ESPACIALES()
	{
	}
	UClass* Z_Construct_UClass_AMINAS_ESPACIALES_NoRegister()
	{
		return AMINAS_ESPACIALES::StaticClass();
	}
	struct Z_Construct_UClass_AMINAS_ESPACIALES_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Malla_Mina_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Malla_Mina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BombCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BombCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMINAS_ESPACIALES_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMINAS_ESPACIALES_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MINAS_ESPACIALES.h" },
		{ "ModuleRelativePath", "MINAS_ESPACIALES.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_Malla_Mina_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Tiempo de vida en segundos\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MINAS_ESPACIALES.h" },
		{ "ToolTip", "Tiempo de vida en segundos" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_Malla_Mina = { "Malla_Mina", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMINAS_ESPACIALES, Malla_Mina), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_Malla_Mina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_Malla_Mina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_ExplosionParticles_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "MINAS_ESPACIALES.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_ExplosionParticles = { "ExplosionParticles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMINAS_ESPACIALES, ExplosionParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_ExplosionParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_ExplosionParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_ExplosionSound_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "MINAS_ESPACIALES.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_ExplosionSound = { "ExplosionSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMINAS_ESPACIALES, ExplosionSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_ExplosionSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_ExplosionSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_BombCollision_MetaData[] = {
		{ "Category", "Colision_Bomba" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MINAS_ESPACIALES.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_BombCollision = { "BombCollision", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMINAS_ESPACIALES, BombCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_BombCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_BombCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMINAS_ESPACIALES_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_Malla_Mina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_ExplosionParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_ExplosionSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMINAS_ESPACIALES_Statics::NewProp_BombCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMINAS_ESPACIALES_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMINAS_ESPACIALES>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMINAS_ESPACIALES_Statics::ClassParams = {
		&AMINAS_ESPACIALES::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMINAS_ESPACIALES_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMINAS_ESPACIALES_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMINAS_ESPACIALES_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMINAS_ESPACIALES_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMINAS_ESPACIALES()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMINAS_ESPACIALES_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMINAS_ESPACIALES, 3059141357);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AMINAS_ESPACIALES>()
	{
		return AMINAS_ESPACIALES::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMINAS_ESPACIALES(Z_Construct_UClass_AMINAS_ESPACIALES, &AMINAS_ESPACIALES::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AMINAS_ESPACIALES"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMINAS_ESPACIALES);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
