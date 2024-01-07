// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study_C/Public/Component/MyFloatingPawnMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFloatingPawnMovement() {}
// Cross Module References
	STUDY_C_API UClass* Z_Construct_UClass_UMyFloatingPawnMovement_NoRegister();
	STUDY_C_API UClass* Z_Construct_UClass_UMyFloatingPawnMovement();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	UPackage* Z_Construct_UPackage__Script_Study_C();
// End Cross Module References
	void UMyFloatingPawnMovement::StaticRegisterNativesUMyFloatingPawnMovement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyFloatingPawnMovement);
	UClass* Z_Construct_UClass_UMyFloatingPawnMovement_NoRegister()
	{
		return UMyFloatingPawnMovement::StaticClass();
	}
	struct Z_Construct_UClass_UMyFloatingPawnMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyFloatingPawnMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_Study_C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFloatingPawnMovement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Component/MyFloatingPawnMovement.h" },
		{ "ModuleRelativePath", "Public/Component/MyFloatingPawnMovement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFloatingPawnMovement_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "MyFloatingPawnMovement" },
		{ "Comment", "// ?U????x\n" },
		{ "ModuleRelativePath", "Public/Component/MyFloatingPawnMovement.h" },
		{ "ToolTip", "?U????x" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyFloatingPawnMovement_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyFloatingPawnMovement, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_UMyFloatingPawnMovement_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyFloatingPawnMovement_Statics::NewProp_RotationSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyFloatingPawnMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyFloatingPawnMovement_Statics::NewProp_RotationSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyFloatingPawnMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyFloatingPawnMovement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyFloatingPawnMovement_Statics::ClassParams = {
		&UMyFloatingPawnMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyFloatingPawnMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyFloatingPawnMovement_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyFloatingPawnMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyFloatingPawnMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyFloatingPawnMovement()
	{
		if (!Z_Registration_Info_UClass_UMyFloatingPawnMovement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyFloatingPawnMovement.OuterSingleton, Z_Construct_UClass_UMyFloatingPawnMovement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyFloatingPawnMovement.OuterSingleton;
	}
	template<> STUDY_C_API UClass* StaticClass<UMyFloatingPawnMovement>()
	{
		return UMyFloatingPawnMovement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyFloatingPawnMovement);
	struct Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Component_MyFloatingPawnMovement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Component_MyFloatingPawnMovement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyFloatingPawnMovement, UMyFloatingPawnMovement::StaticClass, TEXT("UMyFloatingPawnMovement"), &Z_Registration_Info_UClass_UMyFloatingPawnMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyFloatingPawnMovement), 2178130419U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Component_MyFloatingPawnMovement_h_1418282328(TEXT("/Script/Study_C"),
		Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Component_MyFloatingPawnMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Study_C_Source_Study_C_Public_Component_MyFloatingPawnMovement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
