#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "QueryTxnDelegateDelegate.h"
#include "QueryTxnNode.generated.h"

class UQueryTxnNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UQueryTxnNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueryTxnDelegate Completed;
    
    UQueryTxnNode();
    UFUNCTION(BlueprintCallable)
    static UQueryTxnNode* QueryTxnNode(const FString& Key, int32 AppID, const FString& OrderID, const FString& TransID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

