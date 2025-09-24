// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPLUSTUTORIAL_CPlusTutorialCharacter_generated_h
#error "CPlusTutorialCharacter.generated.h already included, missing '#pragma once' in CPlusTutorialCharacter.h"
#endif
#define CPLUSTUTORIAL_CPlusTutorialCharacter_generated_h

#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_SPARSE_DATA
#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_RPC_WRAPPERS
#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlusTutorialCharacter(); \
	friend struct Z_Construct_UClass_ACPlusTutorialCharacter_Statics; \
public: \
	DECLARE_CLASS(ACPlusTutorialCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPlusTutorial"), NO_API) \
	DECLARE_SERIALIZER(ACPlusTutorialCharacter)


#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesACPlusTutorialCharacter(); \
	friend struct Z_Construct_UClass_ACPlusTutorialCharacter_Statics; \
public: \
	DECLARE_CLASS(ACPlusTutorialCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPlusTutorial"), NO_API) \
	DECLARE_SERIALIZER(ACPlusTutorialCharacter)


#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlusTutorialCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlusTutorialCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlusTutorialCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlusTutorialCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlusTutorialCharacter(ACPlusTutorialCharacter&&); \
	NO_API ACPlusTutorialCharacter(const ACPlusTutorialCharacter&); \
public:


#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlusTutorialCharacter(ACPlusTutorialCharacter&&); \
	NO_API ACPlusTutorialCharacter(const ACPlusTutorialCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlusTutorialCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlusTutorialCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlusTutorialCharacter)


#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ACPlusTutorialCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ACPlusTutorialCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ACPlusTutorialCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ACPlusTutorialCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ACPlusTutorialCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ACPlusTutorialCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ACPlusTutorialCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ACPlusTutorialCharacter, L_MotionController); }


#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_17_PROLOG
#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_SPARSE_DATA \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_RPC_WRAPPERS \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_INCLASS \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_SPARSE_DATA \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_INCLASS_NO_PURE_DECLS \
	CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPLUSTUTORIAL_API UClass* StaticClass<class ACPlusTutorialCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPlusTutorial_Source_CPlusTutorial_CPlusTutorialCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
