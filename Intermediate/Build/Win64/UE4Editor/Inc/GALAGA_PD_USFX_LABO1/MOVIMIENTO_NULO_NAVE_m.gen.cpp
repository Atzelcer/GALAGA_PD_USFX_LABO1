// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/MOVIMIENTO_NULO_NAVE_m.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMOVIMIENTO_NULO_NAVE_m() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UMovementStrategy_NoRegister();
// End Cross Module References
	void UMOVIMIENTO_NULO_NAVE_m::StaticRegisterNativesUMOVIMIENTO_NULO_NAVE_m()
	{
	}
	UClass* Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_NoRegister()
	{
		return UMOVIMIENTO_NULO_NAVE_m::StaticClass();
	}
	struct Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveAmplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaveAmplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaveFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MOVIMIENTO_NULO_NAVE_m.h" },
		{ "ModuleRelativePath", "MOVIMIENTO_NULO_NAVE_m.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_WaveAmplitude_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MOVIMIENTO_NULO_NAVE_m.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_WaveAmplitude = { "WaveAmplitude", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMOVIMIENTO_NULO_NAVE_m, WaveAmplitude), METADATA_PARAMS(Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_WaveAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_WaveAmplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_WaveFrequency_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Amplitud de la onda sinusoidal\n" },
		{ "ModuleRelativePath", "MOVIMIENTO_NULO_NAVE_m.h" },
		{ "ToolTip", "Amplitud de la onda sinusoidal" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_WaveFrequency = { "WaveFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMOVIMIENTO_NULO_NAVE_m, WaveFrequency), METADATA_PARAMS(Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_WaveFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_WaveFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Frecuencia de la onda sinusoidal\n" },
		{ "ModuleRelativePath", "MOVIMIENTO_NULO_NAVE_m.h" },
		{ "ToolTip", "Frecuencia de la onda sinusoidal" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMOVIMIENTO_NULO_NAVE_m, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_MovementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_WaveAmplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_WaveFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::NewProp_MovementSpeed,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovementStrategy_NoRegister, (int32)VTABLE_OFFSET(UMOVIMIENTO_NULO_NAVE_m, IMovementStrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMOVIMIENTO_NULO_NAVE_m>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::ClassParams = {
		&UMOVIMIENTO_NULO_NAVE_m::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMOVIMIENTO_NULO_NAVE_m, 3089473036);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<UMOVIMIENTO_NULO_NAVE_m>()
	{
		return UMOVIMIENTO_NULO_NAVE_m::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMOVIMIENTO_NULO_NAVE_m(Z_Construct_UClass_UMOVIMIENTO_NULO_NAVE_m, &UMOVIMIENTO_NULO_NAVE_m::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("UMOVIMIENTO_NULO_NAVE_m"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMOVIMIENTO_NULO_NAVE_m);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
