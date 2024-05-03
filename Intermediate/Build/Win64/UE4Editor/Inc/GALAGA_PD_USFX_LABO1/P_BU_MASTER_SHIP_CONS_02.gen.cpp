// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/P_BU_MASTER_SHIP_CONS_02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_BU_MASTER_SHIP_CONS_02() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UP_BU_INT02_ACC_SHIP_MASTER_E_NoRegister();
// End Cross Module References
	void AP_BU_MASTER_SHIP_CONS_02::StaticRegisterNativesAP_BU_MASTER_SHIP_CONS_02()
	{
	}
	UClass* Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_NoRegister()
	{
		return AP_BU_MASTER_SHIP_CONS_02::StaticClass();
	}
	struct Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vida_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Vida;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "P_BU_MASTER_SHIP_CONS_02.h" },
		{ "ModuleRelativePath", "P_BU_MASTER_SHIP_CONS_02.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Malla_Maestro_A_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "P_BU_MASTER_SHIP_CONS_02.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Malla_Maestro_A = { "Malla_Maestro_A", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AP_BU_MASTER_SHIP_CONS_02, Malla_Maestro_A), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Malla_Maestro_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Malla_Maestro_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Explosion_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "ModuleRelativePath", "P_BU_MASTER_SHIP_CONS_02.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Explosion_Nave = { "Explosion_Nave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AP_BU_MASTER_SHIP_CONS_02, Explosion_Nave), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Explosion_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Explosion_Nave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Colision_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Colsion : tipo caja ~~\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "P_BU_MASTER_SHIP_CONS_02.h" },
		{ "ToolTip", "~~ Componente de Colsion : tipo caja ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Colision_Nave = { "Colision_Nave", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AP_BU_MASTER_SHIP_CONS_02, Colision_Nave), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Colision_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Colision_Nave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Sonido_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Sonido ~~\n" },
		{ "ModuleRelativePath", "P_BU_MASTER_SHIP_CONS_02.h" },
		{ "ToolTip", "~~ Componente de Sonido ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Sonido_Nave = { "Sonido_Nave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AP_BU_MASTER_SHIP_CONS_02, Sonido_Nave), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Sonido_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Sonido_Nave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Vida_MetaData[] = {
		{ "ModuleRelativePath", "P_BU_MASTER_SHIP_CONS_02.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Vida = { "Vida", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AP_BU_MASTER_SHIP_CONS_02, Vida), METADATA_PARAMS(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Vida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Vida_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Malla_Maestro_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Explosion_Nave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Colision_Nave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Sonido_Nave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::NewProp_Vida,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UP_BU_INT02_ACC_SHIP_MASTER_E_NoRegister, (int32)VTABLE_OFFSET(AP_BU_MASTER_SHIP_CONS_02, IP_BU_INT02_ACC_SHIP_MASTER_E), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_BU_MASTER_SHIP_CONS_02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::ClassParams = {
		&AP_BU_MASTER_SHIP_CONS_02::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP_BU_MASTER_SHIP_CONS_02, 3100218018);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AP_BU_MASTER_SHIP_CONS_02>()
	{
		return AP_BU_MASTER_SHIP_CONS_02::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP_BU_MASTER_SHIP_CONS_02(Z_Construct_UClass_AP_BU_MASTER_SHIP_CONS_02, &AP_BU_MASTER_SHIP_CONS_02::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AP_BU_MASTER_SHIP_CONS_02"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP_BU_MASTER_SHIP_CONS_02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
