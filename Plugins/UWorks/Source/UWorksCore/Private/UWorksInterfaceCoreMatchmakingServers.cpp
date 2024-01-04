#include "UWorksInterfaceCoreMatchmakingServers.h"

UUWorksInterfaceCoreMatchmakingServers::UUWorksInterfaceCoreMatchmakingServers() {
}

void UUWorksInterfaceCoreMatchmakingServers::ServerListMinimal(const FServerListMinimalDelegate& Completed, const FServerListUpdateMinimalDelegate& Updated, int32 AppID, EUWorksServerQueryType queryType) {
}

UUWorksRequestCoreServerList* UUWorksInterfaceCoreMatchmakingServers::ServerList() {
    return NULL;
}

void UUWorksInterfaceCoreMatchmakingServers::RulesMinimal(const FRulesMinimalDelegate& Completed, const FRulesUpdateMinimalDelegate& Updated, const FString& IP, int32 Port) {
}

UUWorksRequestCoreRules* UUWorksInterfaceCoreMatchmakingServers::Rules() {
    return NULL;
}

void UUWorksInterfaceCoreMatchmakingServers::PlayersMinimal(const FPlayersMinimalDelegate& Completed, const FPlayersUpdateMinimalDelegate& Updated, const FString& IP, int32 Port) {
}

UUWorksRequestCorePlayers* UUWorksInterfaceCoreMatchmakingServers::Players() {
    return NULL;
}

void UUWorksInterfaceCoreMatchmakingServers::PingMinimal(const FPingMinimalDelegate& Completed, const FString& IP, int32 Port) {
}

UUWorksRequestCorePing* UUWorksInterfaceCoreMatchmakingServers::Ping() {
    return NULL;
}

UUWorksInterfaceCoreMatchmakingServers* UUWorksInterfaceCoreMatchmakingServers::GetMatchmakingServers() {
    return NULL;
}


