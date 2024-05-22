// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ProjectileBomba.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileBomba() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProjectileBomba_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProjectileBomba();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProjectileEnemigo();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AProjectileBomba::StaticRegisterNativesAProjectileBomba()
	{
	}
	UClass* Z_Construct_UClass_AProjectileBomba_NoRegister()
	{
		return AProjectileBomba::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileBomba_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileBomba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBomba_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectileBomba.h" },
		{ "ModuleRelativePath", "ProjectileBomba.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileBomba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileBomba>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileBomba_Statics::ClassParams = {
		&AProjectileBomba::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProjectileBomba_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBomba_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileBomba()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileBomba_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileBomba, 521291167);
	template<> GALAGA_USFX_API UClass* StaticClass<AProjectileBomba>()
	{
		return AProjectileBomba::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileBomba(Z_Construct_UClass_AProjectileBomba, &AProjectileBomba::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AProjectileBomba"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileBomba);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
