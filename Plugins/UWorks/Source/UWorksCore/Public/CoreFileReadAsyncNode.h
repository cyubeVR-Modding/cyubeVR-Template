#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FileReadAsyncDelegateDelegate.h"
#include "CoreFileReadAsyncNode.generated.h"

class UCoreFileReadAsyncNode;

UCLASS()
class UWORKSCORE_API UCoreFileReadAsyncNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFileReadAsyncDelegate Completed;
    
    UCoreFileReadAsyncNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 Offset, const TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable)
    static UCoreFileReadAsyncNode* FileReadAsyncNode(const FString& File, int32 Offset, int32 BytesToRead);
    
};

