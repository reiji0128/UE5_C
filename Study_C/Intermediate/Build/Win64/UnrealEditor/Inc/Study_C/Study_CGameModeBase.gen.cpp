// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study_C/Study_CGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudy_CGameModeBase() {}
// Cross Module References
	STUDY_C_API UClass* Z_Construct_UClass_AStudy_CGameModeBase_NoRegister();
	STUDY_C_API UClass* Z_Construct_UClass_AStudy_CGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Study_C();
// End Cross Module References
	void AStudy_CGameModeBase::StaticRegisterNativesAStudy_CGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStudy_CGameModeBase);
	UClass* Z_Construct_UClass_AStudy_CGameModeBase_NoRegister()
	{
		return AStudy_CGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AStudy_CGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStudy_CGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Study_C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStudy_CGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Study_CGameModeBase.h" },
		{ "ModuleRelativePath", "Study_CGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStudy_CGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStudy_CGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStudy_CGameModeBase_Statics::ClassParams = {
		&AStudy_CGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStudy_CGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStudy_CGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStudy_CGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AStudy_CGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStudy_CGameModeBase.OuterSingleton, Z_Construct_UClass_AStudy_CGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStudy_CGameModeBase.OuterSingleton;
	}
	template<> STUDY_C_API UClass* StaticClass<AStudy_CGameModeBase>()
	{
		return AStudy_CGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStudy_CGameModeBase);
	struct Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Study_CGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Study_CGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStudy_CGameModeBase, AStudy_CGameModeBase::StaticClass, TEXT("AStudy_CGameModeBase"), &Z_Registration_Info_UClass_AStudy_CGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStudy_CGameModeBase), 4096776889U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Study_CGameModeBase_h_1604656871(TEXT("/Script/Study_C"),
		Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Study_CGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Study_CGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
