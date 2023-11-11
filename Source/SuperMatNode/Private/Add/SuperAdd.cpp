
#include "Add/SuperAdd.h"

#include "MaterialCompiler.h"

#if WITH_EDITOR
#include "MaterialGraph/MaterialGraphNode.h"
#endif

#if WITH_EDITOR
int32 USuperAdd::Compile(class FMaterialCompiler* Compiler, int32 OutputIndex)
{
	int32 Result = Compiler->Constant(0);
	for(auto CustomAdd : AddingValues)
	{
		int32 Arg1 =  CustomAdd.GetTracedInput().Expression ? CustomAdd.Compile(Compiler) : Compiler->Constant(0.0);
		Result = Compiler->Add(Result,Arg1);
	}
	return Result;
}


void USuperAdd::GetCaption(TArray<FString>& OutCaptions) const
{
	FString ret = TEXT("SuperAdd");

	OutCaptions.Add(ret);
}


const TArray<FExpressionInput*> USuperAdd::GetInputs()
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

void USuperAdd::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
		if (UMaterialGraphNode* MatGraphNode = Cast<UMaterialGraphNode>(GraphNode))
			MatGraphNode->RecreateAndLinkNode();
		
}

#endif // WITH_EDITOR

USuperAdd::USuperAdd(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ValueCount = 2;
}
