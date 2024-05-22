// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveEnfermera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnfermera() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnfermera_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnfermera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void ANaveEnfermera::StaticRegisterNativesANaveEnfermera()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnfermera_NoRegister()
	{
		return ANaveEnfermera::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnfermera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColisionNaveAliada_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColisionNaveAliada;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnfermera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnfermera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnfermera.h" },
		{ "ModuleRelativePath", "NaveEnfermera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnfermera_Statics::NewProp_ColisionNaveAliada_MetaData[] = {
		{ "Category", "Colision_Nave" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnfermera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnfermera_Statics::NewProp_ColisionNaveAliada = { "ColisionNaveAliada", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnfermera, ColisionNaveAliada), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnfermera_Statics::NewProp_ColisionNaveAliada_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnfermera_Statics::NewProp_ColisionNaveAliada_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnfermera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnfermera_Statics::NewProp_ColisionNaveAliada,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnfermera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnfermera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnfermera_Statics::ClassParams = {
		&ANaveEnfermera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnfermera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnfermera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnfermera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnfermera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnfermera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnfermera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnfermera, 4046848981);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveEnfermera>()
	{
		return ANaveEnfermera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnfermera(Z_Construct_UClass_ANaveEnfermera, &ANaveEnfermera::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveEnfermera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnfermera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
