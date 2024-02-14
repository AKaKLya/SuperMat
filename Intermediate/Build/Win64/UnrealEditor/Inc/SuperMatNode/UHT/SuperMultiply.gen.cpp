// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperMatNode/Public/Node/SuperMultiply.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperMultiply() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	SUPERMATNODE_API UClass* Z_Construct_UClass_USuperMultiply();
	SUPERMATNODE_API UClass* Z_Construct_UClass_USuperMultiply_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SuperMatNode();
// End Cross Module References
	void USuperMultiply::StaticRegisterNativesUSuperMultiply()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USuperMultiply);
	UClass* Z_Construct_UClass_USuperMultiply_NoRegister()
	{
		return USuperMultiply::StaticClass();
	}
	struct Z_Construct_UClass_USuperMultiply_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValueCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddingValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddingValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddingValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USuperMultiply_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperMatNode,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USuperMultiply_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperMultiply_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Node/SuperMultiply.h" },
		{ "ModuleRelativePath", "Public/Node/SuperMultiply.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperMultiply_Statics::NewProp_ValueCount_MetaData[] = {
		{ "Category", "SuperAdd" },
		{ "Comment", "//\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe6\x95\xb0\xe7\x9b\xae\xef\xbc\x9a\n" },
		{ "ModuleRelativePath", "Public/Node/SuperMultiply.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe6\x95\xb0\xe7\x9b\xae\xef\xbc\x9a" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USuperMultiply_Statics::NewProp_ValueCount = { "ValueCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuperMultiply, ValueCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USuperMultiply_Statics::NewProp_ValueCount_MetaData), Z_Construct_UClass_USuperMultiply_Statics::NewProp_ValueCount_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USuperMultiply_Statics::NewProp_AddingValues_Inner = { "AddingValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperMultiply_Statics::NewProp_AddingValues_MetaData[] = {
		{ "Comment", "//\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x95\xe8\x84\x9a\xe7\x9a\x84\xe5\x88\x97\xe8\xa1\xa8\n" },
		{ "ModuleRelativePath", "Public/Node/SuperMultiply.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x95\xe8\x84\x9a\xe7\x9a\x84\xe5\x88\x97\xe8\xa1\xa8" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USuperMultiply_Statics::NewProp_AddingValues = { "AddingValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuperMultiply, AddingValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USuperMultiply_Statics::NewProp_AddingValues_MetaData), Z_Construct_UClass_USuperMultiply_Statics::NewProp_AddingValues_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USuperMultiply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperMultiply_Statics::NewProp_ValueCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperMultiply_Statics::NewProp_AddingValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperMultiply_Statics::NewProp_AddingValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USuperMultiply_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USuperMultiply>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USuperMultiply_Statics::ClassParams = {
		&USuperMultiply::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USuperMultiply_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USuperMultiply_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USuperMultiply_Statics::Class_MetaDataParams), Z_Construct_UClass_USuperMultiply_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USuperMultiply_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USuperMultiply()
	{
		if (!Z_Registration_Info_UClass_USuperMultiply.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USuperMultiply.OuterSingleton, Z_Construct_UClass_USuperMultiply_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USuperMultiply.OuterSingleton;
	}
	template<> SUPERMATNODE_API UClass* StaticClass<USuperMultiply>()
	{
		return USuperMultiply::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USuperMultiply);
	USuperMultiply::~USuperMultiply() {}
	struct Z_CompiledInDeferFile_FID_UeExe_S6_SuperMatNode_HostProject_Plugins_SuperMatNode_Source_SuperMatNode_Public_Node_SuperMultiply_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UeExe_S6_SuperMatNode_HostProject_Plugins_SuperMatNode_Source_SuperMatNode_Public_Node_SuperMultiply_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USuperMultiply, USuperMultiply::StaticClass, TEXT("USuperMultiply"), &Z_Registration_Info_UClass_USuperMultiply, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USuperMultiply), 3639176689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UeExe_S6_SuperMatNode_HostProject_Plugins_SuperMatNode_Source_SuperMatNode_Public_Node_SuperMultiply_h_2094695528(TEXT("/Script/SuperMatNode"),
		Z_CompiledInDeferFile_FID_UeExe_S6_SuperMatNode_HostProject_Plugins_SuperMatNode_Source_SuperMatNode_Public_Node_SuperMultiply_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UeExe_S6_SuperMatNode_HostProject_Plugins_SuperMatNode_Source_SuperMatNode_Public_Node_SuperMultiply_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
