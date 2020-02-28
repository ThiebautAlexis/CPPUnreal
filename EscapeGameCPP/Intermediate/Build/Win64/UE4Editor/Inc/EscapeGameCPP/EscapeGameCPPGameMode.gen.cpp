// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeGameCPP/EscapeGameCPPGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeGameCPPGameMode() {}
// Cross Module References
	ESCAPEGAMECPP_API UClass* Z_Construct_UClass_AEscapeGameCPPGameMode_NoRegister();
	ESCAPEGAMECPP_API UClass* Z_Construct_UClass_AEscapeGameCPPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EscapeGameCPP();
// End Cross Module References
	void AEscapeGameCPPGameMode::StaticRegisterNativesAEscapeGameCPPGameMode()
	{
	}
	UClass* Z_Construct_UClass_AEscapeGameCPPGameMode_NoRegister()
	{
		return AEscapeGameCPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEscapeGameCPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscapeGameCPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeGameCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeGameCPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EscapeGameCPPGameMode.h" },
		{ "ModuleRelativePath", "EscapeGameCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscapeGameCPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscapeGameCPPGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscapeGameCPPGameMode_Statics::ClassParams = {
		&AEscapeGameCPPGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AEscapeGameCPPGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEscapeGameCPPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscapeGameCPPGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscapeGameCPPGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscapeGameCPPGameMode, 1789663932);
	template<> ESCAPEGAMECPP_API UClass* StaticClass<AEscapeGameCPPGameMode>()
	{
		return AEscapeGameCPPGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscapeGameCPPGameMode(Z_Construct_UClass_AEscapeGameCPPGameMode, &AEscapeGameCPPGameMode::StaticClass, TEXT("/Script/EscapeGameCPP"), TEXT("AEscapeGameCPPGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeGameCPPGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
