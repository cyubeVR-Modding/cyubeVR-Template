#pragma once
#include "CoreMinimal.h"
#include "EUWorksLeaderboardUploadScoreMethod.h"
#include "UWorksRequestCore.h"
#include "UWorksSteamLeaderboard.h"
#include "UploadLeaderboardScoreDelegateDelegate.h"
#include "UploadLeaderboardScoreMinimalDelegateDelegate.h"
#include "UWorksRequestCoreUploadLeaderboardScore.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreUploadLeaderboardScore : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUploadLeaderboardScoreDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUploadLeaderboardScoreMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreUploadLeaderboardScore();

    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32 score, TArray<int32> ScoreDetails);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(bool& bSuccess, FUWorksSteamLeaderboard& SteamLeaderboard, int32& score, bool& bScoreChanged, int32& GlobalRankNew, int32& GlobalRankPrevious);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

