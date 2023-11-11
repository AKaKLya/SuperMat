// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperMatNode/Public/Node/SuperAdd.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperAdd() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	SUPERMATNODE_API UClass* Z_Construct_UClass_USuperAdd();
	SUPERMATNODE_API UClass* Z_Construct_UClass_USuperAdd_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SuperMatNode();
// End Cross Module References
	void USuperAdd::StaticRegisterNativesUSuperAdd()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USuperAdd);
	UClass* Z_Construct_UClass_USuperAdd_NoRegister()
	{
		return USuperAdd::StaticClass();
	}
	struct Z_Construct_UClass_USuperAdd_Statics
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
	UObject* (*const Z_Construct_UClass_USuperAdd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperMatNode,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USuperAdd_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperAdd_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Node/SuperAdd.h" },
		{ "ModuleRelativePath", "Public/Node/SuperAdd.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperAdd_Statics::NewProp_ValueCount_MetaData[] = {
		{ "Category", "SuperAdd" },
		{ "Comment", "//\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe6\x95\xb0\xe7\x9b\xae\xef\xbc\x9a\n" },
		{ "ModuleRelativePath", "Public/Node/SuperAdd.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe6\x95\xb0\xe7\x9b\xae\xef\xbc\x9a" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USuperAdd_Statics::NewProp_ValueCount = { "ValueCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuperAdd, ValueCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USuperAdd_Statics::NewProp_ValueCount_MetaData), Z_Construct_UClass_USuperAdd_Statics::NewProp_ValueCount_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USuperAdd_Statics::NewProp_AddingValues_Inner = { "AddingValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperAdd_Statics::NewProp_AddingValues_MetaData[] = {
		{ "Comment", "//\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x95\xe8\x84\x9a\xe7\x9a\x84\xe5\x88\x97\xe8\xa1\xa8\n" },
		{ "ModuleRelativePath", "Public/Node/SuperAdd.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x95\xe8\x84\x9a\xe7\x9a\x84\xe5\x88\x97\xe8\xa1\xa8" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USuperAdd_Statics::NewProp_AddingValues = { "AddingValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuperAdd, AddingValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USuperAdd_Statics::NewProp_AddingValues_MetaData), Z_Construct_UClass_USuperAdd_Statics::NewProp_AddingValues_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USuperAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperAdd_Statics::NewProp_ValueCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperAdd_Statics::NewProp_AddingValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperAdd_Statics::NewProp_AddingValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USuperAdd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USuperAdd>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USuperAdd_Statics::ClassParams = {
		&USuperAdd::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USuperAdd_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USuperAdd_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USuperAdd_Statics::Class_MetaDataParams), Z_Construct_UClass_USuperAdd_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USuperAdd_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USuperAdd()
	{
		if (!Z_Registration_Info_UClass_USuperAdd.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USuperAdd.OuterSingleton, Z_Construct_UClass_USuperAdd_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USuperAdd.OuterSingleton;
	}
	template<> SUPERMATNODE_API UClass* StaticClass<USuperAdd>()
	{
		return USuperAdd::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USuperAdd);
	USuperAdd::~USuperAdd() {}
	struct Z_CompiledInDeferFile_FID_UeExe_S6_SuperMatNode_HostProject_Plugins_SuperMatNode_Source_SuperMatNode_Public_Node_SuperAdd_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UeExe_S6_SuperMatNode_HostProject_Plugins_SuperMatNode_Source_SuperMatNode_Public_Node_SuperAdd_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USuperAdd, USuperAdd::StaticClass, TEXT("USuperAdd"), &Z_Registration_Info_UClass_USuperAdd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USuperAdd), 446850564U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UeExe_S6_SuperMatNode_HostProject_Plugins_SuperMatNode_Source_SuperMatNode_Public_Node_SuperAdd_h_3772984874(TEXT("/Script/SuperMatNode"),
		Z_CompiledInDeferFile_FID_UeExe_S6_SuperMatNode_HostProject_Plugins_SuperMatNode_Source_SuperMatNode_Public_Node_SuperAdd_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UeExe_S6_SuperMatNode_HostProject_Plugins_SuperMatNode_Source_SuperMatNode_Public_Node_SuperAdd_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
