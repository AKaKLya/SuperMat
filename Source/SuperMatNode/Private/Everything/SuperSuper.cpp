// Fill out your copyright notice in the Description page of Project Settings.


#include "Everything/SuperSuper.h"
#include "MaterialCompiler.h"

#if WITH_EDITOR
#include "MaterialGraph/MaterialGraphNode.h"
#endif

#if WITH_EDITOR
int32 USuperSuper::Compile(FMaterialCompiler* Compiler, int32 OutputIndex)
{
	
	switch (CustomFunc)
	{
	default:
		{
			int32 Result = Compiler->Constant(0.0);;
			return Result;
		}
	case 1:
		{
			int32 AddResult = Compiler->Constant(0.0);
			for(auto CustomAdd : AddingValues)
			{
				int32 Arg1 =  CustomAdd.GetTracedInput().Expression ? CustomAdd.Compile(Compiler) : Compiler->Constant(0.0);
				AddResult = Compiler->Add(AddResult,Arg1);
			}
			return AddResult;
		}
	case 2:
		{
			int32 MulResult = Compiler->Constant(1.0);
			for(auto CustomAdd : AddingValues)
			{
				int32 Arg1 =  CustomAdd.GetTracedInput().Expression ? CustomAdd.Compile(Compiler) : Compiler->Constant(1.0);
				MulResult = Compiler->Mul(MulResult,Arg1);
			}
			return MulResult;
		}
	}
	
	
}

void USuperSuper::GetCaption(TArray<FString>& OutCaptions) const
{
	FString ret = TEXT("SuperSuper");

	OutCaptions.Add(ret);
}

const TArray<FExpressionInput*> USuperSuper::GetInputs()
{
	AddingValues.SetNum(ValueCount);
	CachedInputs.Empty();
	CachedInputs.Reserve(AddingValues.Num());
	for( int32 i = 0; i < AddingValues.Num(); i++ )
	{
		CachedInputs.Add(&AddingValues[i]);
	}
	return CachedInputs;
}

void USuperSuper::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	if (UMaterialGraphNode* MatGraphNode = Cast<UMaterialGraphNode>(GraphNode))
		MatGraphNode->RecreateAndLinkNode();
}
#endif // WITH_EDITOR

USuperSuper::USuperSuper(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ValueCount = 2;
	CustomFunc = 1;
}
