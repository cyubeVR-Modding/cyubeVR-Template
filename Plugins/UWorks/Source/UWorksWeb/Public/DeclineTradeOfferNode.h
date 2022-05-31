#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DeclineTradeOfferDelegateDelegate.h"
#include "DeclineTradeOfferNode.generated.h"

class UDeclineTradeOfferNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UDeclineTradeOfferNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeclineTradeOfferDelegate Completed;
    
    UDeclineTradeOfferNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UDeclineTradeOfferNode* DeclineTradeOfferNode(const FString& Key, const FString& TradeOfferID);
    
};

