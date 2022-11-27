#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "DownloadLeaderboardEntriesForUsersDelegateDelegate.h"
#include "DownloadLeaderboardEntriesForUsersMinimalDelegateDelegate.h"
#include "UWorksSteamLeaderboardEntries.h"
#include "UWorksSteamID.h"
#include "UWorksSteamLeaderboard.h"
#include "UWorksRequestCoreDownloadLeaderboardEntriesForUsers.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreDownloadLeaderboardEntriesForUsers : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadLeaderboardEntriesForUsersDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadLeaderboardEntriesForUsersMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreDownloadLeaderboardEntriesForUsers();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> Users);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32& EntryCount);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

