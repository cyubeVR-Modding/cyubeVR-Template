#include "UWorksInterfaceWebPlayer.h"

class UUWorksRequestWebRecordOfflinePlaytime;
class UUWorksRequestWebIsPlayingSharedGame;
class UUWorksRequestWebGetSteamLevel;
class UUWorksRequestWebGetRecentlyPlayedGames;
class UUWorksRequestWebGetOwnedGames;
class UUWorksRequestWebGetCommunityBadgeProgress;
class UUWorksRequestWebGetBadges;

void UUWorksInterfaceWebPlayer::RecordOfflinePlaytimeMinimal(FUWorksSteamID SteamID, const FString& Ticket, FUWorksPlaySessions PlaySessions, const FRecordOfflinePlaytimeMinimalDelegate& Delegate) {
}

UUWorksRequestWebRecordOfflinePlaytime* UUWorksInterfaceWebPlayer::RecordOfflinePlaytime() {
    return NULL;
}

void UUWorksInterfaceWebPlayer::IsPlayingSharedGameMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppIDPlaying, const FIsPlayingSharedGameMinimalDelegate& Delegate) {
}

UUWorksRequestWebIsPlayingSharedGame* UUWorksInterfaceWebPlayer::IsPlayingSharedGame() {
    return NULL;
}

void UUWorksInterfaceWebPlayer::GetSteamLevelMinimal(const FString& Key, FUWorksSteamID SteamID, const FGetSteamLevelMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetSteamLevel* UUWorksInterfaceWebPlayer::GetSteamLevel() {
    return NULL;
}

void UUWorksInterfaceWebPlayer::GetRecentlyPlayedGamesMinimal(const FString& Key, FUWorksSteamID SteamID, int32 Count, const FGetRecentlyPlayedGamesMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetRecentlyPlayedGames* UUWorksInterfaceWebPlayer::GetRecentlyPlayedGames() {
    return NULL;
}

void UUWorksInterfaceWebPlayer::GetOwnedGamesMinimal(const FString& Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> AppIDsFilter, const FGetOwnedGamesMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetOwnedGames* UUWorksInterfaceWebPlayer::GetOwnedGames() {
    return NULL;
}

void UUWorksInterfaceWebPlayer::GetCommunityBadgeProgressMinimal(const FString& Key, FUWorksSteamID SteamID, int32 BadgeID, const FGetCommunityBadgeProgressMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetCommunityBadgeProgress* UUWorksInterfaceWebPlayer::GetCommunityBadgeProgress() {
    return NULL;
}

void UUWorksInterfaceWebPlayer::GetBadgesMinimal(const FString& Key, FUWorksSteamID SteamID, const FGetBadgesMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetBadges* UUWorksInterfaceWebPlayer::GetBadges() {
    return NULL;
}

UUWorksInterfaceWebPlayer::UUWorksInterfaceWebPlayer() {
}

