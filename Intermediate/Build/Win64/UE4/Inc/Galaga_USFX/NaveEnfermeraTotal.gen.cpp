// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveEnfermeraTotal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnfermeraTotal() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnfermeraTotal_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnfermeraTotal();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnfermera();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ANaveEnfermeraTotal::StaticRegisterNativesANaveEnfermeraTotal()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnfermeraTotal_NoRegister()
	{
		return ANaveEnfermeraTotal::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnfermeraTotal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnfermeraTotal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnfermera,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnfermeraTotal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnfermeraTotal.h" },
		{ "ModuleRelativePath", "NaveEnfermeraTotal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnfermeraTotal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnfermeraTotal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnfermeraTotal_Statics::ClassParams = {
		&ANaveEnfermeraTotal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnfermeraTotal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnfermeraTotal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnfermeraTotal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnfermeraTotal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnfermeraTotal, 1146390845);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveEnfermeraTotal>()
	{
		return ANaveEnfermeraTotal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnfermeraTotal(Z_Construct_UClass_ANaveEnfermeraTotal, &ANaveEnfermeraTotal::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveEnfermeraTotal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnfermeraTotal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
