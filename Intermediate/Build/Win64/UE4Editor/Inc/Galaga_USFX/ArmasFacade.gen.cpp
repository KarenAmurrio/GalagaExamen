// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ArmasFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmasFacade() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AArmasFacade_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AArmasFacade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AArmasFacade::StaticRegisterNativesAArmasFacade()
	{
	}
	UClass* Z_Construct_UClass_AArmasFacade_NoRegister()
	{
		return AArmasFacade::StaticClass();
	}
	struct Z_Construct_UClass_AArmasFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmasFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmasFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArmasFacade.h" },
		{ "ModuleRelativePath", "ArmasFacade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmasFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmasFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmasFacade_Statics::ClassParams = {
		&AArmasFacade::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AArmasFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmasFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmasFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmasFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmasFacade, 315621036);
	template<> GALAGA_USFX_API UClass* StaticClass<AArmasFacade>()
	{
		return AArmasFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmasFacade(Z_Construct_UClass_AArmasFacade, &AArmasFacade::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AArmasFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmasFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
