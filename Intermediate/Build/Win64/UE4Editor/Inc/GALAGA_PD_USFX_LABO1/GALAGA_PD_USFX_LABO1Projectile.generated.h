// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_generated_h
#error "GALAGA_PD_USFX_LABO1Projectile.generated.h already included, missing '#pragma once' in GALAGA_PD_USFX_LABO1Projectile.h"
#endif
#define GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_generated_h

#define GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_SPARSE_DATA
#define GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGALAGA_PD_USFX_LABO1Projectile(); \
	friend struct Z_Construct_UClass_AGALAGA_PD_USFX_LABO1Projectile_Statics; \
public: \
	DECLARE_CLASS(AGALAGA_PD_USFX_LABO1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA_PD_USFX_LABO1"), NO_API) \
	DECLARE_SERIALIZER(AGALAGA_PD_USFX_LABO1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGALAGA_PD_USFX_LABO1Projectile(); \
	friend struct Z_Construct_UClass_AGALAGA_PD_USFX_LABO1Projectile_Statics; \
public: \
	DECLARE_CLASS(AGALAGA_PD_USFX_LABO1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA_PD_USFX_LABO1"), NO_API) \
	DECLARE_SERIALIZER(AGALAGA_PD_USFX_LABO1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGALAGA_PD_USFX_LABO1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGALAGA_PD_USFX_LABO1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGALAGA_PD_USFX_LABO1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGALAGA_PD_USFX_LABO1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGALAGA_PD_USFX_LABO1Projectile(AGALAGA_PD_USFX_LABO1Projectile&&); \
	NO_API AGALAGA_PD_USFX_LABO1Projectile(const AGALAGA_PD_USFX_LABO1Projectile&); \
public:


#define GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGALAGA_PD_USFX_LABO1Projectile(AGALAGA_PD_USFX_LABO1Projectile&&); \
	NO_API AGALAGA_PD_USFX_LABO1Projectile(const AGALAGA_PD_USFX_LABO1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGALAGA_PD_USFX_LABO1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGALAGA_PD_USFX_LABO1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGALAGA_PD_USFX_LABO1Projectile)


#define GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AGALAGA_PD_USFX_LABO1Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGALAGA_PD_USFX_LABO1Projectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__Projectil_Collision() { return STRUCT_OFFSET(AGALAGA_PD_USFX_LABO1Projectile, Projectil_Collision); }


#define GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_12_PROLOG
#define GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_SPARSE_DATA \
	GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_RPC_WRAPPERS \
	GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_INCLASS \
	GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_SPARSE_DATA \
	GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_PD_USFX_LABO1_API UClass* StaticClass<class AGALAGA_PD_USFX_LABO1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GALAGA_PD_USFX_LABO1_Source_GALAGA_PD_USFX_LABO1_GALAGA_PD_USFX_LABO1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
