// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_PROJECT_CameraDirection_generated_h
#error "CameraDirection.generated.h already included, missing '#pragma once' in CameraDirection.h"
#endif
#define GAME_PROJECT_CameraDirection_generated_h

#define game_project_Source_game_project_CameraDirection_h_12_SPARSE_DATA
#define game_project_Source_game_project_CameraDirection_h_12_RPC_WRAPPERS
#define game_project_Source_game_project_CameraDirection_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define game_project_Source_game_project_CameraDirection_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraDirection(); \
	friend struct Z_Construct_UClass_ACameraDirection_Statics; \
public: \
	DECLARE_CLASS(ACameraDirection, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/game_project"), NO_API) \
	DECLARE_SERIALIZER(ACameraDirection)


#define game_project_Source_game_project_CameraDirection_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACameraDirection(); \
	friend struct Z_Construct_UClass_ACameraDirection_Statics; \
public: \
	DECLARE_CLASS(ACameraDirection, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/game_project"), NO_API) \
	DECLARE_SERIALIZER(ACameraDirection)


#define game_project_Source_game_project_CameraDirection_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraDirection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraDirection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraDirection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraDirection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraDirection(ACameraDirection&&); \
	NO_API ACameraDirection(const ACameraDirection&); \
public:


#define game_project_Source_game_project_CameraDirection_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraDirection(ACameraDirection&&); \
	NO_API ACameraDirection(const ACameraDirection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraDirection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraDirection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraDirection)


#define game_project_Source_game_project_CameraDirection_h_12_PRIVATE_PROPERTY_OFFSET
#define game_project_Source_game_project_CameraDirection_h_9_PROLOG
#define game_project_Source_game_project_CameraDirection_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	game_project_Source_game_project_CameraDirection_h_12_PRIVATE_PROPERTY_OFFSET \
	game_project_Source_game_project_CameraDirection_h_12_SPARSE_DATA \
	game_project_Source_game_project_CameraDirection_h_12_RPC_WRAPPERS \
	game_project_Source_game_project_CameraDirection_h_12_INCLASS \
	game_project_Source_game_project_CameraDirection_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define game_project_Source_game_project_CameraDirection_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	game_project_Source_game_project_CameraDirection_h_12_PRIVATE_PROPERTY_OFFSET \
	game_project_Source_game_project_CameraDirection_h_12_SPARSE_DATA \
	game_project_Source_game_project_CameraDirection_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	game_project_Source_game_project_CameraDirection_h_12_INCLASS_NO_PURE_DECLS \
	game_project_Source_game_project_CameraDirection_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_PROJECT_API UClass* StaticClass<class ACameraDirection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID game_project_Source_game_project_CameraDirection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
