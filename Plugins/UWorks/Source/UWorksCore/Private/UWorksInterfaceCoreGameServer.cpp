#include "UWorksInterfaceCoreGameServer.h"

UUWorksInterfaceCoreGameServer::UUWorksInterfaceCoreGameServer() {
}

bool UUWorksInterfaceCoreGameServer::WasRestartRequested() {
    return false;
}

EUWorksUserHasLicenseForAppResult UUWorksInterfaceCoreGameServer::UserHasLicenseForApp(FUWorksSteamID SteamID, int32 AppID) {
    return EUWorksUserHasLicenseForAppResult::HasLicense;
}

void UUWorksInterfaceCoreGameServer::SetServerName(const FString& ServerName) {
}

void UUWorksInterfaceCoreGameServer::SetRegion(const FString& Region) {
}

void UUWorksInterfaceCoreGameServer::SetPasswordProtected(bool bPasswordProtected) {
}

void UUWorksInterfaceCoreGameServer::SetMaxPlayerCount(int32 PlayersMax) {
}

void UUWorksInterfaceCoreGameServer::SetMapName(const FString& MapName) {
}

void UUWorksInterfaceCoreGameServer::SetKeyValue(const FString& Key, const FString& Value) {
}

void UUWorksInterfaceCoreGameServer::SetHeartbeatInterval(int32 HeartbeatInterval) {
}

void UUWorksInterfaceCoreGameServer::SetGameTags(const FString& GameTags) {
}

void UUWorksInterfaceCoreGameServer::SetGameData(const FString& GameData) {
}

void UUWorksInterfaceCoreGameServer::SetBotPlayerCount(int32 BotPlayers) {
}

bool UUWorksInterfaceCoreGameServer::RequestUserGroupStatus(FUWorksSteamID SteamIDUser, FUWorksSteamID SteamIDGroup) {
    return false;
}

FUWorksSteamID UUWorksInterfaceCoreGameServer::GetSteamID() {
    return FUWorksSteamID{};
}

UUWorksInterfaceCoreGameServer* UUWorksInterfaceCoreGameServer::GetGameServer() {
    return NULL;
}

FUWorksTicketHandle UUWorksInterfaceCoreGameServer::GetAuthSessionTicket(TArray<uint8>& Ticket) {
    return FUWorksTicketHandle{};
}

void UUWorksInterfaceCoreGameServer::ForceHeartbeat() {
}

void UUWorksInterfaceCoreGameServer::EndAuthSession(FUWorksSteamID SteamID) {
}

void UUWorksInterfaceCoreGameServer::EnableHeartbeats(bool bActive) {
}

void UUWorksInterfaceCoreGameServer::ComputeNewPlayerCompatibilityMinimal(const FComputeNewPlayerCompatibilityMinimalDelegate& Completed, FUWorksSteamID SteamIDNewPlayer) {
}

UUWorksRequestCoreComputeNewPlayerCompatibility* UUWorksInterfaceCoreGameServer::ComputeNewPlayerCompatibility() {
    return NULL;
}

void UUWorksInterfaceCoreGameServer::ClearAllKeyValues() {
}

void UUWorksInterfaceCoreGameServer::CancelAuthTicket(FUWorksTicketHandle TicketHandle) {
}

bool UUWorksInterfaceCoreGameServer::BSecure() {
    return false;
}

bool UUWorksInterfaceCoreGameServer::BLoggedOn() {
    return false;
}

EUWorksBeginAuthSessionResult UUWorksInterfaceCoreGameServer::BeginAuthSession(TArray<uint8> Ticket, FUWorksSteamID SteamID) {
    return EUWorksBeginAuthSessionResult::OK;
}

void UUWorksInterfaceCoreGameServer::AssociateWithClanMinimal(const FAssociateWithClanMinimalDelegate& Completed, FUWorksSteamID SteamIDClan) {
}

UUWorksRequestCoreAssociateWithClan* UUWorksInterfaceCoreGameServer::AssociateWithClan() {
    return NULL;
}


