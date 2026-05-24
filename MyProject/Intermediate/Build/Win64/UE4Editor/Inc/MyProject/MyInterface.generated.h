// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MYPROJECT_MyInterface_generated_h
#error "MyInterface.generated.h already included, missing '#pragma once' in MyInterface.h"
#endif
#define MYPROJECT_MyInterface_generated_h

#define MyProject_Source_MyProject_MyInterface_h_13_SPARSE_DATA
#define MyProject_Source_MyProject_MyInterface_h_13_RPC_WRAPPERS \
	virtual void Interact_Implementation(AActor* Caller) {}; \
 \
	DECLARE_FUNCTION(execInteract);


#define MyProject_Source_MyProject_MyInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(AActor* Caller) {}; \
 \
	DECLARE_FUNCTION(execInteract);


#define MyProject_Source_MyProject_MyInterface_h_13_EVENT_PARMS \
	struct MyInterface_eventInteract_Parms \
	{ \
		AActor* Caller; \
	};


#define MyProject_Source_MyProject_MyInterface_h_13_CALLBACK_WRAPPERS
#define MyProject_Source_MyProject_MyInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API UMyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, UMyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT_API UMyInterface(UMyInterface&&); \
	MYPROJECT_API UMyInterface(const UMyInterface&); \
public:


#define MyProject_Source_MyProject_MyInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API UMyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT_API UMyInterface(UMyInterface&&); \
	MYPROJECT_API UMyInterface(const UMyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, UMyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyInterface)


#define MyProject_Source_MyProject_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMyInterface(); \
	friend struct Z_Construct_UClass_UMyInterface_Statics; \
public: \
	DECLARE_CLASS(UMyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProject"), MYPROJECT_API) \
	DECLARE_SERIALIZER(UMyInterface)


#define MyProject_Source_MyProject_MyInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProject_Source_MyProject_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	MyProject_Source_MyProject_MyInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProject_Source_MyProject_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	MyProject_Source_MyProject_MyInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMyInterface() {} \
public: \
	typedef UMyInterface UClassType; \
	typedef IMyInterface ThisClass; \
	static void Execute_Interact(UObject* O, AActor* Caller); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProject_Source_MyProject_MyInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IMyInterface() {} \
public: \
	typedef UMyInterface UClassType; \
	typedef IMyInterface ThisClass; \
	static void Execute_Interact(UObject* O, AActor* Caller); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProject_Source_MyProject_MyInterface_h_10_PROLOG \
	MyProject_Source_MyProject_MyInterface_h_13_EVENT_PARMS


#define MyProject_Source_MyProject_MyInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyInterface_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_MyInterface_h_13_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyInterface_h_13_CALLBACK_WRAPPERS \
	MyProject_Source_MyProject_MyInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyInterface_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_MyInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyInterface_h_13_CALLBACK_WRAPPERS \
	MyProject_Source_MyProject_MyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UMyInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
