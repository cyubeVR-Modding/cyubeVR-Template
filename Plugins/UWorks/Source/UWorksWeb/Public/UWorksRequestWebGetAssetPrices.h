#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetAssetPricesDelegateDelegate.h"
#include "GetAssetPricesMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetAssetPrices.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetAssetPrices : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAssetPricesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAssetPricesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAssetPrices();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& Currency, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

