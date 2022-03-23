#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "UWorksSteamID.h"
#include "GetAppPriceInfoDelegateDelegate.h"
#include "GetAppPriceInfoMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetAppPriceInfo.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetAppPriceInfo : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAppPriceInfoDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAppPriceInfoMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAppPriceInfo();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, const FString& AppIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

