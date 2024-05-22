// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/EnemigasFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigasFacade() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEnemigasFacade_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEnemigasFacade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AEnemigasFacade::StaticRegisterNativesAEnemigasFacade()
	{
	}
	UClass* Z_Construct_UClass_AEnemigasFacade_NoRegister()
	{
		return AEnemigasFacade::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigasFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigasFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigasFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigasFacade.h" },
		{ "ModuleRelativePath", "EnemigasFacade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigasFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigasFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigasFacade_Statics::ClassParams = {
		&AEnemigasFacade::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigasFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigasFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigasFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigasFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigasFacade, 3830909306);
	template<> GALAGA_USFX_API UClass* StaticClass<AEnemigasFacade>()
	{
		return AEnemigasFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigasFacade(Z_Construct_UClass_AEnemigasFacade, &AEnemigasFacade::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AEnemigasFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigasFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
