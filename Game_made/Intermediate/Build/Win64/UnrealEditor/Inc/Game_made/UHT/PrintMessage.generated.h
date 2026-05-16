// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PrintMessage.h"

#ifdef GAME_MADE_PrintMessage_generated_h
#error "PrintMessage.generated.h already included, missing '#pragma once' in PrintMessage.h"
#endif
#define GAME_MADE_PrintMessage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APrintMessage ************************************************************
struct Z_Construct_UClass_APrintMessage_Statics;
GAME_MADE_API UClass* Z_Construct_UClass_APrintMessage_NoRegister();

#define FID_game_made_repos_FirstConsoleApp_Game_made_Source_Game_made_PrintMessage_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrintMessage(); \
	friend struct ::Z_Construct_UClass_APrintMessage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAME_MADE_API UClass* ::Z_Construct_UClass_APrintMessage_NoRegister(); \
public: \
	DECLARE_CLASS2(APrintMessage, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game_made"), Z_Construct_UClass_APrintMessage_NoRegister) \
	DECLARE_SERIALIZER(APrintMessage)


#define FID_game_made_repos_FirstConsoleApp_Game_made_Source_Game_made_PrintMessage_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APrintMessage(APrintMessage&&) = delete; \
	APrintMessage(const APrintMessage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrintMessage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrintMessage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrintMessage) \
	NO_API virtual ~APrintMessage();


#define FID_game_made_repos_FirstConsoleApp_Game_made_Source_Game_made_PrintMessage_h_9_PROLOG
#define FID_game_made_repos_FirstConsoleApp_Game_made_Source_Game_made_PrintMessage_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_made_repos_FirstConsoleApp_Game_made_Source_Game_made_PrintMessage_h_12_INCLASS_NO_PURE_DECLS \
	FID_game_made_repos_FirstConsoleApp_Game_made_Source_Game_made_PrintMessage_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APrintMessage;

// ********** End Class APrintMessage **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_made_repos_FirstConsoleApp_Game_made_Source_Game_made_PrintMessage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
