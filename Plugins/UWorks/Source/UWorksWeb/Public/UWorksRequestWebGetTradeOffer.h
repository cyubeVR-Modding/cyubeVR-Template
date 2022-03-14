#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetTradeOfferDelegateDelegate.h"
#include "GetTradeOfferMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetTradeOffer.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetTradeOffer : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetTradeOfferDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetTradeOfferMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetTradeOffer();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& TradeOfferID, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

