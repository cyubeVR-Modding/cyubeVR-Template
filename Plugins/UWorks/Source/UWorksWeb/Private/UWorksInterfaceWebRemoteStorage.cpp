#include "UWorksInterfaceWebRemoteStorage.h"

class UUWorksRequestWebEnumerateUserSubscribedFiles;
class UUWorksRequestWebUnsubscribePublishedFile;
class UUWorksRequestWebSubscribePublishedFile;
class UUWorksRequestWebSetUGCUsedByGC;
class UUWorksRequestWebGetUGCFileDetails;
class UUWorksRequestWebGetPublishedFileDetails;
class UUWorksRequestWebGetCollectionDetails;
class UUWorksRequestWebEnumerateUserPublishedFiles;

void UUWorksInterfaceWebRemoteStorage::UnsubscribePublishedFileMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID, const FUnsubscribePublishedFileMinimalDelegate& Delegate) {
}

UUWorksRequestWebUnsubscribePublishedFile* UUWorksInterfaceWebRemoteStorage::UnsubscribePublishedFile() {
    return NULL;
}

void UUWorksInterfaceWebRemoteStorage::SubscribePublishedFileMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID, const FSubscribePublishedFileMinimalDelegate& Delegate) {
}

UUWorksRequestWebSubscribePublishedFile* UUWorksInterfaceWebRemoteStorage::SubscribePublishedFile() {
    return NULL;
}

void UUWorksInterfaceWebRemoteStorage::SetUGCUsedByGCMinimal(const FString& Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, bool bUsed, const FSetUGCUsedByGCMinimalDelegate& Delegate) {
}

UUWorksRequestWebSetUGCUsedByGC* UUWorksInterfaceWebRemoteStorage::SetUGCUsedByGC() {
    return NULL;
}

void UUWorksInterfaceWebRemoteStorage::GetUGCFileDetailsMinimal(const FString& Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, const FGetUGCFileDetailsMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetUGCFileDetails* UUWorksInterfaceWebRemoteStorage::GetUGCFileDetails() {
    return NULL;
}

void UUWorksInterfaceWebRemoteStorage::GetPublishedFileDetailsMinimal(int32 ItemCount, TArray<int32> PublishedFileIDs, const FGetPublishedFileDetailsMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetPublishedFileDetails* UUWorksInterfaceWebRemoteStorage::GetPublishedFileDetails() {
    return NULL;
}

void UUWorksInterfaceWebRemoteStorage::GetCollectionDetailsMinimal(int32 CollectionCount, TArray<int32> PublishedFileIDs, const FGetCollectionDetailsMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetCollectionDetails* UUWorksInterfaceWebRemoteStorage::GetCollectionDetails() {
    return NULL;
}

void UUWorksInterfaceWebRemoteStorage::EnumerateUserSubscribedFilesMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 ListType, const FEnumerateUserSubscribedFilesMinimalDelegate& Delegate) {
}

UUWorksRequestWebEnumerateUserSubscribedFiles* UUWorksInterfaceWebRemoteStorage::EnumerateUserSubscribedFiles() {
    return NULL;
}

void UUWorksInterfaceWebRemoteStorage::EnumerateUserPublishedFilesMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FEnumerateUserPublishedFilesMinimalDelegate& Delegate) {
}

UUWorksRequestWebEnumerateUserPublishedFiles* UUWorksInterfaceWebRemoteStorage::EnumerateUserPublishedFiles() {
    return NULL;
}

UUWorksInterfaceWebRemoteStorage::UUWorksInterfaceWebRemoteStorage() {
}

