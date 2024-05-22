// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveEnfermeraSimple.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnfermeraSimple() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnfermeraSimple_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnfermeraSimple();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnfermera();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ANaveEnfermeraSimple::StaticRegisterNativesANaveEnfermeraSimple()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnfermeraSimple_NoRegister()
	{
		return ANaveEnfermeraSimple::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnfermeraSimple_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnfermeraSimple_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnfermera,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnfermeraSimple_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnfermeraSimple.h" },
		{ "ModuleRelativePath", "NaveEnfermeraSimple.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnfermeraSimple_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnfermeraSimple>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnfermeraSimple_Statics::ClassParams = {
		&ANaveEnfermeraSimple::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnfermeraSimple_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnfermeraSimple_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnfermeraSimple()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnfermeraSimple_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnfermeraSimple, 3080940772);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveEnfermeraSimple>()
	{
		return ANaveEnfermeraSimple::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnfermeraSimple(Z_Construct_UClass_ANaveEnfermeraSimple, &ANaveEnfermeraSimple::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveEnfermeraSimple"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnfermeraSimple);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
