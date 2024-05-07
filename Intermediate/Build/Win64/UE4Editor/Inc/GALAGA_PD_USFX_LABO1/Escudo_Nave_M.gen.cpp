// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/Escudo_Nave_M.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudo_Nave_M() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AEscudo_Nave_M_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AEscudo_Nave_M();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AEscudo_Nave_M::StaticRegisterNativesAEscudo_Nave_M()
	{
	}
	UClass* Z_Construct_UClass_AEscudo_Nave_M_NoRegister()
	{
		return AEscudo_Nave_M::StaticClass();
	}
	struct Z_Construct_UClass_AEscudo_Nave_M_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escudo_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escudo_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colision_Escudo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Colision_Escudo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distancia_Escudo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distancia_Escudo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscudo_Nave_M_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudo_Nave_M_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Escudo_Nave_M.h" },
		{ "ModuleRelativePath", "Escudo_Nave_M.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Escudo_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Escudo_Nave_M.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Escudo_Mesh = { "Escudo_Mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscudo_Nave_M, Escudo_Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Escudo_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Escudo_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Colision_Escudo_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Escudo_Nave_M.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Colision_Escudo = { "Colision_Escudo", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscudo_Nave_M, Colision_Escudo), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Colision_Escudo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Colision_Escudo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Escudo_Nave_M.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscudo_Nave_M, Health), METADATA_PARAMS(Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Distancia_Escudo_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Escudo_Nave_M.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Distancia_Escudo = { "Distancia_Escudo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscudo_Nave_M, Distancia_Escudo), METADATA_PARAMS(Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Distancia_Escudo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Distancia_Escudo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscudo_Nave_M_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Escudo_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Colision_Escudo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscudo_Nave_M_Statics::NewProp_Distancia_Escudo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscudo_Nave_M_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscudo_Nave_M>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscudo_Nave_M_Statics::ClassParams = {
		&AEscudo_Nave_M::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEscudo_Nave_M_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscudo_Nave_M_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscudo_Nave_M_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudo_Nave_M_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscudo_Nave_M()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscudo_Nave_M_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscudo_Nave_M, 659545506);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AEscudo_Nave_M>()
	{
		return AEscudo_Nave_M::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscudo_Nave_M(Z_Construct_UClass_AEscudo_Nave_M, &AEscudo_Nave_M::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AEscudo_Nave_M"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscudo_Nave_M);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
