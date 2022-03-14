#include "UWorksInterfaceCoreUGC.h"

class UUWorksRequestCoreRemoveItemFromFavorites;
class UUWorksRequestCoreSubmitItemUpdate;
class UUWorksRequestCoreUnsubscribeItem;
class UUWorksRequestCoreSendQueryUGCRequest;
class UUWorksRequestCoreSubscribeItem;
class UUWorksRequestCoreGetUserItemVote;
class UUWorksRequestCoreStopPlaytimeTrackingForAllItems;
class UUWorksRequestCoreStopPlaytimeTracking;
class UUWorksRequestCoreStartPlaytimeTracking;
class UUWorksRequestCoreSetUserItemVote;
class UUWorksInterfaceCoreUGC;
class UUWorksRequestCoreCreateItem;
class UUWorksRequestCoreAddItemToFavorites;

bool UUWorksInterfaceCoreUGC::UpdateItemPreviewVideo(FUWorksUGCUpdateHandle Handle, int32 Index, const FString& PreviewVideo) {
    return false;
}

bool UUWorksInterfaceCoreUGC::UpdateItemPreviewFile(FUWorksUGCUpdateHandle Handle, int32 Index, const FString& PreviewFile) {
    return false;
}

void UUWorksInterfaceCoreUGC::UnsubscribeItemMinimal(const FUnsubscribeItemMinimalDelegate& Completed, FUWorksPublishedFileID PublishedFileID) {
}

UUWorksRequestCoreUnsubscribeItem* UUWorksInterfaceCoreUGC::UnsubscribeItem() {
    return NULL;
}

void UUWorksInterfaceCoreUGC::SuspendDownloads(bool bSuspend) {
}

void UUWorksInterfaceCoreUGC::SubscribeItemMinimal(const FSubscribeItemMinimalDelegate& Completed, FUWorksPublishedFileID PublishedFileID) {
}

UUWorksRequestCoreSubscribeItem* UUWorksInterfaceCoreUGC::SubscribeItem() {
    return NULL;
}

void UUWorksInterfaceCoreUGC::SubmitItemUpdateMinimal(const FSubmitItemUpdateMinimalDelegate& Completed, FUWorksUGCUpdateHandle UGCUpdateHandle, const FString& ChangeNote) {
}

UUWorksRequestCoreSubmitItemUpdate* UUWorksInterfaceCoreUGC::SubmitItemUpdate() {
    return NULL;
}

void UUWorksInterfaceCoreUGC::StopPlaytimeTrackingMinimal(const FStopPlaytimeTrackingMinimalDelegate& Completed, TArray<FUWorksPublishedFileID> PublishedFileIDs) {
}

void UUWorksInterfaceCoreUGC::StopPlaytimeTrackingForAllItemsMinimal(const FStopPlaytimeTrackingForAllItemsMinimalDelegate& Completed) {
}

UUWorksRequestCoreStopPlaytimeTrackingForAllItems* UUWorksInterfaceCoreUGC::StopPlaytimeTrackingForAllItems() {
    return NULL;
}

UUWorksRequestCoreStopPlaytimeTracking* UUWorksInterfaceCoreUGC::StopPlaytimeTracking() {
    return NULL;
}

void UUWorksInterfaceCoreUGC::StartPlaytimeTrackingMinimal(const FStartPlaytimeTrackingMinimalDelegate& Completed, TArray<FUWorksPublishedFileID> PublishedFileID) {
}

UUWorksRequestCoreStartPlaytimeTracking* UUWorksInterfaceCoreUGC::StartPlaytimeTracking() {
    return NULL;
}

FUWorksUGCUpdateHandle UUWorksInterfaceCoreUGC::StartItemUpdate(int32 ConsumerAppID, FUWorksPublishedFileID PublishedFileID) {
    return FUWorksUGCUpdateHandle{};
}

void UUWorksInterfaceCoreUGC::SetUserItemVoteMinimal(const FSetUserItemVoteMinimalDelegate& Completed, FUWorksPublishedFileID PublishedFileID, bool bVoteUp) {
}

UUWorksRequestCoreSetUserItemVote* UUWorksInterfaceCoreUGC::SetUserItemVote() {
    return NULL;
}

