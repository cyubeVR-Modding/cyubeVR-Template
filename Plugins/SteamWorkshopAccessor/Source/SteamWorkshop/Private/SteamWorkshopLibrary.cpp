#include "SteamWorkshopLibrary.h"

USteamWorkshopLibrary::USteamWorkshopLibrary() {
}

int32 USteamWorkshopLibrary::SteamWorkshop_UpdateTitleLengthMin_FromConfig() {
    return 0;
}

int32 USteamWorkshopLibrary::SteamWorkshop_UpdateDescriptionLengthMin_FromConfig() {
    return 0;
}

void USteamWorkshopLibrary::SteamWorkshop_SuspendResumeDownloads(const bool bDoSuspend) {
}

EResultBP USteamWorkshopLibrary::SteamWorkshop_SetServerDownloadDirectory(const FSteamDepotId& serverDepotId, const FString& Directory) {
    return EResultBP::None;
}

void USteamWorkshopLibrary::SteamWorkshop_GetSubscribedItems(const int32 maxNumItemsToReturn, TArray<FSteamUGCItemId>& outItems) {
}

int32 USteamWorkshopLibrary::SteamWorkshop_GetNumSubscribedItems() {
    return 0;
}

void USteamWorkshopLibrary::SteamWorkshop_GetItemUpdateProgress(const FSteamUGCUpdateHandle& updateHandle, FWorkshopItemUpdateInfo& Info) {
}

bool USteamWorkshopLibrary::SteamWorkshop_GetItemStateFlag(const FSteamUGCItemId& ItemId, const EItemStateBP flagToQuery) {
    return false;
}

TArray<EItemStateBP> USteamWorkshopLibrary::SteamWorkshop_GetItemState(const FSteamUGCItemId& ItemId) {
    return TArray<EItemStateBP>();
}

bool USteamWorkshopLibrary::SteamWorkshop_GetItemQueryStatistic(const FSteamUGCQueryHandle& queryHandle, const int32 ItemIndex, const TEnumAsByte<EItemStatisticBP> statToRetrieve, FUInt64& StatValue) {
    return false;
}

EResultBP USteamWorkshopLibrary::SteamWorkshop_GetItemInstallInfo(const FSteamUGCItemId& ItemId, FSteamWorkshopItemInstallInfo& Info) {
    return EResultBP::None;
}

EResultBP USteamWorkshopLibrary::SteamWorkshop_GetItemDownloadInfo(const FSteamUGCItemId& ItemId, FWorkshopItemDownloadInfo& downloadInfo) {
    return EResultBP::None;
}

EResultBP USteamWorkshopLibrary::SteamWorkshop_DownloadItem(const FSteamUGCItemId& ItemId, bool bHighPriority) {
    return EResultBP::None;
}

void USteamWorkshopLibrary::SteamWorkshop_ActivateGameOverlayToWorkshopItem(const FSteamUGCItemId& ItemId) {
}

bool USteamWorkshopLibrary::SteamDelegate_OnWorkshopItemDownloaded_Unbind(FSteamDelegateOnWorkshopItemDownloadedDyn delegateToCall) {
    return false;
}

bool USteamWorkshopLibrary::SteamDelegate_OnWorkshopItemDownloaded_Bind(FSteamDelegateOnWorkshopItemDownloadedDyn delegateToCall) {
    return false;
}

void USteamWorkshopLibrary::PrintWorkshopItemDetails(const FSteamWorkshopItemDetails& itemDetails, float DisplayTime, FLinearColor Color, bool bPrintToScreen, bool bPrintToLog) {
}

FSteamWorkshopUpdateDetails USteamWorkshopLibrary::MakeSteamWorkshopUpdateDetails(const FString& Title, const FString& Description, const FString& updateNotice, const FString& MetaData, const TArray<FString>& tags, const TArray<FSteamKeyValuePair>& keyValueTags, const FString& contentDirectory, const FString& previewImage, const TArray<FString>& additionalImages, const TArray<FString>& youtubeVideoIDs, const TArray<FString>& keysOfKeyValueTagsToRemove, const TArray<int32>& indexOfPreviewToRemove, const ESteamSupportedLanguages updateLanguage, const ESteamItemVisibility Visibility) {
    return FSteamWorkshopUpdateDetails{};
}

FSteamUGCQueryParameterTagsAllUserDetails USteamWorkshopLibrary::MakeSteamUGCQueryParameterTagsAllUserDetails(const TArray<FSteamKeyValuePair>& requiredKeyValueTags) {
    return FSteamUGCQueryParameterTagsAllUserDetails{};
}

FSteamUGCQueryParameterTagsAllUser USteamWorkshopLibrary::MakeSteamUGCQueryParameterTagsAllUser(const TArray<FString>& requiredTags, const TArray<FString>& excludedTags, const TArray<FSteamKeyValuePair>& requiredKeyValueTags) {
    return FSteamUGCQueryParameterTagsAllUser{};
}


