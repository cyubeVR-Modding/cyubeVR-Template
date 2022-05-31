#pragma once
#include "CoreMinimal.h"
#include "CanTradeDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "CanTradeMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebCanTrade.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebCanTrade : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCanTradeDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCanTradeMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebCanTrade();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamID TargetId);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

