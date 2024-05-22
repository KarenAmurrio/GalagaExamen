// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveArmeriaDoble.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveArmeriaDoble() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveArmeriaDoble_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveArmeriaDoble();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveArmeria();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ANaveArmeriaDoble::StaticRegisterNativesANaveArmeriaDoble()
	{
	}
	UClass* Z_Construct_UClass_ANaveArmeriaDoble_NoRegister()
	{
		return ANaveArmeriaDoble::StaticClass();
	}
	struct Z_Construct_UClass_ANaveArmeriaDoble_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveArmeriaDoble_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveArmeria,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveArmeriaDoble_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveArmeriaDoble.h" },
		{ "ModuleRelativePath", "NaveArmeriaDoble.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveArmeriaDoble_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveArmeriaDoble>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveArmeriaDoble_Statics::ClassParams = {
		&ANaveArmeriaDoble::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveArmeriaDoble_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveArmeriaDoble_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveArmeriaDoble()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveArmeriaDoble_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveArmeriaDoble, 3780101615);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveArmeriaDoble>()
	{
		return ANaveArmeriaDoble::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveArmeriaDoble(Z_Construct_UClass_ANaveArmeriaDoble, &ANaveArmeriaDoble::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveArmeriaDoble"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveArmeriaDoble);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
