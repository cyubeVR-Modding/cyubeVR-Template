#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DownloadLeaderboardEntriesForUsersDelegateDelegate.h"
#include "UWorksSteamLeaderboard.h"
#include "UWorksSteamID.h"
#include "UWorksSteamLeaderboardEntries.h"
#include "CoreDownloadLeaderboardEntriesForUsersNode.generated.h"

class UCoreDownloadLeaderboardEntriesForUsersNode;

UCLASS()
class UWORKSCORE_API UCoreDownloadLeaderboardEntriesForUsersNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadLeaderboardEntriesForUsersDelegate Completed;
    
    UCoreDownloadLeaderboardEntriesForUsersNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    
    UFUNCTION(BlueprintCallable)
    static UCoreDownloadLeaderboardEntriesForUsersNode* DownloadLeaderboardEntriesForUsersNode(FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> Users);
    
};

