// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPlusTutorial/CPlusTutorialGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlusTutorialGameMode() {}
// Cross Module References
	CPLUSTUTORIAL_API UClass* Z_Construct_UClass_ACPlusTutorialGameMode_NoRegister();
	CPLUSTUTORIAL_API UClass* Z_Construct_UClass_ACPlusTutorialGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPlusTutorial();
// End Cross Module References
	void ACPlusTutorialGameMode::StaticRegisterNativesACPlusTutorialGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACPlusTutorialGameMode_NoRegister()
	{
		return ACPlusTutorialGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACPlusTutorialGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPlusTutorialGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPlusTutorial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlusTutorialGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CPlusTutorialGameMode.h" },
		{ "ModuleRelativePath", "CPlusTutorialGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPlusTutorialGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPlusTutorialGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPlusTutorialGameMode_Statics::ClassParams = {
		&ACPlusTutorialGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACPlusTutorialGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlusTutorialGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPlusTutorialGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPlusTutorialGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPlusTutorialGameMode, 177171209);
	template<> CPLUSTUTORIAL_API UClass* StaticClass<ACPlusTutorialGameMode>()
	{
		return ACPlusTutorialGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPlusTutorialGameMode(Z_Construct_UClass_ACPlusTutorialGameMode, &ACPlusTutorialGameMode::StaticClass, TEXT("/Script/CPlusTutorial"), TEXT("ACPlusTutorialGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPlusTutorialGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
