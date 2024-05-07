// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/Escudo_CE_Active.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudo_CE_Active() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UEscudo_CE_Active_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UEscudo_CE_Active();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UEscudo_CE_Active::StaticRegisterNativesUEscudo_CE_Active()
	{
	}
	UClass* Z_Construct_UClass_UEscudo_CE_Active_NoRegister()
	{
		return UEscudo_CE_Active::StaticClass();
	}
	struct Z_Construct_UClass_UEscudo_CE_Active_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shieldSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_shieldSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tiempoAparecer_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_tiempoAparecer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEscudo_CE_Active_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscudo_CE_Active_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Escudo_CE_Active.h" },
		{ "ModuleRelativePath", "Escudo_CE_Active.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscudo_CE_Active_Statics::NewProp_shieldSpawn_MetaData[] = {
		{ "Category", "Escudo_CE_Active" },
		{ "ModuleRelativePath", "Escudo_CE_Active.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEscudo_CE_Active_Statics::NewProp_shieldSpawn = { "shieldSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEscudo_CE_Active, shieldSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEscudo_CE_Active_Statics::NewProp_shieldSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscudo_CE_Active_Statics::NewProp_shieldSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscudo_CE_Active_Statics::NewProp_tiempoAparecer_MetaData[] = {
		{ "Category", "Escudo_CE_Active" },
		{ "Comment", "//AGALAGA_USFX_L01Pawn* NaveControl;\n//tiempo importante para hacer aparecer el escudo\n" },
		{ "ModuleRelativePath", "Escudo_CE_Active.h" },
		{ "ToolTip", "AGALAGA_USFX_L01Pawn* NaveControl;\ntiempo importante para hacer aparecer el escudo" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEscudo_CE_Active_Statics::NewProp_tiempoAparecer = { "tiempoAparecer", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEscudo_CE_Active, tiempoAparecer), METADATA_PARAMS(Z_Construct_UClass_UEscudo_CE_Active_Statics::NewProp_tiempoAparecer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscudo_CE_Active_Statics::NewProp_tiempoAparecer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEscudo_CE_Active_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscudo_CE_Active_Statics::NewProp_shieldSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscudo_CE_Active_Statics::NewProp_tiempoAparecer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEscudo_CE_Active_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEscudo_CE_Active>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEscudo_CE_Active_Statics::ClassParams = {
		&UEscudo_CE_Active::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEscudo_CE_Active_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEscudo_CE_Active_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEscudo_CE_Active_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEscudo_CE_Active_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEscudo_CE_Active()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEscudo_CE_Active_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEscudo_CE_Active, 3337476113);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<UEscudo_CE_Active>()
	{
		return UEscudo_CE_Active::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEscudo_CE_Active(Z_Construct_UClass_UEscudo_CE_Active, &UEscudo_CE_Active::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("UEscudo_CE_Active"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEscudo_CE_Active);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
