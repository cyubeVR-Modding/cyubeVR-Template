#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetMarketPricesDelegateDelegate.h"
#include "GetMarketPricesMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetMarketPrices.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetMarketPrices : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetMarketPricesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetMarketPricesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetMarketPrices();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

