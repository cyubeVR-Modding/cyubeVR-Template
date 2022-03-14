#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "DeclineTradeOfferMinimalDelegateDelegate.h"
#include "DeclineTradeOfferDelegateDelegate.h"
#include "UWorksRequestWebDeclineTradeOffer.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebDeclineTradeOffer : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeclineTradeOfferDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeclineTradeOfferMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebDeclineTradeOffer();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& TradeOfferID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

