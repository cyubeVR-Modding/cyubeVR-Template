#include "UWorksInterfaceWebUser.h"

class UUWorksRequestWebResolveVanityURL;
class UUWorksRequestWebGetUserGroupList;
class UUWorksRequestWebGetPublisherAppOwnershipChanges;
class UUWorksRequestWebGrantPackage;
class UUWorksRequestWebGetPublisherAppOwnership;
class UUWorksRequestWebGetPlayerSummaries;
class UUWorksRequestWebGetPlayerBans;
class UUWorksRequestWebGetFriendList;
class UUWorksRequestWebGetAppPriceInfo;
class UUWorksRequestWebCheckAppOwnership;

void UUWorksInterfaceWebUser::ResolveVanityURLMinimal(const FString& Key, const FString& VanityURL, uint8 URLType, const FResolveVanityURLMinimalDelegate& Delegate) {
}

UUWorksRequestWebResolveVanityURL* UUWorksInterfaceWebUser::ResolveVanityURL() {
    return NULL;
}

void UUWorksInterfaceWebUser::GrantPackageMinimal(const FString& Key, FUWorksSteamID SteamID, int32 PackageID, const FString& IPAddress, const FString& ThirdPartyKey, int32 ThirdPartyAppID, const FGrantPackageMinimalDelegate& Delegate) {
}

UUWorksRequestWebGrantPackage* UUWorksInterfaceWebUser::GrantPackage() {
    return NULL;
}

void UUWorksInterfaceWebUser::GetUserGroupListMinimal(const FString& Key, FUWorksSteamID SteamID, const FGetUserGroupListMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetUserGroupList* UUWorksInterfaceWebUser::GetUserGroupList() {
    return NULL;
}

void UUWorksInterfaceWebUser::GetPublisherAppOwnershipMinimal(const FString& Key, FUWorksSteamID SteamID, const FGetPublisherAppOwnershipMinimalDelegate& Delegate) {
}

void UUWorksInterfaceWebUser::GetPublisherAppOwnershipChangesMinimal(const FString& Key, const FString& PackageRowVersion, const FString& CDKeyRowVersion, const FGetPublisherAppOwnershipChangesMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetPublisherAppOwnershipChanges* UUWorksInterfaceWebUser::GetPublisherAppOwnershipChanges() {
    return NULL;
}

UUWorksRequestWebGetPublisherAppOwnership* UUWorksInterfaceWebUser::GetPublisherAppOwnership() {
    return NULL;
}

void UUWorksInterfaceWebUser::GetPlayerSummariesMinimal(const FString& Key, const FString& SteamIDs, const FGetPlayerSummariesMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetPlayerSummaries* UUWorksInterfaceWebUser::GetPlayerSummaries() {
    return NULL;
}

void UUWorksInterfaceWebUser::GetPlayerBansMinimal(const FString& Key, const FString& SteamIDs, const FGetPlayerBansMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetPlayerBans* UUWorksInterfaceWebUser::GetPlayerBans() {
    return NULL;
}

void UUWorksInterfaceWebUser::GetFriendListMinimal(const FString& Key, FUWorksSteamID SteamID, const FString& Relationship, const FGetFriendListMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetFriendList* UUWorksInterfaceWebUser::GetFriendList() {
    return NULL;
}

void UUWorksInterfaceWebUser::GetAppPriceInfoMinimal(const FString& Key, FUWorksSteamID SteamID, const FString& AppIDs, const FGetAppPriceInfoMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetAppPriceInfo* UUWorksInterfaceWebUser::GetAppPriceInfo() {
    return NULL;
}

void UUWorksInterfaceWebUser::CheckAppOwnershipMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FCheckAppOwnershipMinimalDelegate& Delegate) {
}

UUWorksRequestWebCheckAppOwnership* UUWorksInterfaceWebUser::CheckAppOwnership() {
    return NULL;
}

UUWorksInterfaceWebUser::UUWorksInterfaceWebUser() {
}

