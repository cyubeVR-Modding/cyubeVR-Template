#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "CancelTradeOfferMinimalDelegateDelegate.h"
#include "CancelTradeOfferDelegateDelegate.h"
#include "UWorksRequestWebCancelTradeOffer.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebCancelTradeOffer : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelTradeOfferDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelTradeOfferMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebCancelTradeOffer();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& TradeOfferID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

