#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetUserStatsForGameDelegateDelegate.h"
#include "GetUserStatsForGameMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebGetUserStatsForGame.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetUserStatsForGame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserStatsForGameDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserStatsForGameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUserStatsForGame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

