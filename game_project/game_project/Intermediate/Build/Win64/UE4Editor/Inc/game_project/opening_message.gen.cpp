// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "game_project/opening_message.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeopening_message() {}
// Cross Module References
	GAME_PROJECT_API UClass* Z_Construct_UClass_Aopening_message_NoRegister();
	GAME_PROJECT_API UClass* Z_Construct_UClass_Aopening_message();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_game_project();
// End Cross Module References
	void Aopening_message::StaticRegisterNativesAopening_message()
	{
	}
	UClass* Z_Construct_UClass_Aopening_message_NoRegister()
	{
		return Aopening_message::StaticClass();
	}
	struct Z_Construct_UClass_Aopening_message_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aopening_message_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_game_project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aopening_message_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "opening_message.h" },
		{ "ModuleRelativePath", "opening_message.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aopening_message_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aopening_message>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aopening_message_Statics::ClassParams = {
		&Aopening_message::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aopening_message_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aopening_message_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aopening_message()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aopening_message_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aopening_message, 1270344880);
	template<> GAME_PROJECT_API UClass* StaticClass<Aopening_message>()
	{
		return Aopening_message::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aopening_message(Z_Construct_UClass_Aopening_message, &Aopening_message::StaticClass, TEXT("/Script/game_project"), TEXT("Aopening_message"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aopening_message);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
