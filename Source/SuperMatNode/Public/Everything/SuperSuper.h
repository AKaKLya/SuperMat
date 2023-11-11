// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "MaterialExpressionIO.h"
#include "Materials/MaterialExpression.h"
#include "SuperSuper.generated.h"

/**
 * 
 */

UCLASS(MinimalAPI)
class USuperSuper : public UMaterialExpression
{
	GENERATED_UCLASS_BODY()

	//输入的数目：
	UPROPERTY(EditAnywhere, Category=SuperMultiply)
	int ValueCount;

	UPROPERTY(EditAnywhere, Category=SuperMultiply)
	int CustomFunc;
	
	//输入引脚的列表
	UPROPERTY()
	TArray<FExpressionInput> AddingValues;

	TArray<FExpressionInput*> CachedInputs;
	
	//~ Begin UMaterialExpression Interface
	#if WITH_EDITOR
	virtual int32 Compile(class FMaterialCompiler* Compiler, int32 OutputIndex) override;
	virtual void GetCaption(TArray<FString>& OutCaptions) const override;
	virtual FText GetKeywords() const override {return FText::FromString(TEXT("ss"));}

	//重载此函数，根据ValueCount来决定输入的个数
	virtual const TArray<FExpressionInput*> GetInputs() override;

	//在ValueCount变化时需要刷新节点的引脚UI
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

#endif // WITH_EDITOR
	//~ End UMaterialExpression Interface

};
