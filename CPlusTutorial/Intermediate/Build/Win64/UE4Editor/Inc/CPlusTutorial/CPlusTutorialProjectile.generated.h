// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CPLUSTUTORIAL_CPlusTutorialProjectile_generated_h
#error "CPlusTutorialProjectile.generated.h already included, missing '#pragma once' in CPlusTutorialProjectile.h"
#endif
#define CPLUSTUTORIAL_CPlusTutorialProjectile_generated_h

#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_SPARSE_DATA
#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlusTutorialProjectile(); \
	friend struct Z_Construct_UClass_ACPlusTutorialProjectile_Statics; \
public: \
	DECLARE_CLASS(ACPlusTutorialProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPlusTutorial"), NO_API) \
	DECLARE_SERIALIZER(ACPlusTutorialProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACPlusTutorialProjectile(); \
	friend struct Z_Construct_UClass_ACPlusTutorialProjectile_Statics; \
public: \
	DECLARE_CLASS(ACPlusTutorialProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPlusTutorial"), NO_API) \
	DECLARE_SERIALIZER(ACPlusTutorialProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlusTutorialProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlusTutorialProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlusTutorialProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlusTutorialProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlusTutorialProjectile(ACPlusTutorialProjectile&&); \
	NO_API ACPlusTutorialProjectile(const ACPlusTutorialProjectile&); \
public:


#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlusTutorialProjectile(ACPlusTutorialProjectile&&); \
	NO_API ACPlusTutorialProjectile(const ACPlusTutorialProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlusTutorialProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlusTutorialProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlusTutorialProjectile)


#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ACPlusTutorialProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACPlusTutorialProjectile, ProjectileMovement); }


#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_12_PROLOG
#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_SPARSE_DATA \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_RPC_WRAPPERS \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_INCLASS \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_SPARSE_DATA \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_INCLASS_NO_PURE_DECLS \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPLUSTUTORIAL_API UClass* StaticClass<class ACPlusTutorialProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPlusTutorial_Source_CPlusTutorial_CPlusTutorialProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
