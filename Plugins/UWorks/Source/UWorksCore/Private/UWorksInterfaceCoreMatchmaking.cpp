#include "UWorksInterfaceCoreMatchmaking.h"

class UUWorksRequestCoreRequestLobbyList;
class UUWorksRequestCoreJoinLobby;
class UUWorksInterfaceCoreMatchmaking;
class UUWorksRequestCoreCreateLobby;

bool UUWorksInterfaceCoreMatchmaking::SetLobbyType(FUWorksSteamID SteamIDLobby, EUWorksLobbyType LobbyType) {
    return false;
}

bool UUWorksInterfaceCoreMatchmaking::SetLobbyOwner(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDNewOwner) {
    return false;
}

bool UUWorksInterfaceCoreMatchmaking::SetLobbyMemberLimit(FUWorksSteamID SteamIDLobby, int32 MaxMembers) {
    return false;
}

void UUWorksInterfaceCoreMatchmaking::SetLobbyMemberData(FUWorksSteamID SteamIDLobby, const FString& Key, const FString& Value) {
}

bool UUWorksInterfaceCoreMatchmaking::SetLobbyJoinable(FUWorksSteamID SteamIDLobby, bool bLobbyJoinable) {
    return false;
}

void UUWorksInterfaceCoreMatchmaking::SetLobbyGameServer(FUWorksSteamID SteamIDLobby, const FString& GameServerIP, int32 GameServerPort, FUWorksSteamID SteamIDGameServer) {
}

bool UUWorksInterfaceCoreMatchmaking::SetLobbyData(FUWorksSteamID SteamIDLobby, const FString& Key, const FString& Value) {
    return false;
}

bool UUWorksInterfaceCoreMatchmaking::SetLinkedLobby(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDLobbyDependent) {
    return false;
}

bool UUWorksInterfaceCoreMatchmaking::SendLobbyChatMsg(FUWorksSteamID SteamIDLobby, const FString& Message) {
    return false;
}

void UUWorksInterfaceCoreMatchmaking::RequestLobbyListMinimal(const FRequestLobbyListMinimalDelegate& Completed) {
}

UUWorksRequestCoreRequestLobbyList* UUWorksInterfaceCoreMatchmaking::RequestLobbyList() {
    return NULL;
}

bool UUWorksInterfaceCoreMatchmaking::RequestLobbyData(FUWorksSteamID SteamIDLobby) {
    return false;
}

bool UUWorksInterfaceCoreMatchmaking::RemoveFavoriteGame(int32 AppID, const FString& IP, int32 ConnectionPort, int32 QueryPort, TArray<EUWorksFavoriteFlags> Flags) {
    return false;
}

void UUWorksInterfaceCoreMatchmaking::LeaveLobby(FUWorksSteamID SteamIDLobby) {
}

void UUWorksInterfaceCoreMatchmaking::JoinLobbyMinimal(const FJoinLobbyMinimalDelegate& Completed, FUWorksSteamID SteamIDLobby) {
}

UUWorksRequestCoreJoinLobby* UUWorksInterfaceCoreMatchmaking::JoinLobby() {
    return NULL;
}

bool UUWorksInterfaceCoreMatchmaking::InviteUserToLobby(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDInvitee) {
    return false;
}

int32 UUWorksInterfaceCoreMatchmaking::GetNumLobbyMembers(FUWorksSteamID SteamIDLobby) {
    return 0;
}

UUWorksInterfaceCoreMatchmaking* UUWorksInterfaceCoreMatchmaking::GetMatchmaking() {
    return NULL;
}

FUWorksSteamID UUWorksInterfaceCoreMatchmaking::GetLobbyOwner(FUWorksSteamID SteamIDLobby) {
    return FUWorksSteamID{};
}

int32 UUWorksInterfaceCoreMatchmaking::GetLobbyMemberLimit(FUWorksSteamID SteamIDLobby) {
    return 0;
}

FString UUWorksInterfaceCoreMatchmaking::GetLobbyMemberData(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDUser, const FString& Key) {
    return TEXT("");
}

FUWorksSteamID UUWorksInterfaceCoreMatchmaking::GetLobbyMemberByIndex(FUWorksSteamID SteamIDLobby, int32 Member) {
    return FUWorksSteamID{};
}

bool UUWorksInterfaceCoreMatchmaking::GetLobbyGameServer(FUWorksSteamID SteamIDLobby, FString& GameServerIP, int32& GameServerPort, FUWorksSteamID& SteamIDGameServer) {
    return false;
}

int32 UUWorksInterfaceCoreMatchmaking::GetLobbyDataCount(FUWorksSteamID SteamIDLobby) {
    return 0;
}

bool UUWorksInterfaceCoreMatchmaking::GetLobbyDataByIndex(FUWorksSteamID SteamIDLobby, int32 LobbyData, FString& Key, int32 KeyMaxLength, FString& Value, int32 ValueMaxLength) {
    return false;
}

FString UUWorksInterfaceCoreMatchmaking::GetLobbyData(FUWorksSteamID SteamIDLobby, const FString& Key) {
    return TEXT("");
}

int32 UUWorksInterfaceCoreMatchmaking::GetLobbyChatEntry(FUWorksSteamID SteamIDLobby, int32 MessageID, FUWorksSteamID& SteamIDUser, FString& Message, int32 MessageMaxLength, EUWorksChatEntryType& ChatEntryType) {
    return 0;
}

FUWorksSteamID UUWorksInterfaceCoreMatchmaking::GetLobbyByIndex(int32 Lobby) {
    return FUWorksSteamID{};
}

int32 UUWorksInterfaceCoreMatchmaking::GetFavoriteGameCount() {
    return 0;
}

bool UUWorksInterfaceCoreMatchmaking::GetFavoriteGame(int32 Game, int32& AppID, FString& IP, int32& ConnectionPort, int32& QueryPort, TArray<EUWorksFavoriteFlags>& Flags, int32& TimeLastPlayedOnServer) {
    return false;
}

bool UUWorksInterfaceCoreMatchmaking::DeleteLobbyData(FUWorksSteamID SteamIDLobby, const FString& Key) {
    return false;
}

void UUWorksInterfaceCoreMatchmaking::CreateLobbyMinimal(const FCreateLobbyMinimalDelegate& Completed, EUWorksLobbyType LobbyType, int32 MaxMembers) {
}

UUWorksRequestCoreCreateLobby* UUWorksInterfaceCoreMatchmaking::CreateLobby() {
    return NULL;
}

void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListStringFilter(const FString& KeyToMatch, const FString& ValueToMatch, EUWorksLobbyComparison ComparisonType) {
}

void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListResultCountFilter(int32 MaxResults) {
}

void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListNumericalFilter(const FString& KeyToMatch, int32 ValueToMatch, EUWorksLobbyComparison ComparisonType) {
}

void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListNearValueFilter(const FString& KeyToMatch, int32 ValueToBeCloseTo) {
}

void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListFilterSlotsAvailable(int32 SlotsAvailable) {
}

void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListDistanceFilter(EUWorksLobbyDistanceFilter LobbyDistanceFilter) {
}

void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListCompatibleMembersFilter(FUWorksSteamID SteamIDLobby) {
}

int32 UUWorksInterfaceCoreMatchmaking::AddFavoriteGame(int32 AppID, const FString& IP, int32 ConnectionPort, int32 QueryPort, TArray<EUWorksFavoriteFlags> Flags, int32 TimeLastPlayedOnServer) {
    return 0;
}

UUWorksInterfaceCoreMatchmaking::UUWorksInterfaceCoreMatchmaking() {
}

