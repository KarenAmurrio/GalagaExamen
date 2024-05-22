// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ProjectileLaser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileLaser() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProjectileLaser_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProjectileLaser();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProjectileEnemigo();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AProjectileLaser::StaticRegisterNativesAProjectileLaser()
	{
	}
	UClass* Z_Construct_UClass_AProjectileLaser_NoRegister()
	{
		return AProjectileLaser::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileLaser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileLaser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileLaser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileLaser.h" },
		{ "ModuleRelativePath", "ProjectileLaser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileLaser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileLaser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileLaser_Statics::ClassParams = {
		&AProjectileLaser::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileLaser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileLaser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileLaser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileLaser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileLaser, 477168676);
	template<> GALAGA_USFX_API UClass* StaticClass<AProjectileLaser>()
	{
		return AProjectileLaser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileLaser(Z_Construct_UClass_AProjectileLaser, &AProjectileLaser::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AProjectileLaser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileLaser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
