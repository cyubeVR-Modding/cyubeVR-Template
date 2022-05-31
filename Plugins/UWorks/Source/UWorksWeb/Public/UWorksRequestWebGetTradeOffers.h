#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetTradeOffersDelegateDelegate.h"
#include "GetTradeOffersMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetTradeOffers.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetTradeOffers : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetTradeOffersDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetTradeOffersMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetTradeOffers();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, const FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

