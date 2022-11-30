#include "UWorksInterfaceWebLeaderboards.h"

class UUWorksRequestWebSetLeaderboardScore;
class UUWorksRequestWebResetLeaderboard;
class UUWorksRequestWebGetLeaderboardsForGame;
class UUWorksRequestWebGetLeaderboardEntries;
class UUWorksRequestWebFindOrCreateLeaderboard;
class UUWorksRequestWebDeleteLeaderboard;

void UUWorksInterfaceWebLeaderboards::SetLeaderboardScoreMinimal(const FString& Key, int32 AppID, int32 LeaderboardID, FUWorksSteamID SteamID, int32 score, const FString& ScoreMethod, TArray<uint8> Details, const FSetLeaderboardScoreMinimalDelegate& Delegate) {
}

UUWorksRequestWebSetLeaderboardScore* UUWorksInterfaceWebLeaderboards::SetLeaderboardScore() {
    return NULL;
}

void UUWorksInterfaceWebLeaderboards::ResetLeaderboardMinimal(const FString& Key, int32 AppID, int32 LeaderboardID, const FResetLeaderboardMinimalDelegate& Delegate) {
}

UUWorksRequestWebResetLeaderboard* UUWorksInterfaceWebLeaderboards::ResetLeaderboard() {
    return NULL;
}

void UUWorksInterfaceWebLeaderboards::GetLeaderboardsForGameMinimal(const FString& Key, int32 AppID, const FGetLeaderboardsForGameMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetLeaderboardsForGame* UUWorksInterfaceWebLeaderboards::GetLeaderboardsForGame() {
    return NULL;
}

void UUWorksInterfaceWebLeaderboards::GetLeaderboardEntriesMinimal(const FString& Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardID, int32 DataRequest, FUWorksSteamID SteamID, const FGetLeaderboardEntriesMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetLeaderboardEntries* UUWorksInterfaceWebLeaderboards::GetLeaderboardEntries() {
    return NULL;
}

void UUWorksInterfaceWebLeaderboards::FindOrCreateLeaderboardMinimal(const FString& Key, int32 AppID, const FString& Name, const FString& SortMethod, const FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads, const FFindOrCreateLeaderboardMinimalDelegate& Delegate) {
}

UUWorksRequestWebFindOrCreateLeaderboard* UUWorksInterfaceWebLeaderboards::FindOrCreateLeaderboard() {
    return NULL;
}

void UUWorksInterfaceWebLeaderboards::DeleteLeaderboardMinimal(const FString& Key, int32 AppID, const FString& Name, const FDeleteLeaderboardMinimalDelegate& Delegate) {
}

UUWorksRequestWebDeleteLeaderboard* UUWorksInterfaceWebLeaderboards::DeleteLeaderboard() {
    return NULL;
}

UUWorksInterfaceWebLeaderboards::UUWorksInterfaceWebLeaderboards() {
}

