#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "StartTradeDelegateDelegate.h"
#include "StartTradeMinimalDelegateDelegate.h"
#include "UWorksRequestWebStartTrade.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebStartTrade : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStartTradeDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStartTradeMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebStartTrade();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

