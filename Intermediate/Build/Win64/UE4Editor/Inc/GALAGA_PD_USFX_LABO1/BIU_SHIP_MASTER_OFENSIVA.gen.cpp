// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/BIU_SHIP_MASTER_OFENSIVA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBIU_SHIP_MASTER_OFENSIVA() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA_NoRegister();
// End Cross Module References
	void ABIU_SHIP_MASTER_OFENSIVA::StaticRegisterNativesABIU_SHIP_MASTER_OFENSIVA()
	{
	}
	UClass* Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_NoRegister()
	{
		return ABIU_SHIP_MASTER_OFENSIVA::StaticClass();
	}
	struct Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Malla_Maestro_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Malla_Maestro_A;
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
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BIU_SHIP_MASTER_OFENSIVA.h" },
		{ "ModuleRelativePath", "BIU_SHIP_MASTER_OFENSIVA.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Malla_Maestro_A_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BIU_SHIP_MASTER_OFENSIVA.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Malla_Maestro_A = { "Malla_Maestro_A", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABIU_SHIP_MASTER_OFENSIVA, Malla_Maestro_A), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Malla_Maestro_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Malla_Maestro_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Explosion_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "ModuleRelativePath", "BIU_SHIP_MASTER_OFENSIVA.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Explosion_Nave = { "Explosion_Nave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABIU_SHIP_MASTER_OFENSIVA, Explosion_Nave), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Explosion_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Explosion_Nave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Colision_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Colsion : tipo caja ~~\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BIU_SHIP_MASTER_OFENSIVA.h" },
		{ "ToolTip", "~~ Componente de Colsion : tipo caja ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Colision_Nave = { "Colision_Nave", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABIU_SHIP_MASTER_OFENSIVA, Colision_Nave), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Colision_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Colision_Nave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Sonido_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Sonido ~~\n" },
		{ "ModuleRelativePath", "BIU_SHIP_MASTER_OFENSIVA.h" },
		{ "ToolTip", "~~ Componente de Sonido ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Sonido_Nave = { "Sonido_Nave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABIU_SHIP_MASTER_OFENSIVA, Sonido_Nave), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Sonido_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Sonido_Nave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Malla_Maestro_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Explosion_Nave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Colision_Nave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::NewProp_Sonido_Nave,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBUI_INT_NAVE_MAESTRA_NoRegister, (int32)VTABLE_OFFSET(ABIU_SHIP_MASTER_OFENSIVA, IBUI_INT_NAVE_MAESTRA), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABIU_SHIP_MASTER_OFENSIVA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::ClassParams = {
		&ABIU_SHIP_MASTER_OFENSIVA::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABIU_SHIP_MASTER_OFENSIVA, 958553808);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<ABIU_SHIP_MASTER_OFENSIVA>()
	{
		return ABIU_SHIP_MASTER_OFENSIVA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABIU_SHIP_MASTER_OFENSIVA(Z_Construct_UClass_ABIU_SHIP_MASTER_OFENSIVA, &ABIU_SHIP_MASTER_OFENSIVA::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("ABIU_SHIP_MASTER_OFENSIVA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABIU_SHIP_MASTER_OFENSIVA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
