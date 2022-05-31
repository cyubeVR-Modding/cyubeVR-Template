#pragma once
#include "CoreMinimal.h"
#include "FinalizeTxnDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FinalizeTxnNode.generated.h"

class UFinalizeTxnNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UFinalizeTxnNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinalizeTxnDelegate Completed;
    
    UFinalizeTxnNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UFinalizeTxnNode* FinalizeTxnNode(const FString& Key, const FString& OrderID, int32 AppID);
    
};

