// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/DirectorNave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorNave() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ADirectorNave_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ADirectorNave();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ADirectorNave::StaticRegisterNativesADirectorNave()
	{
	}
	UClass* Z_Construct_UClass_ADirectorNave_NoRegister()
	{
		return ADirectorNave::StaticClass();
	}
	struct Z_Construct_UClass_ADirectorNave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADirectorNave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorNave_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DirectorNave.h" },
		{ "ModuleRelativePath", "DirectorNave.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADirectorNave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectorNave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADirectorNave_Statics::ClassParams = {
		&ADirectorNave::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADirectorNave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorNave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADirectorNave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADirectorNave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADirectorNave, 2660622135);
	template<> GALAGA_USFX_API UClass* StaticClass<ADirectorNave>()
	{
		return ADirectorNave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADirectorNave(Z_Construct_UClass_ADirectorNave, &ADirectorNave::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ADirectorNave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectorNave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
