#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SetLeaderboardScoreDelegateDelegate.h"
#include "SetLeaderboardScoreMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebSetLeaderboardScore.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebSetLeaderboardScore : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetLeaderboardScoreDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetLeaderboardScoreMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetLeaderboardScore();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 LeaderboardID, FUWorksSteamID SteamID, int32 score, const FString& ScoreMethod, TArray<uint8> Details);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

