#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetTradeOffersSummaryDelegateDelegate.h"
#include "GetTradeOffersSummaryNode.generated.h"

class UGetTradeOffersSummaryNode;

UCLASS()
class UWORKSWEB_API UGetTradeOffersSummaryNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetTradeOffersSummaryDelegate Completed;
    
    UGetTradeOffersSummaryNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetTradeOffersSummaryNode* GetTradeOffersSummaryNode(const FString& Key, int32 TimeLastVisit);
    
};

