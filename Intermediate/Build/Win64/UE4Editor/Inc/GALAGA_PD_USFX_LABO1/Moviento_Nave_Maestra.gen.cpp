// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/Moviento_Nave_Maestra.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviento_Nave_Maestra() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UMoviento_Nave_Maestra_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UMoviento_Nave_Maestra();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UMovementStrategy_NoRegister();
// End Cross Module References
	void UMoviento_Nave_Maestra::StaticRegisterNativesUMoviento_Nave_Maestra()
	{
	}
	UClass* Z_Construct_UClass_UMoviento_Nave_Maestra_NoRegister()
	{
		return UMoviento_Nave_Maestra::StaticClass();
	}
	struct Z_Construct_UClass_UMoviento_Nave_Maestra_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviento_Nave_Maestra_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviento_Nave_Maestra_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Moviento_Nave_Maestra.h" },
		{ "ModuleRelativePath", "Moviento_Nave_Maestra.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMoviento_Nave_Maestra_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovementStrategy_NoRegister, (int32)VTABLE_OFFSET(UMoviento_Nave_Maestra, IMovementStrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviento_Nave_Maestra_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviento_Nave_Maestra>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviento_Nave_Maestra_Statics::ClassParams = {
		&UMoviento_Nave_Maestra::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviento_Nave_Maestra_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviento_Nave_Maestra_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviento_Nave_Maestra()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviento_Nave_Maestra_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviento_Nave_Maestra, 3284237883);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<UMoviento_Nave_Maestra>()
	{
		return UMoviento_Nave_Maestra::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviento_Nave_Maestra(Z_Construct_UClass_UMoviento_Nave_Maestra, &UMoviento_Nave_Maestra::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("UMoviento_Nave_Maestra"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviento_Nave_Maestra);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