bool UUWorksInterfaceCoreUGC::SetSearchText(FUWorksUGCQueryHandle Handle, const FString& searchText) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetReturnTotalOnly(FUWorksUGCQueryHandle Handle, bool bReturnTotalOnly) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetReturnOnlyIDs(FUWorksUGCQueryHandle Handle, bool bReturnOnlyIDs) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetReturnMetadata(FUWorksUGCQueryHandle Handle, bool bReturnMetaData) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetReturnLongDescription(FUWorksUGCQueryHandle Handle, bool bReturnLongDescription) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetReturnKeyValueTags(FUWorksUGCQueryHandle Handle, bool bReturnKeyValueTags) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetReturnChildren(FUWorksUGCQueryHandle Handle, bool bReturnChildren) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetReturnAdditionalPreviews(FUWorksUGCQueryHandle Handle, bool bReturnAdditionalPreviews) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetRankedByTrendDays(FUWorksUGCQueryHandle Handle, int32 Days) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetMatchAnyTag(FUWorksUGCQueryHandle Handle, bool bMatchAnyTag) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetLanguage(FUWorksUGCQueryHandle Handle, const FString& Language) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetItemVisibility(FUWorksUGCUpdateHandle Handle, EUWorksRemoteStoragePublishedFileVisibility Visibility) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetItemUpdateLanguage(FUWorksUGCUpdateHandle Handle, const FString& Language) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetItemTitle(FUWorksUGCUpdateHandle Handle, const FString& Title) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetItemTags(FUWorksUGCUpdateHandle Handle, TArray<FString> tags) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetItemPreview(FUWorksUGCUpdateHandle Handle, const FString& PreviewFile) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetItemMetadata(FUWorksUGCUpdateHandle Handle, const FString& MetaData) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetItemDescription(FUWorksUGCUpdateHandle Handle, const FString& Description) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetItemContent(FUWorksUGCUpdateHandle Handle, const FString& ContentFolder) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetCloudFileNameFilter(FUWorksUGCQueryHandle Handle, const FString& MatchCloudFileName) {
    return false;
}

bool UUWorksInterfaceCoreUGC::SetAllowCachedResponse(FUWorksUGCQueryHandle Handle, int32 MaxAgeSeconds) {
    return false;
}

void UUWorksInterfaceCoreUGC::SendQueryUGCRequestMinimal(const FSendQueryUGCRequestMinimalDelegate& Completed, FUWorksUGCQueryHandle UGCQueryHandle) {
}

UUWorksRequestCoreSendQueryUGCRequest* UUWorksInterfaceCoreUGC::SendQueryUGCRequest() {
    return NULL;
}

bool UUWorksInterfaceCoreUGC::RemoveItemPreview(FUWorksUGCUpdateHandle Handle, int32 Index) {
    return false;
}

bool UUWorksInterfaceCoreUGC::RemoveItemKeyValueTags(FUWorksUGCUpdateHandle Handle, const FString& Key) {
    return false;
}

void UUWorksInterfaceCoreUGC::RemoveItemFromFavoritesMinimal(const FRemoveItemFromFavoritesMinimalDelegate& Completed, int32 AppID, FUWorksPublishedFileID PublishedFileID) {
}

UUWorksRequestCoreRemoveItemFromFavorites* UUWorksInterfaceCoreUGC::RemoveItemFromFavorites() {
    return NULL;
}

bool UUWorksInterfaceCoreUGC::ReleaseQueryUGCRequest(FUWorksUGCQueryHandle Handle) {
    return false;
}

void UUWorksInterfaceCoreUGC::GetUserItemVoteMinimal(const FGetUserItemVoteMinimalDelegate& Completed, FUWorksPublishedFileID PublishedFileID) {
}

UUWorksRequestCoreGetUserItemVote* UUWorksInterfaceCoreUGC::GetUserItemVote() {
    return NULL;
}

UUWorksInterfaceCoreUGC* UUWorksInterfaceCoreUGC::GetUGC() {
    return NULL;
}

int32 UUWorksInterfaceCoreUGC::GetSubscribedItems(TArray<FUWorksPublishedFileID>& PublishedFileIDs, int32 MaxEntries) {
    return 0;
}

bool UUWorksInterfaceCoreUGC::GetQueryUGCStatistic(FUWorksUGCQueryHandle Handle, int32 Index, EUWorksItemStatistic StatType, FString& StatValue) {
    return false;
}

bool UUWorksInterfaceCoreUGC::GetQueryUGCResult(FUWorksUGCQueryHandle Handle, int32 Index, FUWorksSteamUGCDetails& Details) {
    return false;
}

bool UUWorksInterfaceCoreUGC::GetQueryUGCPreviewURL(FUWorksUGCQueryHandle Handle, int32 Index, FString& URL, int32 URLMaxLength) {
    return false;
}

int32 UUWorksInterfaceCoreUGC::GetQueryUGCNumKeyValueTags(FUWorksUGCQueryHandle Handle, int32 Index) {
    return 0;
}

int32 UUWorksInterfaceCoreUGC::GetQueryUGCNumAdditionalPreviews(FUWorksUGCQueryHandle Handle, int32 Index) {
    return 0;
}

bool UUWorksInterfaceCoreUGC::GetQueryUGCMetadata(FUWorksUGCQueryHandle Handle, int32 Index, FString& MetaData, int32 MetadataMaxLength) {
    return false;
}

bool UUWorksInterfaceCoreUGC::GetQueryUGCKeyValueTag(FUWorksUGCQueryHandle Handle, int32 Index, int32 KeyValueTagIndex, FString& Key, int32 KeyMaxLength, FString& Value, int32 ValueMaxLength) {
    return false;
}

