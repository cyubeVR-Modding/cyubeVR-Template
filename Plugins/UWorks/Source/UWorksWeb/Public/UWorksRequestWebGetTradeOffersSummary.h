#pragma once
#include "CoreMinimal.h"
#include "GetTradeOffersSummaryMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetTradeOffersSummaryDelegateDelegate.h"
#include "UWorksRequestWebGetTradeOffersSummary.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetTradeOffersSummary : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetTradeOffersSummaryDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetTradeOffersSummaryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetTradeOffersSummary();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 TimeLastVisit);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

