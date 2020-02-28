// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeGameCPP/EscapeGameCPPHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeGameCPPHUD() {}
// Cross Module References
	ESCAPEGAMECPP_API UClass* Z_Construct_UClass_AEscapeGameCPPHUD_NoRegister();
	ESCAPEGAMECPP_API UClass* Z_Construct_UClass_AEscapeGameCPPHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_EscapeGameCPP();
// End Cross Module References
	void AEscapeGameCPPHUD::StaticRegisterNativesAEscapeGameCPPHUD()
	{
	}
	UClass* Z_Construct_UClass_AEscapeGameCPPHUD_NoRegister()
	{
		return AEscapeGameCPPHUD::StaticClass();
	}
	struct Z_Construct_UClass_AEscapeGameCPPHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscapeGameCPPHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeGameCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeGameCPPHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "EscapeGameCPPHUD.h" },
		{ "ModuleRelativePath", "EscapeGameCPPHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscapeGameCPPHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscapeGameCPPHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscapeGameCPPHUD_Statics::ClassParams = {
		&AEscapeGameCPPHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEscapeGameCPPHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEscapeGameCPPHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscapeGameCPPHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscapeGameCPPHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscapeGameCPPHUD, 1672096083);
	template<> ESCAPEGAMECPP_API UClass* StaticClass<AEscapeGameCPPHUD>()
	{
		return AEscapeGameCPPHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscapeGameCPPHUD(Z_Construct_UClass_AEscapeGameCPPHUD, &AEscapeGameCPPHUD::StaticClass, TEXT("/Script/EscapeGameCPP"), TEXT("AEscapeGameCPPHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeGameCPPHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
