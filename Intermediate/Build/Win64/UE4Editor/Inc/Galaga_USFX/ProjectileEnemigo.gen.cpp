// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ProjectileEnemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileEnemigo() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProjectileEnemigo_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProjectileEnemigo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AProjectileEnemigo::StaticRegisterNativesAProjectileEnemigo()
	{
	}
	UClass* Z_Construct_UClass_AProjectileEnemigo_NoRegister()
	{
		return AProjectileEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaProjectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileEnemigo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileEnemigo.h" },
		{ "ModuleRelativePath", "ProjectileEnemigo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileEnemigo_Statics::NewProp_mallaProjectile_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectileEnemigo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileEnemigo_Statics::NewProp_mallaProjectile = { "mallaProjectile", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileEnemigo, mallaProjectile), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileEnemigo_Statics::NewProp_mallaProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileEnemigo_Statics::NewProp_mallaProjectile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileEnemigo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileEnemigo_Statics::NewProp_mallaProjectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileEnemigo_Statics::ClassParams = {
		&AProjectileEnemigo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectileEnemigo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileEnemigo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileEnemigo, 2390589775);
	template<> GALAGA_USFX_API UClass* StaticClass<AProjectileEnemigo>()
	{
		return AProjectileEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileEnemigo(Z_Construct_UClass_AProjectileEnemigo, &AProjectileEnemigo::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AProjectileEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
