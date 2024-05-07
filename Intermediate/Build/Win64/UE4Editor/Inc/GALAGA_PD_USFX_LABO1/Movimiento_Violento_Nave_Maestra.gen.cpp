// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/Movimiento_Violento_Nave_Maestra.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimiento_Violento_Nave_Maestra() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UMovementStrategy_NoRegister();
// End Cross Module References
	void UMovimiento_Violento_Nave_Maestra::StaticRegisterNativesUMovimiento_Violento_Nave_Maestra()
	{
	}
	UClass* Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_NoRegister()
	{
		return UMovimiento_Violento_Nave_Maestra::StaticClass();
	}
	struct Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionChangeFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionChangeFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Movimiento_Violento_Nave_Maestra.h" },
		{ "ModuleRelativePath", "Movimiento_Violento_Nave_Maestra.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Movimiento_Violento_Nave_Maestra.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovimiento_Violento_Nave_Maestra, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::NewProp_DirectionChangeFrequency_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Max speed for violent movement\n" },
		{ "ModuleRelativePath", "Movimiento_Violento_Nave_Maestra.h" },
		{ "ToolTip", "Max speed for violent movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::NewProp_DirectionChangeFrequency = { "DirectionChangeFrequency", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovimiento_Violento_Nave_Maestra, DirectionChangeFrequency), METADATA_PARAMS(Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::NewProp_DirectionChangeFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::NewProp_DirectionChangeFrequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::NewProp_DirectionChangeFrequency,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovementStrategy_NoRegister, (int32)VTABLE_OFFSET(UMovimiento_Violento_Nave_Maestra, IMovementStrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimiento_Violento_Nave_Maestra>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::ClassParams = {
		&UMovimiento_Violento_Nave_Maestra::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovimiento_Violento_Nave_Maestra, 848082337);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<UMovimiento_Violento_Nave_Maestra>()
	{
		return UMovimiento_Violento_Nave_Maestra::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovimiento_Violento_Nave_Maestra(Z_Construct_UClass_UMovimiento_Violento_Nave_Maestra, &UMovimiento_Violento_Nave_Maestra::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("UMovimiento_Violento_Nave_Maestra"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimiento_Violento_Nave_Maestra);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
