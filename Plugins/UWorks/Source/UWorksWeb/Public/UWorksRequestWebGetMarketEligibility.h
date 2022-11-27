#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "UWorksSteamID.h"
#include "GetMarketEligibilityDelegateDelegate.h"
#include "GetMarketEligibilityMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetMarketEligibility.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetMarketEligibility : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetMarketEligibilityDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetMarketEligibilityMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetMarketEligibility();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

