#pragma once
#include "CoreMinimal.h"
#include "CancelTradeOfferDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CancelTradeOfferNode.generated.h"

class UCancelTradeOfferNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UCancelTradeOfferNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelTradeOfferDelegate Completed;
    
    UCancelTradeOfferNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UCancelTradeOfferNode* CancelTradeOfferNode(const FString& Key, const FString& TradeOfferID);
    
};

