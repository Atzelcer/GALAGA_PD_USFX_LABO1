// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/SHIP_P.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHIP_P() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ASHIP_P_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ASHIP_P();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void ASHIP_P::StaticRegisterNativesASHIP_P()
	{
	}
	UClass* Z_Construct_UClass_ASHIP_P_NoRegister()
	{
		return ASHIP_P::StaticClass();
	}
	struct Z_Construct_UClass_ASHIP_P_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scena_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scena;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nave_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nave_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Explosion_Nave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Explosion_Nave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colision_Nave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Colision_Nave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sonido_Nave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sonido_Nave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHIP_P_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHIP_P_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SHIP_P.h" },
		{ "ModuleRelativePath", "SHIP_P.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHIP_P_Statics::NewProp_Scena_MetaData[] = {
		{ "Category", "SHIP_P" },
		{ "Comment", "// ~~ Componente raiz que controlara los demas componentes ~~ \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SHIP_P.h" },
		{ "ToolTip", "~~ Componente raiz que controlara los demas componentes ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASHIP_P_Statics::NewProp_Scena = { "Scena", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHIP_P, Scena), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASHIP_P_Statics::NewProp_Scena_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHIP_P_Statics::NewProp_Scena_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHIP_P_Statics::NewProp_Nave_Mesh_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Conponente de Malla para la nave ~~\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SHIP_P.h" },
		{ "ToolTip", "~~ Conponente de Malla para la nave ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASHIP_P_Statics::NewProp_Nave_Mesh = { "Nave_Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHIP_P, Nave_Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASHIP_P_Statics::NewProp_Nave_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHIP_P_Statics::NewProp_Nave_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHIP_P_Statics::NewProp_Explosion_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Explosion ~~\n" },
		{ "ModuleRelativePath", "SHIP_P.h" },
		{ "ToolTip", "~~ Componente de Explosion ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASHIP_P_Statics::NewProp_Explosion_Nave = { "Explosion_Nave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHIP_P, Explosion_Nave), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASHIP_P_Statics::NewProp_Explosion_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHIP_P_Statics::NewProp_Explosion_Nave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHIP_P_Statics::NewProp_Colision_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Colsion : tipo caja ~~\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SHIP_P.h" },
		{ "ToolTip", "~~ Componente de Colsion : tipo caja ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASHIP_P_Statics::NewProp_Colision_Nave = { "Colision_Nave", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHIP_P, Colision_Nave), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASHIP_P_Statics::NewProp_Colision_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHIP_P_Statics::NewProp_Colision_Nave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHIP_P_Statics::NewProp_Sonido_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Sonido ~~\n" },
		{ "ModuleRelativePath", "SHIP_P.h" },
		{ "ToolTip", "~~ Componente de Sonido ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASHIP_P_Statics::NewProp_Sonido_Nave = { "Sonido_Nave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHIP_P, Sonido_Nave), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASHIP_P_Statics::NewProp_Sonido_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHIP_P_Statics::NewProp_Sonido_Nave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASHIP_P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHIP_P_Statics::NewProp_Scena,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHIP_P_Statics::NewProp_Nave_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHIP_P_Statics::NewProp_Explosion_Nave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHIP_P_Statics::NewProp_Colision_Nave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHIP_P_Statics::NewProp_Sonido_Nave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHIP_P_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHIP_P>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASHIP_P_Statics::ClassParams = {
		&ASHIP_P::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASHIP_P_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASHIP_P_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASHIP_P_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHIP_P_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHIP_P()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASHIP_P_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASHIP_P, 1228027407);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<ASHIP_P>()
	{
		return ASHIP_P::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASHIP_P(Z_Construct_UClass_ASHIP_P, &ASHIP_P::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("ASHIP_P"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHIP_P);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
