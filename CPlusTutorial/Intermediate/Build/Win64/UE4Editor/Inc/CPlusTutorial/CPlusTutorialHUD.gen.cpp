// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPlusTutorial/CPlusTutorialHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlusTutorialHUD() {}
// Cross Module References
	CPLUSTUTORIAL_API UClass* Z_Construct_UClass_ACPlusTutorialHUD_NoRegister();
	CPLUSTUTORIAL_API UClass* Z_Construct_UClass_ACPlusTutorialHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CPlusTutorial();
// End Cross Module References
	void ACPlusTutorialHUD::StaticRegisterNativesACPlusTutorialHUD()
	{
	}
	UClass* Z_Construct_UClass_ACPlusTutorialHUD_NoRegister()
	{
		return ACPlusTutorialHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACPlusTutorialHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPlusTutorialHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CPlusTutorial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlusTutorialHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CPlusTutorialHUD.h" },
		{ "ModuleRelativePath", "CPlusTutorialHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPlusTutorialHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPlusTutorialHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPlusTutorialHUD_Statics::ClassParams = {
		&ACPlusTutorialHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACPlusTutorialHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlusTutorialHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPlusTutorialHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPlusTutorialHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPlusTutorialHUD, 918031313);
	template<> CPLUSTUTORIAL_API UClass* StaticClass<ACPlusTutorialHUD>()
	{
		return ACPlusTutorialHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPlusTutorialHUD(Z_Construct_UClass_ACPlusTutorialHUD, &ACPlusTutorialHUD::StaticClass, TEXT("/Script/CPlusTutorial"), TEXT("ACPlusTutorialHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPlusTutorialHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
