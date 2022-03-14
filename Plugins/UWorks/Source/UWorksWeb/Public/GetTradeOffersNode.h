#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetTradeOffersDelegateDelegate.h"
#include "GetTradeOffersNode.generated.h"

class UGetTradeOffersNode;

UCLASS()
class UWORKSWEB_API UGetTradeOffersNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetTradeOffersDelegate Completed;
    
    UGetTradeOffersNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetTradeOffersNode* GetTradeOffersNode(const FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, const FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);
    
};

