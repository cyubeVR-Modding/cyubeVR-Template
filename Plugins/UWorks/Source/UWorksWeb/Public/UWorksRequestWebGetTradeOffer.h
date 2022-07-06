#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetTradeOfferMinimalDelegateDelegate.h"
#include "GetTradeOfferDelegateDelegate.h"
#include "UWorksRequestWebGetTradeOffer.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetTradeOffer : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetTradeOfferDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetTradeOfferMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetTradeOffer();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& TradeOfferID, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

