// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveAliadaArmeriaBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAliadaArmeriaBuilder() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveAliadaArmeriaBuilder_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveAliadaArmeriaBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UNaveAliadaBuilder_NoRegister();
// End Cross Module References
	void ANaveAliadaArmeriaBuilder::StaticRegisterNativesANaveAliadaArmeriaBuilder()
	{
	}
	UClass* Z_Construct_UClass_ANaveAliadaArmeriaBuilder_NoRegister()
	{
		return ANaveAliadaArmeriaBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAliadaArmeriaBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAliadaArmeriaBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAliadaArmeriaBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveAliadaArmeriaBuilder.h" },
		{ "ModuleRelativePath", "NaveAliadaArmeriaBuilder.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANaveAliadaArmeriaBuilder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNaveAliadaBuilder_NoRegister, (int32)VTABLE_OFFSET(ANaveAliadaArmeriaBuilder, INaveAliadaBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAliadaArmeriaBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAliadaArmeriaBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAliadaArmeriaBuilder_Statics::ClassParams = {
		&ANaveAliadaArmeriaBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveAliadaArmeriaBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAliadaArmeriaBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAliadaArmeriaBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAliadaArmeriaBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAliadaArmeriaBuilder, 2158873916);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveAliadaArmeriaBuilder>()
	{
		return ANaveAliadaArmeriaBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAliadaArmeriaBuilder(Z_Construct_UClass_ANaveAliadaArmeriaBuilder, &ANaveAliadaArmeriaBuilder::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveAliadaArmeriaBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAliadaArmeriaBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
