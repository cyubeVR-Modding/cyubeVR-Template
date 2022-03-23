#pragma once
#include "CoreMinimal.h"
#include "RefundTxnDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RefundTxnNode.generated.h"

class URefundTxnNode;

UCLASS()
class UWORKSWEB_API URefundTxnNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRefundTxnDelegate Completed;
    
    URefundTxnNode();
    UFUNCTION(BlueprintCallable)
    static URefundTxnNode* RefundTxnNode(const FString& Key, const FString& OrderID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

