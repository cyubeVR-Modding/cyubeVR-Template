#include "UWorksInterfaceCoreGameServerStats.h"

UUWorksInterfaceCoreGameServerStats::UUWorksInterfaceCoreGameServerStats() {
}

bool UUWorksInterfaceCoreGameServerStats::UpdateUserAvgRateStat(FUWorksSteamID SteamIDUser, const FString& Name, float CountThisSession, float SessionLength) {
    return false;
}

void UUWorksInterfaceCoreGameServerStats::StoreUserStatsMinimal(const FServerStoreUserStatsMinimalDelegate& Completed, FUWorksSteamID SteamIDUser) {
}

UUWorksRequestCoreStoreUserStats* UUWorksInterfaceCoreGameServerStats::StoreUserStats() {
    return NULL;
}

bool UUWorksInterfaceCoreGameServerStats::SetUserStatFromInteger(FUWorksSteamID SteamIDUser, const FString& Name, int32 Data) {
    return false;
}

bool UUWorksInterfaceCoreGameServerStats::SetUserStatFromFloat(FUWorksSteamID SteamIDUser, const FString& Name, float Data) {
    return false;
}

bool UUWorksInterfaceCoreGameServerStats::SetUserAchievement(FUWorksSteamID SteamIDUser, const FString& Name) {
    return false;
}

void UUWorksInterfaceCoreGameServerStats::RequestUserStatsMinimal(const FServerRequestUserStatsMinimalDelegate& Completed, FUWorksSteamID SteamIDUser) {
}

UUWorksRequestCoreRequestUserStatsGS* UUWorksInterfaceCoreGameServerStats::RequestUserStats() {
    return NULL;
}

bool UUWorksInterfaceCoreGameServerStats::GetUserStatAsInteger(FUWorksSteamID SteamIDUser, const FString& Name, int32& Data) {
    return false;
}

bool UUWorksInterfaceCoreGameServerStats::GetUserStatAsFloat(FUWorksSteamID SteamIDUser, const FString& Name, float& Data) {
    return false;
}

bool UUWorksInterfaceCoreGameServerStats::GetUserAchievement(FUWorksSteamID SteamIDUser, const FString& Name, bool& bAchieved) {
    return false;
}

UUWorksInterfaceCoreGameServerStats* UUWorksInterfaceCoreGameServerStats::GetGameServerStats() {
    return NULL;
}

bool UUWorksInterfaceCoreGameServerStats::ClearUserAchievement(FUWorksSteamID SteamIDUser, const FString& Name) {
    return false;
}


