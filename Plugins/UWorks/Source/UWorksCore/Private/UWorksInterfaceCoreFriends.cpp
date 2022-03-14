#include "UWorksInterfaceCoreFriends.h"

class UUWorksRequestCoreJoinClanChatRoom;
class UUWorksRequestCoreSetPersonaName;
class UUWorksRequestCoreRequestClanOfficerList;
class UUWorksRequestCoreIsFollowing;
class UTexture2D;
class UUWorksInterfaceCoreFriends;
class UUWorksRequestCoreGetFollowerCount;
class UUWorksRequestCoreEnumerateFollowingList;
class UUWorksRequestCoreDownloadClanActivityCounts;

bool UUWorksInterfaceCoreFriends::SetRichPresence(const FString& Key, const FString& Value) {
    return false;
}

void UUWorksInterfaceCoreFriends::SetPlayedWith(FUWorksSteamID SteamIDUserPlayedWith) {
}

void UUWorksInterfaceCoreFriends::SetPersonaNameMinimal(const FSetPersonaNameMinimalDelegate& Completed, const FString& Name) {
}

UUWorksRequestCoreSetPersonaName* UUWorksInterfaceCoreFriends::SetPersonaName() {
    return NULL;
}

bool UUWorksInterfaceCoreFriends::SetListenForFriendsMessages(bool bInterceptEnabled) {
    return false;
}

void UUWorksInterfaceCoreFriends::SetInGameVoiceSpeaking(FUWorksSteamID SteamIDUser, bool bSpeaking) {
}

bool UUWorksInterfaceCoreFriends::SendClanChatMessage(FUWorksSteamID SteamIDClanChat, const FString& Text) {
    return false;
}

bool UUWorksInterfaceCoreFriends::RequestUserInformation(FUWorksSteamID SteamIDUser, bool bRequireNameOnly) {
    return false;
}

void UUWorksInterfaceCoreFriends::RequestFriendRichPresence(FUWorksSteamID SteamIDFriend) {
}

void UUWorksInterfaceCoreFriends::RequestClanOfficerListMinimal(const FRequestClanOfficerListMinimalDelegate& Completed, FUWorksSteamID SteamID) {
}

UUWorksRequestCoreRequestClanOfficerList* UUWorksInterfaceCoreFriends::RequestClanOfficerList() {
    return NULL;
}

bool UUWorksInterfaceCoreFriends::ReplyToFriendMessage(FUWorksSteamID SteamIDFriend, const FString& MessageToSend) {
    return false;
}

bool UUWorksInterfaceCoreFriends::OpenClanChatWindowInSteam(FUWorksSteamID SteamIDClanChat) {
    return false;
}

bool UUWorksInterfaceCoreFriends::LeaveClanChatRoom(FUWorksSteamID SteamIDClan) {
    return false;
}

void UUWorksInterfaceCoreFriends::JoinClanChatRoomMinimal(const FJoinClanChatRoomMinimalDelegate& Completed, FUWorksSteamID SteamIDClan) {
}

UUWorksRequestCoreJoinClanChatRoom* UUWorksInterfaceCoreFriends::JoinClanChatRoom() {
    return NULL;
}

bool UUWorksInterfaceCoreFriends::IsUserInSource(FUWorksSteamID SteamIDUser, FUWorksSteamID SteamIDSource) {
    return false;
}

void UUWorksInterfaceCoreFriends::IsFollowingMinimal(const FIsFollowingMinimalDelegate& Completed, FUWorksSteamID SteamID) {
}

UUWorksRequestCoreIsFollowing* UUWorksInterfaceCoreFriends::IsFollowing() {
    return NULL;
}

bool UUWorksInterfaceCoreFriends::IsClanChatWindowOpenInSteam(FUWorksSteamID SteamIDClanChat) {
    return false;
}

bool UUWorksInterfaceCoreFriends::IsClanChatAdmin(FUWorksSteamID SteamIDClanChat, FUWorksSteamID SteamIDUser) {
    return false;
}

bool UUWorksInterfaceCoreFriends::InviteUserToGame(FUWorksSteamID SteamIDFriend, const FString& ConnectString) {
    return false;
}

bool UUWorksInterfaceCoreFriends::HasFriend(FUWorksSteamID SteamIDFriend, TArray<EUWorksFriendFlags> FriendFlags) {
    return false;
}

TArray<EUWorksUserRestriction> UUWorksInterfaceCoreFriends::GetUserRestrictions() {
    return TArray<EUWorksUserRestriction>();
}

