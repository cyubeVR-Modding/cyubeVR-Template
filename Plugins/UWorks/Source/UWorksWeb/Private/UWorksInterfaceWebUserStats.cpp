#include "UWorksInterfaceWebUserStats.h"

class UUWorksRequestWebGetNumberOfCurrentPlayers;
class UUWorksRequestWebSetUserStatsForGame;
class UUWorksRequestWebGetUserStatsForGame;
class UUWorksRequestWebGetSchemaForGame;
class UUWorksRequestWebGetPlayerAchievements;
class UUWorksRequestWebGetGlobalStatsForGame;
class UUWorksRequestWebGetGlobalAchievementPercentagesForApp;

void UUWorksInterfaceWebUserStats::SetUserStatsForGameMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<FString> Name, TArray<int32> Value, const FSetUserStatsForGameMinimalDelegate& Delegate) {
}

UUWorksRequestWebSetUserStatsForGame* UUWorksInterfaceWebUserStats::SetUserStatsForGame() {
    return NULL;
}

void UUWorksInterfaceWebUserStats::GetUserStatsForGameMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FGetUserStatsForGameMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetUserStatsForGame* UUWorksInterfaceWebUserStats::GetUserStatsForGame() {
    return NULL;
}

void UUWorksInterfaceWebUserStats::GetSchemaForGameMinimal(const FString& Key, int32 AppID, const FString& Language, const FGetSchemaForGameMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetSchemaForGame* UUWorksInterfaceWebUserStats::GetSchemaForGame() {
    return NULL;
}

void UUWorksInterfaceWebUserStats::GetPlayerAchievementsMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& Language, const FGetPlayerAchievementsMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetPlayerAchievements* UUWorksInterfaceWebUserStats::GetPlayerAchievements() {
    return NULL;
}

void UUWorksInterfaceWebUserStats::GetNumberOfCurrentPlayersMinimal(int32 AppID, const FGetNumberOfCurrentPlayersMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetNumberOfCurrentPlayers* UUWorksInterfaceWebUserStats::GetNumberOfCurrentPlayers() {
    return NULL;
}

void UUWorksInterfaceWebUserStats::GetGlobalStatsForGameMinimal(int32 AppID, int32 Count, TArray<FString> Name, int32 StartDate, int32 EndDate, const FGetGlobalStatsForGameMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetGlobalStatsForGame* UUWorksInterfaceWebUserStats::GetGlobalStatsForGame() {
    return NULL;
}

void UUWorksInterfaceWebUserStats::GetGlobalAchievementPercentagesForAppMinimal(FUWorksGameID GameID, const FGetGlobalAchievementPercentagesForAppMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetGlobalAchievementPercentagesForApp* UUWorksInterfaceWebUserStats::GetGlobalAchievementPercentagesForApp() {
    return NULL;
}

UUWorksInterfaceWebUserStats::UUWorksInterfaceWebUserStats() {
}

