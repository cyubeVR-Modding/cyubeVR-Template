#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "DownloadLeaderboardEntriesDelegateDelegate.h"
#include "DownloadLeaderboardEntriesMinimalDelegateDelegate.h"
#include "EUWorksLeaderboardDataRequest.h"
#include "UWorksSteamLeaderboard.h"
#include "UWorksSteamLeaderboardEntries.h"
#include "UWorksRequestCoreDownloadLeaderboardEntries.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreDownloadLeaderboardEntries : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadLeaderboardEntriesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadLeaderboardEntriesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreDownloadLeaderboardEntries();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32 RangeStart, int32 RangeEnd);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32& EntryCount);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