bool UUWorksInterfaceCoreUGC::GetQueryUGCChildren(FUWorksUGCQueryHandle Handle, int32 Index, TArray<FUWorksPublishedFileID>& PublishedFileIDs, int32 MaxEntries) {
    return false;
}

bool UUWorksInterfaceCoreUGC::GetQueryUGCAdditionalPreview(FUWorksUGCQueryHandle Handle, int32 Index, int32 PreviewIndex, FString& urlOrVideoId, int32 URLOrVideoIDMaxLength, FString& originalFileName, int32 OriginalFileNameMaxLength, EUWorksItemPreviewType& PreviewType) {
    return false;
}

int32 UUWorksInterfaceCoreUGC::GetNumSubscribedItems() {
    return 0;
}

EUWorksItemUpdateStatus UUWorksInterfaceCoreUGC::GetItemUpdateProgress(FUWorksUGCUpdateHandle Handle, FString& BytesProcessed, FString& bytesTotal) {
    return EUWorksItemUpdateStatus::Invalid;
}

int32 UUWorksInterfaceCoreUGC::GetItemState(FUWorksPublishedFileID PublishedFileID) {
    return 0;
}

bool UUWorksInterfaceCoreUGC::GetItemInstallInfo(FUWorksPublishedFileID PublishedFileID, FString& SizeOnDisk, FString& Path, int32 PathMaxLength, int32& Timestamp) {
    return false;
}

bool UUWorksInterfaceCoreUGC::GetItemDownloadInfo(FUWorksPublishedFileID PublishedFileID, FString& BytesDownloaded, FString& bytesTotal) {
    return false;
}

bool UUWorksInterfaceCoreUGC::DownloadItem(FUWorksPublishedFileID PublishedFileID, bool bHighPriority) {
    return false;
}

FUWorksUGCQueryHandle UUWorksInterfaceCoreUGC::CreateQueryUserUGCRequest(FUWorksSteamID SteamID, EUWorksUserUGCList ListType, EUWorksUGCMatchingUGCType MatchingUGCType, EUWorksUserUGCListSortOrder sortOrder, int32 CreatorAppID, int32 ConsumerAppID, int32 Page) {
    return FUWorksUGCQueryHandle{};
}

FUWorksUGCQueryHandle UUWorksInterfaceCoreUGC::CreateQueryUGCDetailsRequest(TArray<FUWorksPublishedFileID> PublishedFileIDs, int32 NumPublishedFileIDs) {
    return FUWorksUGCQueryHandle{};
}

FUWorksUGCQueryHandle UUWorksInterfaceCoreUGC::CreateQueryAllUGCRequest(EUWorksUGCQuery queryType, EUWorksUGCMatchingUGCType MatchingUGCTypeFileType, int32 CreatorAppID, int32 ConsumerAppID, int32 Page) {
    return FUWorksUGCQueryHandle{};
}

void UUWorksInterfaceCoreUGC::CreateItemMinimal(const FCreateItemMinimalDelegate& Completed, int32 ConsumerAppID, EUWorksWorkshopFileType fileType) {
}

UUWorksRequestCoreCreateItem* UUWorksInterfaceCoreUGC::CreateItem() {
    return NULL;
}

bool UUWorksInterfaceCoreUGC::BInitWorkshopForGameServer(int32 WorkshopDepotID, const FString& Folder) {
    return false;
}

bool UUWorksInterfaceCoreUGC::AddRequiredTag(FUWorksUGCQueryHandle Handle, const FString& TagName) {
    return false;
}

bool UUWorksInterfaceCoreUGC::AddRequiredKeyValueTag(FUWorksUGCQueryHandle Handle, const FString& Key, const FString& Value) {
    return false;
}

void UUWorksInterfaceCoreUGC::AddItemToFavoritesMinimal(const FAddItemToFavoritesMinimalDelegate& Completed, int32 AppID, FUWorksPublishedFileID PublishedFileID) {
}

UUWorksRequestCoreAddItemToFavorites* UUWorksInterfaceCoreUGC::AddItemToFavorites() {
    return NULL;
}

bool UUWorksInterfaceCoreUGC::AddItemPreviewVideo(FUWorksUGCUpdateHandle Handle, const FString& VideoID) {
    return false;
}

bool UUWorksInterfaceCoreUGC::AddItemPreviewFile(FUWorksUGCUpdateHandle Handle, const FString& PreviewFile, EUWorksItemPreviewType Type) {
    return false;
}

bool UUWorksInterfaceCoreUGC::AddItemKeyValueTag(FUWorksUGCUpdateHandle Handle, const FString& Key, const FString& Value) {
    return false;
}

bool UUWorksInterfaceCoreUGC::AddExcludedTag(FUWorksUGCQueryHandle Handle, const FString& TagName) {
    return false;
}

UUWorksInterfaceCoreUGC::UUWorksInterfaceCoreUGC() {
}

