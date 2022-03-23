#pragma once
#include "CoreMinimal.h"
#include "GetMarketPricesMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetMarketPricesDelegateDelegate.h"
#include "UWorksRequestWebGetMarketPrices.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetMarketPrices : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetMarketPricesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetMarketPricesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetMarketPrices();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

