// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StealthGame/AIPatrol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPatrol() {}
// Cross Module References
	STEALTHGAME_API UClass* Z_Construct_UClass_AAIPatrol_NoRegister();
	STEALTHGAME_API UClass* Z_Construct_UClass_AAIPatrol();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_StealthGame();
// End Cross Module References
	void AAIPatrol::StaticRegisterNativesAAIPatrol()
	{
	}
	UClass* Z_Construct_UClass_AAIPatrol_NoRegister()
	{
		return AAIPatrol::StaticClass();
	}
	struct Z_Construct_UClass_AAIPatrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIPatrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_StealthGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPatrol_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIPatrol.h" },
		{ "ModuleRelativePath", "AIPatrol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIPatrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPatrol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIPatrol_Statics::ClassParams = {
		&AAIPatrol::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIPatrol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIPatrol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIPatrol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIPatrol, 3285239363);
	template<> STEALTHGAME_API UClass* StaticClass<AAIPatrol>()
	{
		return AAIPatrol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIPatrol(Z_Construct_UClass_AAIPatrol, &AAIPatrol::StaticClass, TEXT("/Script/StealthGame"), TEXT("AAIPatrol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPatrol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
