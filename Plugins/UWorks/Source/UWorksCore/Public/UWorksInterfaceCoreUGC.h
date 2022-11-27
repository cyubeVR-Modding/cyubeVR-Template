#pragma once
#include "CoreMinimal.h"
#include "EUWorksItemStatistic.h"
#include "UWorksInterfaceCore.h"
#include "UWorksPublishedFileID.h"
#include "DownloadItemResultDelegateDelegate.h"
#include "ItemInstalledDelegateDelegate.h"
#include "UWorksUGCUpdateHandle.h"
#include "UnsubscribeItemMinimalDelegateDelegate.h"
#include "SubscribeItemMinimalDelegateDelegate.h"
#include "SubmitItemUpdateMinimalDelegateDelegate.h"
#include "StopPlaytimeTrackingMinimalDelegateDelegate.h"
#include "StopPlaytimeTrackingForAllItemsMinimalDelegateDelegate.h"
#include "StartPlaytimeTrackingMinimalDelegateDelegate.h"
#include "SetUserItemVoteMinimalDelegateDelegate.h"
#include "UWorksUGCQueryHandle.h"
#include "EUWorksRemoteStoragePublishedFileVisibility.h"
#include "SendQueryUGCRequestMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "RemoveItemFromFavoritesMinimalDelegateDelegate.h"
#include "GetUserItemVoteMinimalDelegateDelegate.h"
#include "EUWorksUGCQuery.h"
#include "EUWorksUGCMatchingUGCType.h"
#include "UWorksSteamUGCDetails.h"
#include "EUWorksItemPreviewType.h"
#include "EUWorksItemUpdateStatus.h"
#include "EUWorksUserUGCList.h"
#include "EUWorksUserUGCListSortOrder.h"
#include "CreateItemMinimalDelegateDelegate.h"
#include "EUWorksWorkshopFileType.h"
#include "AddItemToFavoritesMinimalDelegateDelegate.h"
#include "UWorksInterfaceCoreUGC.generated.h"

