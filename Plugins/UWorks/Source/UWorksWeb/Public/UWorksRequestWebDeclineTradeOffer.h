#pragma once
#include "CoreMinimal.h"
#include "DeclineTradeOfferMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "DeclineTradeOfferDelegateDelegate.h"
#include "UWorksRequestWebDeclineTradeOffer.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebDeclineTradeOffer : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeclineTradeOfferDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeclineTradeOfferMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebDeclineTradeOffer();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& TradeOfferID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

