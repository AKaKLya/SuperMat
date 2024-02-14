// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperMatNode/Public/Add/SuperAdd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperAdd() {}
// Cross Module References
	SUPERMATNODE_API UClass* Z_Construct_UClass_USuperAdd_NoRegister();
	SUPERMATNODE_API UClass* Z_Construct_UClass_USuperAdd();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_SuperMatNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void USuperAdd::StaticRegisterNativesUSuperAdd()
	{
	}
	UClass* Z_Construct_UClass_USuperAdd_NoRegister()
	{
		return USuperAdd::StaticClass();
	}
	struct Z_Construct_UClass_USuperAdd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ValueCount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddingValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddingValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddingValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USuperAdd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperMatNode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperAdd_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Add/SuperAdd.h" },
		{ "ModuleRelativePath", "Public/Add/SuperAdd.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperAdd_Statics::NewProp_ValueCount_MetaData[] = {
		{ "Category", "SuperAdd" },
		{ "Comment", "//\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe6\x95\xb0\xe7\x9b\xae\xef\xbc\x9a\n" },
		{ "ModuleRelativePath", "Public/Add/SuperAdd.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe6\x95\xb0\xe7\x9b\xae\xef\xbc\x9a" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USuperAdd_Statics::NewProp_ValueCount = { "ValueCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USuperAdd, ValueCount), METADATA_PARAMS(Z_Construct_UClass_USuperAdd_Statics::NewProp_ValueCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USuperAdd_Statics::NewProp_ValueCount_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USuperAdd_Statics::NewProp_AddingValues_Inner = { "AddingValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperAdd_Statics::NewProp_AddingValues_MetaData[] = {
		{ "Comment", "//\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x95\xe8\x84\x9a\xe7\x9a\x84\xe5\x88\x97\xe8\xa1\xa8\n" },
		{ "ModuleRelativePath", "Public/Add/SuperAdd.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x95\xe8\x84\x9a\xe7\x9a\x84\xe5\x88\x97\xe8\xa1\xa8" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USuperAdd_Statics::NewProp_AddingValues = { "AddingValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USuperAdd, AddingValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USuperAdd_Statics::NewProp_AddingValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USuperAdd_Statics::NewProp_AddingValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USuperAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperAdd_Statics::NewProp_ValueCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperAdd_Statics::NewProp_AddingValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperAdd_Statics::NewProp_AddingValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USuperAdd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USuperAdd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USuperAdd_Statics::ClassParams = {
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USuperAdd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USuperAdd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USuperAdd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USuperAdd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USuperAdd, 2045480375);
	template<> SUPERMATNODE_API UClass* StaticClass<USuperAdd>()
	{
		return USuperAdd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USuperAdd(Z_Construct_UClass_USuperAdd, &USuperAdd::StaticClass, TEXT("/Script/SuperMatNode"), TEXT("USuperAdd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USuperAdd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
