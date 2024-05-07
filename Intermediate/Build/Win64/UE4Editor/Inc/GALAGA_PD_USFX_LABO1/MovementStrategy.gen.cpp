// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/MovementStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementStrategy() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UMovementStrategy_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_UMovementStrategy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
// End Cross Module References
	void UMovementStrategy::StaticRegisterNativesUMovementStrategy()
	{
	}
	UClass* Z_Construct_UClass_UMovementStrategy_NoRegister()
	{
		return UMovementStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UMovementStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovementStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementStrategy_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovementStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovementStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovementStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovementStrategy_Statics::ClassParams = {
		&UMovementStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovementStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovementStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovementStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovementStrategy, 2432299526);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<UMovementStrategy>()
	{
		return UMovementStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovementStrategy(Z_Construct_UClass_UMovementStrategy, &UMovementStrategy::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("UMovementStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
