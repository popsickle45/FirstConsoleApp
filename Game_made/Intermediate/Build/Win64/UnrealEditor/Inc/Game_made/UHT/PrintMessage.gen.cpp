// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game_made/PrintMessage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePrintMessage() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAME_MADE_API UClass* Z_Construct_UClass_APrintMessage();
GAME_MADE_API UClass* Z_Construct_UClass_APrintMessage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game_made();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APrintMessage ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APrintMessage;
UClass* APrintMessage::GetPrivateStaticClass()
{
	using TClass = APrintMessage;
	if (!Z_Registration_Info_UClass_APrintMessage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PrintMessage"),
			Z_Registration_Info_UClass_APrintMessage.InnerSingleton,
			StaticRegisterNativesAPrintMessage,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APrintMessage.InnerSingleton;
}
UClass* Z_Construct_UClass_APrintMessage_NoRegister()
{
	return APrintMessage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APrintMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PrintMessage.h" },
		{ "ModuleRelativePath", "PrintMessage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APrintMessage constinit property declarations ****************************
// ********** End Class APrintMessage constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrintMessage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APrintMessage_Statics
UObject* (*const Z_Construct_UClass_APrintMessage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Game_made,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrintMessage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrintMessage_Statics::ClassParams = {
	&APrintMessage::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrintMessage_Statics::Class_MetaDataParams), Z_Construct_UClass_APrintMessage_Statics::Class_MetaDataParams)
};
void APrintMessage::StaticRegisterNativesAPrintMessage()
{
}
UClass* Z_Construct_UClass_APrintMessage()
{
	if (!Z_Registration_Info_UClass_APrintMessage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrintMessage.OuterSingleton, Z_Construct_UClass_APrintMessage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrintMessage.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APrintMessage);
APrintMessage::~APrintMessage() {}
// ********** End Class APrintMessage **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_game_made_repos_FirstConsoleApp_Game_made_Source_Game_made_PrintMessage_h__Script_Game_made_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrintMessage, APrintMessage::StaticClass, TEXT("APrintMessage"), &Z_Registration_Info_UClass_APrintMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrintMessage), 3303060942U) },
	};
}; // Z_CompiledInDeferFile_FID_game_made_repos_FirstConsoleApp_Game_made_Source_Game_made_PrintMessage_h__Script_Game_made_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_made_repos_FirstConsoleApp_Game_made_Source_Game_made_PrintMessage_h__Script_Game_made_1489061883{
	TEXT("/Script/Game_made"),
	Z_CompiledInDeferFile_FID_game_made_repos_FirstConsoleApp_Game_made_Source_Game_made_PrintMessage_h__Script_Game_made_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_made_repos_FirstConsoleApp_Game_made_Source_Game_made_PrintMessage_h__Script_Game_made_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
