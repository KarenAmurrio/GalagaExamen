// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/AdaptadorExtranjero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdaptadorExtranjero() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AAdaptadorExtranjero_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AAdaptadorExtranjero();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UIBounce_Ball_NoRegister();
// End Cross Module References
	void AAdaptadorExtranjero::StaticRegisterNativesAAdaptadorExtranjero()
	{
	}
	UClass* Z_Construct_UClass_AAdaptadorExtranjero_NoRegister()
	{
		return AAdaptadorExtranjero::StaticClass();
	}
	struct Z_Construct_UClass_AAdaptadorExtranjero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdaptadorExtranjero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdaptadorExtranjero_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdaptadorExtranjero.h" },
		{ "ModuleRelativePath", "AdaptadorExtranjero.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAdaptadorExtranjero_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBounce_Ball_NoRegister, (int32)VTABLE_OFFSET(AAdaptadorExtranjero, IIBounce_Ball), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdaptadorExtranjero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdaptadorExtranjero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdaptadorExtranjero_Statics::ClassParams = {
		&AAdaptadorExtranjero::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdaptadorExtranjero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptadorExtranjero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdaptadorExtranjero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdaptadorExtranjero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdaptadorExtranjero, 414077268);
	template<> GALAGA_USFX_API UClass* StaticClass<AAdaptadorExtranjero>()
	{
		return AAdaptadorExtranjero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdaptadorExtranjero(Z_Construct_UClass_AAdaptadorExtranjero, &AAdaptadorExtranjero::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AAdaptadorExtranjero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdaptadorExtranjero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
