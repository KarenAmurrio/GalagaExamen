// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/EscudoEnemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudoEnemigo() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEscudoEnemigo_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEscudoEnemigo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AEscudoEnemigo::StaticRegisterNativesAEscudoEnemigo()
	{
	}
	UClass* Z_Construct_UClass_AEscudoEnemigo_NoRegister()
	{
		return AEscudoEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_AEscudoEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscudoEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudoEnemigo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscudoEnemigo.h" },
		{ "ModuleRelativePath", "EscudoEnemigo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscudoEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscudoEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscudoEnemigo_Statics::ClassParams = {
		&AEscudoEnemigo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscudoEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscudoEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscudoEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscudoEnemigo, 3419832909);
	template<> GALAGA_USFX_API UClass* StaticClass<AEscudoEnemigo>()
	{
		return AEscudoEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscudoEnemigo(Z_Construct_UClass_AEscudoEnemigo, &AEscudoEnemigo::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AEscudoEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscudoEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
