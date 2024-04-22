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
#ifdef GALAGA_USFX_Galaga_USFXProjectile_generated_h
#error "Galaga_USFXProjectile.generated.h already included, missing '#pragma once' in Galaga_USFXProjectile.h"
#endif
#define GALAGA_USFX_Galaga_USFXProjectile_generated_h

#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_SPARSE_DATA
#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalaga_USFXProjectile(); \
	friend struct Z_Construct_UClass_AGalaga_USFXProjectile_Statics; \
public: \
	DECLARE_CLASS(AGalaga_USFXProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), NO_API) \
	DECLARE_SERIALIZER(AGalaga_USFXProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGalaga_USFXProjectile(); \
	friend struct Z_Construct_UClass_AGalaga_USFXProjectile_Statics; \
public: \
	DECLARE_CLASS(AGalaga_USFXProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), NO_API) \
	DECLARE_SERIALIZER(AGalaga_USFXProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGalaga_USFXProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalaga_USFXProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaga_USFXProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaga_USFXProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaga_USFXProjectile(AGalaga_USFXProjectile&&); \
	NO_API AGalaga_USFXProjectile(const AGalaga_USFXProjectile&); \
public:


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaga_USFXProjectile(AGalaga_USFXProjectile&&); \
	NO_API AGalaga_USFXProjectile(const AGalaga_USFXProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaga_USFXProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaga_USFXProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalaga_USFXProjectile)


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AGalaga_USFXProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGalaga_USFXProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__BomerangCollision() { return STRUCT_OFFSET(AGalaga_USFXProjectile, BomerangCollision); }


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_12_PROLOG
#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_RPC_WRAPPERS \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_INCLASS \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_API UClass* StaticClass<class AGalaga_USFXProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_Source_Galaga_USFX_Galaga_USFXProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
