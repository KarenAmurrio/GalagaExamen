// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveMecanico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveMecanico() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveMecanico_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveMecanico();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void ANaveMecanico::StaticRegisterNativesANaveMecanico()
	{
	}
	UClass* Z_Construct_UClass_ANaveMecanico_NoRegister()
	{
		return ANaveMecanico::StaticClass();
	}
	struct Z_Construct_UClass_ANaveMecanico_Statics
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
	UObject* (*const Z_Construct_UClass_ANaveMecanico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveMecanico_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveMecanico.h" },
		{ "ModuleRelativePath", "NaveMecanico.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveMecanico_Statics::NewProp_ColisionNaveAliada_MetaData[] = {
		{ "Category", "Colision_Nave" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveMecanico.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveMecanico_Statics::NewProp_ColisionNaveAliada = { "ColisionNaveAliada", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveMecanico, ColisionNaveAliada), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveMecanico_Statics::NewProp_ColisionNaveAliada_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveMecanico_Statics::NewProp_ColisionNaveAliada_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveMecanico_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveMecanico_Statics::NewProp_ColisionNaveAliada,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveMecanico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveMecanico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveMecanico_Statics::ClassParams = {
		&ANaveMecanico::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveMecanico_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveMecanico_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveMecanico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveMecanico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveMecanico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveMecanico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveMecanico, 1405591105);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveMecanico>()
	{
		return ANaveMecanico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveMecanico(Z_Construct_UClass_ANaveMecanico, &ANaveMecanico::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveMecanico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveMecanico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif