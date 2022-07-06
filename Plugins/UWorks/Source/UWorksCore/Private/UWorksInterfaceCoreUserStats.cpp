#include "UWorksInterfaceCoreUserStats.h"

class UUWorksRequestCoreRequestUserStats;
class UUWorksRequestCoreGetNumberOfCurrentPlayers;
class UUWorksRequestCoreUploadLeaderboardScore;
class UUWorksRequestCoreRequestGlobalStats;
class UUWorksRequestCoreRequestGlobalAchievementPercentages;
class UUWorksInterfaceCoreUserStats;
class UTexture2D;
class UUWorksRequestCoreFindOrCreateLeaderboard;
class UUWorksRequestCoreFindLeaderboard;
class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers;
class UUWorksRequestCoreDownloadLeaderboardEntries;
class UUWorksRequestCoreAttachLeaderboardUGC;

void UUWorksInterfaceCoreUserStats::UploadLeaderboardScoreMinimal(const FUploadLeaderboardScoreMinimalDelegate& Completed, FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32 score, TArray<int32> ScoreDetails) {
}

UUWorksRequestCoreUploadLeaderboardScore* UUWorksInterfaceCoreUserStats::UploadLeaderboardScore() {
    return NULL;
}

bool UUWorksInterfaceCoreUserStats::UpdateAvgRateStat(const FString& Name, float CountThisSession, float SessionLength) {
    return false;
}

bool UUWorksInterfaceCoreUserStats::StoreStats() {
    return false;
}

bool UUWorksInterfaceCoreUserStats::SetStatAsInteger(const FString& Name, int32 Data) {
    return false;
}

bool UUWorksInterfaceCoreUserStats::SetStatAsFloat(const FString& Name, float Data) {
    return false;
}

bool UUWorksInterfaceCoreUserStats::SetAchievement(const FString& Name) {
    return false;
}

bool UUWorksInterfaceCoreUserStats::ResetAllStats(bool bAchievementsToo) {
    return false;
}

void UUWorksInterfaceCoreUserStats::RequestUserStatsMinimal(const FRequestUserStatsMinimalDelegate& Completed, FUWorksSteamID SteamID) {
}

UUWorksRequestCoreRequestUserStats* UUWorksInterfaceCoreUserStats::RequestUserStats() {
    return NULL;
}

void UUWorksInterfaceCoreUserStats::RequestGlobalStatsMinimal(const FRequestGlobalStatsMinimalDelegate& Completed, int32 HistoryDays) {
}

UUWorksRequestCoreRequestGlobalStats* UUWorksInterfaceCoreUserStats::RequestGlobalStats() {
    return NULL;
}

void UUWorksInterfaceCoreUserStats::RequestGlobalAchievementPercentagesMinimal(const FRequestGlobalAchievementPercentagesMinimalDelegate& Completed) {
}

UUWorksRequestCoreRequestGlobalAchievementPercentages* UUWorksInterfaceCoreUserStats::RequestGlobalAchievementPercentages() {
    return NULL;
}

bool UUWorksInterfaceCoreUserStats::RequestCurrentStats() {
    return false;
}

bool UUWorksInterfaceCoreUserStats::IndicateAchievementProgress(const FString& Name, int32 CurrentProgress, int32 MaxProgress) {
    return false;
}

UUWorksInterfaceCoreUserStats* UUWorksInterfaceCoreUserStats::GetUserStats() {
    return NULL;
}

bool UUWorksInterfaceCoreUserStats::GetUserStatInteger(FUWorksSteamID SteamIDUser, const FString& Name, int32& Data) {
    return false;
}

bool UUWorksInterfaceCoreUserStats::GetUserStatFloat(FUWorksSteamID SteamIDUser, const FString& Name, float& Data) {
    return false;
}

bool UUWorksInterfaceCoreUserStats::GetUserAchievementAndUnlockTime(FUWorksSteamID SteamIDUser, const FString& Name, bool& bAchieved, int32& UnlockTime) {
    return false;
}

bool UUWorksInterfaceCoreUserStats::GetUserAchievement(FUWorksSteamID SteamIDUser, const FString& Name, bool& bAchieved) {
    return false;
}

bool UUWorksInterfaceCoreUserStats::GetStatAsInteger(const FString& Name, int32& Data) {
    return false;
}

bool UUWorksInterfaceCoreUserStats::GetStatAsFloat(const FString& Name, float& Data) {
    return false;
}

void UUWorksInterfaceCoreUserStats::GetNumberOfCurrentPlayersMinimal(const FGetNumberOfCurrentPlayersMinimalDelegate& Completed) {
}

UUWorksRequestCoreGetNumberOfCurrentPlayers* UUWorksInterfaceCoreUserStats::GetNumberOfCurrentPlayers() {
    return NULL;
}

int32 UUWorksInterfaceCoreUserStats::GetNumAchievements() {
    return 0;
}

