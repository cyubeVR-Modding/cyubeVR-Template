#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetTradeOffersSummaryDelegateDelegate.h"
#include "GetTradeOffersSummaryMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetTradeOffersSummary.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetTradeOffersSummary : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetTradeOffersSummaryDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetTradeOffersSummaryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetTradeOffersSummary();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 TimeLastVisit);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

