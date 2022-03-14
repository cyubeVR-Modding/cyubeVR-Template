#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DeleteSessionBatchDelegateDelegate.h"
#include "DeleteSessionBatchNode.generated.h"

class UDeleteSessionBatchNode;

UCLASS()
class UWORKSWEB_API UDeleteSessionBatchNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeleteSessionBatchDelegate Completed;
    
    UDeleteSessionBatchNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UDeleteSessionBatchNode* DeleteSessionBatchNode(const FString& Key, const FString& SessionId, int32 AppID);
    
};