int32 UUWorksInterfaceCoreUserStats::GetNextMostAchievedAchievementInfo(int32 IteratorPrevious, FString& Name, int32 NameBufferLength, float& Percent, bool& bAchieved) {
    return 0;
}

int32 UUWorksInterfaceCoreUserStats::GetMostAchievedAchievementInfo(FString& Name, int32 NameBufferLength, float& Percent, bool& bAchieved) {
    return 0;
}

EUWorksLeaderboardSortMethod UUWorksInterfaceCoreUserStats::GetLeaderboardSortMethod(FUWorksSteamLeaderboard SteamLeaderboard) {
    return EUWorksLeaderboardSortMethod::None;
}

FString UUWorksInterfaceCoreUserStats::GetLeaderboardName(FUWorksSteamLeaderboard SteamLeaderboard) {
    return TEXT("");
}

int32 UUWorksInterfaceCoreUserStats::GetLeaderboardEntryCount(FUWorksSteamLeaderboard SteamLeaderboard) {
    return 0;
}

EUWorksLeaderboardDisplayType UUWorksInterfaceCoreUserStats::GetLeaderboardDisplayType(FUWorksSteamLeaderboard SteamLeaderboard) {
    return EUWorksLeaderboardDisplayType::None;
}

int32 UUWorksInterfaceCoreUserStats::GetGlobalStatHistoryFromIntegers(const FString& StatName, TArray<FString>& Data, int32 HistoryDays) {
    return 0;
}

int32 UUWorksInterfaceCoreUserStats::GetGlobalStatHistoryFromFloats(const FString& StatName, TArray<FString>& Data, int32 HistoryDays) {
    return 0;
}

bool UUWorksInterfaceCoreUserStats::GetGlobalStatFromInteger(const FString& StatName, FString& Data) {
    return false;
}

bool UUWorksInterfaceCoreUserStats::GetGlobalStatFromFloat(const FString& StatName, FString& Data) {
    return false;
}

bool UUWorksInterfaceCoreUserStats::GetDownloadedLeaderboardEntry(FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 Index, FUWorksLeaderboardEntry& LeaderboardEntry, TArray<int32>& Details, int32 DetailsMax) {
    return false;
}

FString UUWorksInterfaceCoreUserStats::GetAchievementName(int32 Achievement) {
    return TEXT("");
}

UTexture2D* UUWorksInterfaceCoreUserStats::GetAchievementIcon(const FString& Name) {
    return NULL;
}

FString UUWorksInterfaceCoreUserStats::GetAchievementDisplayAttribute(const FString& Name, const FString& Key) {
    return TEXT("");
}

bool UUWorksInterfaceCoreUserStats::GetAchievementAndUnlockTime(const FString& Name, bool& bAchieved, int32& UnlockTime) {
    return false;
}

bool UUWorksInterfaceCoreUserStats::GetAchievementAchievedPercent(const FString& Name, float& Percent) {
    return false;
}

bool UUWorksInterfaceCoreUserStats::GetAchievement(const FString& Name, bool& bAchieved) {
    return false;
}

void UUWorksInterfaceCoreUserStats::FindOrCreateLeaderboardMinimal(const FFindOrCreateLeaderboardMinimalDelegate& Completed, const FString& LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType) {
}

UUWorksRequestCoreFindOrCreateLeaderboard* UUWorksInterfaceCoreUserStats::FindOrCreateLeaderboard() {
    return NULL;
}

void UUWorksInterfaceCoreUserStats::FindLeaderboardMinimal(const FFindLeaderboardMinimalDelegate& Completed, const FString& LeaderboardName) {
}

UUWorksRequestCoreFindLeaderboard* UUWorksInterfaceCoreUserStats::FindLeaderboard() {
    return NULL;
}

void UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntriesMinimal(const FDownloadLeaderboardEntriesMinimalDelegate& Completed, FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32 RangeStart, int32 RangeEnd) {
}

void UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntriesForUsersMinimal(const FDownloadLeaderboardEntriesForUsersMinimalDelegate& Completed, FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> Users) {
}

UUWorksRequestCoreDownloadLeaderboardEntriesForUsers* UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntriesForUsers() {
    return NULL;
}

UUWorksRequestCoreDownloadLeaderboardEntries* UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntries() {
    return NULL;
}

bool UUWorksInterfaceCoreUserStats::ClearAchievement(const FString& Name) {
    return false;
}

void UUWorksInterfaceCoreUserStats::AttachLeaderboardUGCMinimal(const FAttachLeaderboardUGCMinimalDelegate& Completed, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksUGCHandle UGCHandle) {
}

UUWorksRequestCoreAttachLeaderboardUGC* UUWorksInterfaceCoreUserStats::AttachLeaderboardUGC() {
    return NULL;
}

UUWorksInterfaceCoreUserStats::UUWorksInterfaceCoreUserStats() {
}