UTexture2D* UUWorksInterfaceCoreFriends::GetSmallFriendAvatar(FUWorksSteamID SteamIDFriend) {
    return NULL;
}

FString UUWorksInterfaceCoreFriends::GetPlayerNickname(FUWorksSteamID SteamIDPlayer) {
    return TEXT("");
}

EUWorksPersonaState UUWorksInterfaceCoreFriends::GetPersonaState() {
    return EUWorksPersonaState::Offline;
}

FString UUWorksInterfaceCoreFriends::GetPersonaName() {
    return TEXT("");
}

UTexture2D* UUWorksInterfaceCoreFriends::GetMediumFriendAvatar(FUWorksSteamID SteamIDFriend) {
    return NULL;
}

UTexture2D* UUWorksInterfaceCoreFriends::GetLargeFriendAvatar(FUWorksSteamID SteamIDFriend) {
    return NULL;
}

int32 UUWorksInterfaceCoreFriends::GetFriendSteamLevel(FUWorksSteamID SteamIDFriend) {
    return 0;
}

FString UUWorksInterfaceCoreFriends::GetFriendsGroupName(FUWorksFriendsGroupID FriendsGroupID) {
    return TEXT("");
}

void UUWorksInterfaceCoreFriends::GetFriendsGroupMembersList(FUWorksFriendsGroupID FriendsGroupID, TArray<FUWorksSteamID>& SteamIDMembers, int32 MembersCount) {
}

int32 UUWorksInterfaceCoreFriends::GetFriendsGroupMembersCount(FUWorksFriendsGroupID FriendsGroupID) {
    return 0;
}

FUWorksFriendsGroupID UUWorksInterfaceCoreFriends::GetFriendsGroupIDByIndex(int32 FriendGroup) {
    return FUWorksFriendsGroupID{};
}

int32 UUWorksInterfaceCoreFriends::GetFriendsGroupCount() {
    return 0;
}

UUWorksInterfaceCoreFriends* UUWorksInterfaceCoreFriends::GetFriends() {
    return NULL;
}

int32 UUWorksInterfaceCoreFriends::GetFriendRichPresenceKeyCount(FUWorksSteamID SteamIDFriend) {
    return 0;
}

FString UUWorksInterfaceCoreFriends::GetFriendRichPresenceKeyByIndex(FUWorksSteamID SteamIDFriend, int32 Key) {
    return TEXT("");
}

FString UUWorksInterfaceCoreFriends::GetFriendRichPresence(FUWorksSteamID SteamIDFriend, const FString& Key) {
    return TEXT("");
}

EUWorksFriendRelationship UUWorksInterfaceCoreFriends::GetFriendRelationship(FUWorksSteamID SteamIDFriend) {
    return EUWorksFriendRelationship::None;
}

EUWorksPersonaState UUWorksInterfaceCoreFriends::GetFriendPersonaState(FUWorksSteamID SteamIDFriend) {
    return EUWorksPersonaState::Offline;
}

FString UUWorksInterfaceCoreFriends::GetFriendPersonaNameHistory(FUWorksSteamID SteamIDFriend, int32 PersonaName) {
    return TEXT("");
}

FString UUWorksInterfaceCoreFriends::GetFriendPersonaName(FUWorksSteamID SteamIDFriend) {
    return TEXT("");
}

int32 UUWorksInterfaceCoreFriends::GetFriendMessage(FUWorksSteamID SteamIDFriend, int32 MessageID, FString& Text, int32 TextMaxLength, EUWorksChatEntryType& ChatEntryType) {
    return 0;
}

bool UUWorksInterfaceCoreFriends::GetFriendGamePlayed(FUWorksSteamID SteamIDFriend, FUWorksGameID& GameID, FString& GameIP, int32& ConnectionPort, int32& QueryPort, FUWorksSteamID& SteamIDLobby) {
    return false;
}

FUWorksSteamID UUWorksInterfaceCoreFriends::GetFriendFromSourceByIndex(FUWorksSteamID SteamIDSource, int32 Friend) {
    return FUWorksSteamID{};
}

int32 UUWorksInterfaceCoreFriends::GetFriendCountFromSource(FUWorksSteamID SteamIDSource) {
    return 0;
}

int32 UUWorksInterfaceCoreFriends::GetFriendCount(TArray<EUWorksFriendFlags> FriendFlags) {
    return 0;
}

int32 UUWorksInterfaceCoreFriends::GetFriendCoplayTime(FUWorksSteamID SteamIDFriend) {
    return 0;
}