class UUWorksRequestCoreUnsubscribeItem;
class UUWorksRequestCoreSubscribeItem;
class UUWorksRequestCoreStopPlaytimeTrackingForAllItems;
class UUWorksRequestCoreSubmitItemUpdate;
class UUWorksRequestCoreSetUserItemVote;
class UUWorksRequestCoreCreateItem;
class UUWorksRequestCoreStopPlaytimeTracking;
class UUWorksRequestCoreStartPlaytimeTracking;
class UUWorksRequestCoreAddItemToFavorites;
class UUWorksRequestCoreSendQueryUGCRequest;
class UUWorksRequestCoreRemoveItemFromFavorites;
class UUWorksRequestCoreGetUserItemVote;
class UUWorksInterfaceCoreUGC;

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksInterfaceCoreUGC : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemInstalledDelegate ItemInstalled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadItemResultDelegate DownloadItemResult;
    
    UUWorksInterfaceCoreUGC();
    UFUNCTION(BlueprintCallable)
    bool UpdateItemPreviewVideo(FUWorksUGCUpdateHandle Handle, int32 Index, const FString& PreviewVideo);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateItemPreviewFile(FUWorksUGCUpdateHandle Handle, int32 Index, const FString& PreviewFile);
    
    UFUNCTION(BlueprintCallable)
    void UnsubscribeItemMinimal(const FUnsubscribeItemMinimalDelegate& Completed, FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreUnsubscribeItem* UnsubscribeItem();
    
    UFUNCTION(BlueprintCallable)
    void SuspendDownloads(bool bSuspend);
    
    UFUNCTION(BlueprintCallable)
    void SubscribeItemMinimal(const FSubscribeItemMinimalDelegate& Completed, FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreSubscribeItem* SubscribeItem();
    
    UFUNCTION(BlueprintCallable)
    void SubmitItemUpdateMinimal(const FSubmitItemUpdateMinimalDelegate& Completed, FUWorksUGCUpdateHandle UGCUpdateHandle, const FString& ChangeNote);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreSubmitItemUpdate* SubmitItemUpdate();
    
    UFUNCTION(BlueprintCallable)
    void StopPlaytimeTrackingMinimal(const FStopPlaytimeTrackingMinimalDelegate& Completed, TArray<FUWorksPublishedFileID> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void StopPlaytimeTrackingForAllItemsMinimal(const FStopPlaytimeTrackingForAllItemsMinimalDelegate& Completed);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItems();
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreStopPlaytimeTracking* StopPlaytimeTracking();
    
    UFUNCTION(BlueprintCallable)
    void StartPlaytimeTrackingMinimal(const FStartPlaytimeTrackingMinimalDelegate& Completed, TArray<FUWorksPublishedFileID> PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreStartPlaytimeTracking* StartPlaytimeTracking();
    
    UFUNCTION(BlueprintCallable)
    FUWorksUGCUpdateHandle StartItemUpdate(int32 ConsumerAppID, FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void SetUserItemVoteMinimal(const FSetUserItemVoteMinimalDelegate& Completed, FUWorksPublishedFileID PublishedFileID, bool bVoteUp);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreSetUserItemVote* SetUserItemVote();
    
    UFUNCTION(BlueprintCallable)
    bool SetSearchText(FUWorksUGCQueryHandle Handle, const FString& searchText);
    
    UFUNCTION(BlueprintCallable)
    bool SetReturnTotalOnly(FUWorksUGCQueryHandle Handle, bool bReturnTotalOnly);
    
    UFUNCTION(BlueprintCallable)
    bool SetReturnOnlyIDs(FUWorksUGCQueryHandle Handle, bool bReturnOnlyIDs);
    
    UFUNCTION(BlueprintCallable)
    bool SetReturnMetadata(FUWorksUGCQueryHandle Handle, bool bReturnMetaData);
    
    UFUNCTION(BlueprintCallable)
    bool SetReturnLongDescription(FUWorksUGCQueryHandle Handle, bool bReturnLongDescription);
    
    UFUNCTION(BlueprintCallable)
    bool SetReturnKeyValueTags(FUWorksUGCQueryHandle Handle, bool bReturnKeyValueTags);
    
    UFUNCTION(BlueprintCallable)
    bool SetReturnChildren(FUWorksUGCQueryHandle Handle, bool bReturnChildren);
    
    UFUNCTION(BlueprintCallable)
    bool SetReturnAdditionalPreviews(FUWorksUGCQueryHandle Handle, bool bReturnAdditionalPreviews);
    
    UFUNCTION(BlueprintCallable)
    bool SetRankedByTrendDays(FUWorksUGCQueryHandle Handle, int32 Days);
    
    UFUNCTION(BlueprintCallable)
    bool SetMatchAnyTag(FUWorksUGCQueryHandle Handle, bool bMatchAnyTag);
    
    UFUNCTION(BlueprintCallable)
    bool SetLanguage(FUWorksUGCQueryHandle Handle, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemVisibility(FUWorksUGCUpdateHandle Handle, EUWorksRemoteStoragePublishedFileVisibility Visibility);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemUpdateLanguage(FUWorksUGCUpdateHandle Handle, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemTitle(FUWorksUGCUpdateHandle Handle, const FString& Title);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemTags(FUWorksUGCUpdateHandle Handle, TArray<FString> tags);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemPreview(FUWorksUGCUpdateHandle Handle, const FString& PreviewFile);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemMetadata(FUWorksUGCUpdateHandle Handle, const FString& MetaData);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemDescription(FUWorksUGCUpdateHandle Handle, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemContent(FUWorksUGCUpdateHandle Handle, const FString& ContentFolder);
    
    UFUNCTION(BlueprintCallable)
    bool SetCloudFileNameFilter(FUWorksUGCQueryHandle Handle, const FString& MatchCloudFileName);
    
    UFUNCTION(BlueprintCallable)
    bool SetAllowCachedResponse(FUWorksUGCQueryHandle Handle, int32 MaxAgeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SendQueryUGCRequestMinimal(const FSendQueryUGCRequestMinimalDelegate& Completed, FUWorksUGCQueryHandle UGCQueryHandle);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreSendQueryUGCRequest* SendQueryUGCRequest();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveItemPreview(FUWorksUGCUpdateHandle Handle, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveItemKeyValueTags(FUWorksUGCUpdateHandle Handle, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemFromFavoritesMinimal(const FRemoveItemFromFavoritesMinimalDelegate& Completed, int32 AppID, FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreRemoveItemFromFavorites* RemoveItemFromFavorites();
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseQueryUGCRequest(FUWorksUGCQueryHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void GetUserItemVoteMinimal(const FGetUserItemVoteMinimalDelegate& Completed, FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreGetUserItemVote* GetUserItemVote();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreUGC* GetUGC();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSubscribedItems(TArray<FUWorksPublishedFileID>& PublishedFileIDs, int32 MaxEntries);
    
    UFUNCTION(BlueprintCallable)
    bool GetQueryUGCStatistic(FUWorksUGCQueryHandle Handle, int32 Index, EUWorksItemStatistic StatType, FString& StatValue);
    
    UFUNCTION(BlueprintCallable)
    bool GetQueryUGCResult(FUWorksUGCQueryHandle Handle, int32 Index, FUWorksSteamUGCDetails& Details);
    
    UFUNCTION(BlueprintCallable)
    bool GetQueryUGCPreviewURL(FUWorksUGCQueryHandle Handle, int32 Index, FString& URL, int32 URLMaxLength);
    
    UFUNCTION(BlueprintCallable)
    int32 GetQueryUGCNumKeyValueTags(FUWorksUGCQueryHandle Handle, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetQueryUGCNumAdditionalPreviews(FUWorksUGCQueryHandle Handle, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool GetQueryUGCMetadata(FUWorksUGCQueryHandle Handle, int32 Index, FString& MetaData, int32 MetadataMaxLength);
    
    UFUNCTION(BlueprintCallable)
    bool GetQueryUGCKeyValueTag(FUWorksUGCQueryHandle Handle, int32 Index, int32 KeyValueTagIndex, FString& Key, int32 KeyMaxLength, FString& Value, int32 ValueMaxLength);
    
    UFUNCTION(BlueprintCallable)
    bool GetQueryUGCChildren(FUWorksUGCQueryHandle Handle, int32 Index, TArray<FUWorksPublishedFileID>& PublishedFileIDs, int32 MaxEntries);
    
    UFUNCTION(BlueprintCallable)
    bool GetQueryUGCAdditionalPreview(FUWorksUGCQueryHandle Handle, int32 Index, int32 PreviewIndex, FString& urlOrVideoId, int32 URLOrVideoIDMaxLength, FString& originalFileName, int32 OriginalFileNameMaxLength, EUWorksItemPreviewType& PreviewType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumSubscribedItems();
    
    UFUNCTION(BlueprintCallable)
    EUWorksItemUpdateStatus GetItemUpdateProgress(FUWorksUGCUpdateHandle Handle, FString& BytesProcessed, FString& bytesTotal);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemState(FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    bool GetItemInstallInfo(FUWorksPublishedFileID PublishedFileID, FString& SizeOnDisk, FString& Path, int32 PathMaxLength, int32& Timestamp);
    
    UFUNCTION(BlueprintCallable)
    bool GetItemDownloadInfo(FUWorksPublishedFileID PublishedFileID, FString& BytesDownloaded, FString& bytesTotal);
    
    UFUNCTION(BlueprintCallable)
    bool DownloadItem(FUWorksPublishedFileID PublishedFileID, bool bHighPriority);
    
    UFUNCTION(BlueprintCallable)
    FUWorksUGCQueryHandle CreateQueryUserUGCRequest(FUWorksSteamID SteamID, EUWorksUserUGCList ListType, EUWorksUGCMatchingUGCType MatchingUGCType, EUWorksUserUGCListSortOrder sortOrder, int32 CreatorAppID, int32 ConsumerAppID, int32 Page);
    
    UFUNCTION(BlueprintCallable)
    FUWorksUGCQueryHandle CreateQueryUGCDetailsRequest(TArray<FUWorksPublishedFileID> PublishedFileIDs, int32 NumPublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    FUWorksUGCQueryHandle CreateQueryAllUGCRequest(EUWorksUGCQuery queryType, EUWorksUGCMatchingUGCType MatchingUGCTypeFileType, int32 CreatorAppID, int32 ConsumerAppID, int32 Page);
    
    UFUNCTION(BlueprintCallable)
    void CreateItemMinimal(const FCreateItemMinimalDelegate& Completed, int32 ConsumerAppID, EUWorksWorkshopFileType fileType);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreCreateItem* CreateItem();
    
    UFUNCTION(BlueprintCallable)
    bool BInitWorkshopForGameServer(int32 WorkshopDepotID, const FString& Folder);
    
    UFUNCTION(BlueprintCallable)
    bool AddRequiredTag(FUWorksUGCQueryHandle Handle, const FString& TagName);
    
    UFUNCTION(BlueprintCallable)
    bool AddRequiredKeyValueTag(FUWorksUGCQueryHandle Handle, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddItemToFavoritesMinimal(const FAddItemToFavoritesMinimalDelegate& Completed, int32 AppID, FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreAddItemToFavorites* AddItemToFavorites();
    
    UFUNCTION(BlueprintCallable)
    bool AddItemPreviewVideo(FUWorksUGCUpdateHandle Handle, const FString& VideoID);
    
    UFUNCTION(BlueprintCallable)
    bool AddItemPreviewFile(FUWorksUGCUpdateHandle Handle, const FString& PreviewFile, EUWorksItemPreviewType Type);
    
    UFUNCTION(BlueprintCallable)
    bool AddItemKeyValueTag(FUWorksUGCUpdateHandle Handle, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddExcludedTag(FUWorksUGCQueryHandle Handle, const FString& TagName);
    
};

