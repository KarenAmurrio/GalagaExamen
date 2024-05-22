// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveArmeriaTriple.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveArmeriaTriple() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveArmeriaTriple_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveArmeriaTriple();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveArmeria();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ANaveArmeriaTriple::StaticRegisterNativesANaveArmeriaTriple()
	{
	}
	UClass* Z_Construct_UClass_ANaveArmeriaTriple_NoRegister()
	{
		return ANaveArmeriaTriple::StaticClass();
	}
	struct Z_Construct_UClass_ANaveArmeriaTriple_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveArmeriaTriple_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveArmeria,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveArmeriaTriple_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveArmeriaTriple.h" },
		{ "ModuleRelativePath", "NaveArmeriaTriple.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveArmeriaTriple_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveArmeriaTriple>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveArmeriaTriple_Statics::ClassParams = {
		&ANaveArmeriaTriple::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveArmeriaTriple_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveArmeriaTriple_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveArmeriaTriple()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveArmeriaTriple_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveArmeriaTriple, 1638572941);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveArmeriaTriple>()
	{
		return ANaveArmeriaTriple::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveArmeriaTriple(Z_Construct_UClass_ANaveArmeriaTriple, &ANaveArmeriaTriple::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveArmeriaTriple"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveArmeriaTriple);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
