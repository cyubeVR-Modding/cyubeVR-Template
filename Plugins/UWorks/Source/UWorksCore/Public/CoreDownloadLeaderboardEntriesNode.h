#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DownloadLeaderboardEntriesDelegateDelegate.h"
#include "UWorksSteamLeaderboard.h"
#include "UWorksSteamLeaderboardEntries.h"
#include "EUWorksLeaderboardDataRequest.h"
#include "CoreDownloadLeaderboardEntriesNode.generated.h"

class UCoreDownloadLeaderboardEntriesNode;

UCLASS()
class UWORKSCORE_API UCoreDownloadLeaderboardEntriesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadLeaderboardEntriesDelegate Completed;
    
    UCoreDownloadLeaderboardEntriesNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    
    UFUNCTION(BlueprintCallable)
    static UCoreDownloadLeaderboardEntriesNode* DownloadLeaderboardEntriesNode(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32 RangeStart, int32 RangeEnd);
    
};

