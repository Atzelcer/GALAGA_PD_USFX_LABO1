// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_PD_USFX_LABO1/AMyHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMyHUD() {}
// Cross Module References
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AAMyHUD_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_AAMyHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	GALAGA_PD_USFX_LABO1_API UClass* Z_Construct_UClass_ULIfes_Naves_NoRegister();
// End Cross Module References
	void AAMyHUD::StaticRegisterNativesAAMyHUD()
	{
	}
	UClass* Z_Construct_UClass_AAMyHUD_NoRegister()
	{
		return AAMyHUD::StaticClass();
	}
	struct Z_Construct_UClass_AAMyHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAMyHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_PD_USFX_LABO1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMyHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "AMyHUD.h" },
		{ "ModuleRelativePath", "AMyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMyHUD_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// Usa TSubclassOf para especificar el tipo de clase que el Widget puede instanciar\n" },
		{ "ModuleRelativePath", "AMyHUD.h" },
		{ "ToolTip", "Usa TSubclassOf para especificar el tipo de clase que el Widget puede instanciar" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAMyHUD_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAMyHUD, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAMyHUD_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAMyHUD_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMyHUD_Statics::NewProp_LifeWidget_MetaData[] = {
		{ "Comment", "// Instancia del widget de vida que se mostrar?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AMyHUD.h" },
		{ "ToolTip", "Instancia del widget de vida que se mostrar?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAMyHUD_Statics::NewProp_LifeWidget = { "LifeWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAMyHUD, LifeWidget), Z_Construct_UClass_ULIfes_Naves_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAMyHUD_Statics::NewProp_LifeWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAMyHUD_Statics::NewProp_LifeWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAMyHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMyHUD_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMyHUD_Statics::NewProp_LifeWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAMyHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAMyHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAMyHUD_Statics::ClassParams = {
		&AAMyHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAMyHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAMyHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAMyHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAMyHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAMyHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAMyHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAMyHUD, 3542636788);
	template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<AAMyHUD>()
	{
		return AAMyHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAMyHUD(Z_Construct_UClass_AAMyHUD, &AAMyHUD::StaticClass, TEXT("/Script/GALAGA_PD_USFX_LABO1"), TEXT("AAMyHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAMyHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
