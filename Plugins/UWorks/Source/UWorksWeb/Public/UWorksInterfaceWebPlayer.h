#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksInterfaceWeb.h"
#include "UWorksPlaySessions.h"
#include "RecordOfflinePlaytimeMinimalDelegateDelegate.h"
#include "GetSteamLevelMinimalDelegateDelegate.h"
#include "IsPlayingSharedGameMinimalDelegateDelegate.h"
#include "GetRecentlyPlayedGamesMinimalDelegateDelegate.h"
#include "GetOwnedGamesMinimalDelegateDelegate.h"
#include "GetCommunityBadgeProgressMinimalDelegateDelegate.h"
#include "GetBadgesMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebPlayer.generated.h"

class UUWorksRequestWebGetBadges;
class UUWorksRequestWebGetCommunityBadgeProgress;
class UUWorksRequestWebRecordOfflinePlaytime;
class UUWorksRequestWebIsPlayingSharedGame;
class UUWorksRequestWebGetSteamLevel;
class UUWorksRequestWebGetRecentlyPlayedGames;
class UUWorksRequestWebGetOwnedGames;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebPlayer : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebPlayer();
    UFUNCTION(BlueprintCallable)
    static void RecordOfflinePlaytimeMinimal(FUWorksSteamID SteamID, const FString& Ticket, FUWorksPlaySessions PlaySessions, const FRecordOfflinePlaytimeMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebRecordOfflinePlaytime* RecordOfflinePlaytime();
    
    UFUNCTION(BlueprintCallable)
    static void IsPlayingSharedGameMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppIDPlaying, const FIsPlayingSharedGameMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebIsPlayingSharedGame* IsPlayingSharedGame();
    
    UFUNCTION(BlueprintCallable)
    static void GetSteamLevelMinimal(const FString& Key, FUWorksSteamID SteamID, const FGetSteamLevelMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetSteamLevel* GetSteamLevel();
    
    UFUNCTION(BlueprintCallable)
    static void GetRecentlyPlayedGamesMinimal(const FString& Key, FUWorksSteamID SteamID, int32 Count, const FGetRecentlyPlayedGamesMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetRecentlyPlayedGames* GetRecentlyPlayedGames();
    
    UFUNCTION(BlueprintCallable)
    static void GetOwnedGamesMinimal(const FString& Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> AppIDsFilter, const FGetOwnedGamesMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetOwnedGames* GetOwnedGames();
    
    UFUNCTION(BlueprintCallable)
    static void GetCommunityBadgeProgressMinimal(const FString& Key, FUWorksSteamID SteamID, int32 BadgeID, const FGetCommunityBadgeProgressMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetCommunityBadgeProgress* GetCommunityBadgeProgress();
    
    UFUNCTION(BlueprintCallable)
    static void GetBadgesMinimal(const FString& Key, FUWorksSteamID SteamID, const FGetBadgesMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetBadges* GetBadges();
    
};