int32 UUWorksInterfaceCoreFriends::GetFriendCoplayGame(FUWorksSteamID SteamIDFriend) {
    return 0;
}

FUWorksSteamID UUWorksInterfaceCoreFriends::GetFriendByIndex(int32 Friend, TArray<EUWorksFriendFlags> FriendFlags) {
    return FUWorksSteamID{};
}

void UUWorksInterfaceCoreFriends::GetFollowerCountMinimal(const FGetFollowerCountMinimalDelegate& Completed, FUWorksSteamID SteamID) {
}

UUWorksRequestCoreGetFollowerCount* UUWorksInterfaceCoreFriends::GetFollowerCount() {
    return NULL;
}

int32 UUWorksInterfaceCoreFriends::GetCoplayFriendCount() {
    return 0;
}

FUWorksSteamID UUWorksInterfaceCoreFriends::GetCoplayFriend(int32 CoplayFriend) {
    return FUWorksSteamID{};
}

FString UUWorksInterfaceCoreFriends::GetClanTag(FUWorksSteamID SteamIDClan) {
    return TEXT("");
}

FUWorksSteamID UUWorksInterfaceCoreFriends::GetClanOwner(FUWorksSteamID SteamIDClan) {
    return FUWorksSteamID{};
}

int32 UUWorksInterfaceCoreFriends::GetClanOfficerCount(FUWorksSteamID SteamIDClan) {
    return 0;
}

FUWorksSteamID UUWorksInterfaceCoreFriends::GetClanOfficerByIndex(FUWorksSteamID SteamIDClan, int32 Officer) {
    return FUWorksSteamID{};
}

FString UUWorksInterfaceCoreFriends::GetClanName(FUWorksSteamID SteamIDClan) {
    return TEXT("");
}

int32 UUWorksInterfaceCoreFriends::GetClanCount() {
    return 0;
}

int32 UUWorksInterfaceCoreFriends::GetClanChatMessage(FUWorksSteamID SteamIDClanChat, int32 MessageID, FString& Text, int32 TextMax, EUWorksChatEntryType& ChatEntryType, FUWorksSteamID& SteamIDChatter) {
    return 0;
}

int32 UUWorksInterfaceCoreFriends::GetClanChatMemberCount(FUWorksSteamID SteamIDClan) {
    return 0;
}

FUWorksSteamID UUWorksInterfaceCoreFriends::GetClanByIndex(int32 Clan) {
    return FUWorksSteamID{};
}

bool UUWorksInterfaceCoreFriends::GetClanActivityCounts(FUWorksSteamID SteamIDClan, int32& Online, int32& InGame, int32& Chatting) {
    return false;
}

FUWorksSteamID UUWorksInterfaceCoreFriends::GetChatMemberByIndex(FUWorksSteamID SteamIDClan, int32 User) {
    return FUWorksSteamID{};
}

void UUWorksInterfaceCoreFriends::EnumerateFollowingListMinimal(const FEnumerateFollowingListMinimalDelegate& Completed, int32 StartIndex) {
}

UUWorksRequestCoreEnumerateFollowingList* UUWorksInterfaceCoreFriends::EnumerateFollowingList() {
    return NULL;
}

void UUWorksInterfaceCoreFriends::DownloadClanActivityCountsMinimal(const FDownloadClanActivityCountsMinimalDelegate& Completed, TArray<FUWorksSteamID> SteamIDClans) {
}

UUWorksRequestCoreDownloadClanActivityCounts* UUWorksInterfaceCoreFriends::DownloadClanActivityCounts() {
    return NULL;
}

bool UUWorksInterfaceCoreFriends::CloseClanChatWindowInSteam(FUWorksSteamID SteamIDClanChat) {
    return false;
}

void UUWorksInterfaceCoreFriends::ClearRichPresence() {
}

void UUWorksInterfaceCoreFriends::ActivateGameOverlayToWebPage(const FString& URL) {
}

void UUWorksInterfaceCoreFriends::ActivateGameOverlayToUser(EUWorksOverlaySpecific Dialog, FUWorksSteamID SteamID) {
}

void UUWorksInterfaceCoreFriends::ActivateGameOverlayToStore(int32 AppID, EUWorksOverlayToStoreFlag Flag) {
}

void UUWorksInterfaceCoreFriends::ActivateGameOverlayInviteDialog(FUWorksSteamID SteamIDLobby) {
}

void UUWorksInterfaceCoreFriends::ActivateGameOverlay(EUWorksOverlayGeneric Dialog) {
}

UUWorksInterfaceCoreFriends::UUWorksInterfaceCoreFriends() {
}

