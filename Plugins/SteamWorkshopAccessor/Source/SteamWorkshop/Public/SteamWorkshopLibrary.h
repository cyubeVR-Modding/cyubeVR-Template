#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SteamDelegateOnWorkshopItemDownloadedDynDelegate.h"
#include "SteamUGCQueryHandle.h"
#include "EResultBP.h"
#include "SteamDepotId.h"
#include "WorkshopItemDownloadInfo.h"
#include "UInt64.h"
#include "SteamUGCItemId.h"
#include "WorkshopItemUpdateInfo.h"
#include "SteamUGCUpdateHandle.h"
#include "EItemStateBP.h"
#include "EItemStatisticBP.h"
#include "SteamWorkshopItemInstallInfo.h"
#include "SteamWorkshopItemDetails.h"
#include "UObject/NoExportTypes.h"
#include "SteamWorkshopUpdateDetails.h"
#include "SteamKeyValuePair.h"
#include "ESteamSupportedLanguages.h"
#include "ESteamItemVisibility.h"
#include "SteamUGCQueryParameterTagsAllUserDetails.h"
#include "SteamUGCQueryParameterTagsAllUser.h"
#include "SteamWorkshopLibrary.generated.h"

UCLASS(Blueprintable)
class STEAMWORKSHOP_API USteamWorkshopLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteamWorkshopLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SteamWorkshop_UpdateTitleLengthMin_FromConfig();
    
    UFUNCTION(BlueprintCallable)
    static int32 SteamWorkshop_UpdateDescriptionLengthMin_FromConfig();
    
    UFUNCTION(BlueprintCallable)
    static void SteamWorkshop_SuspendResumeDownloads(const bool bDoSuspend);
    
    UFUNCTION(BlueprintCallable)
    static EResultBP SteamWorkshop_SetServerDownloadDirectory(const FSteamDepotId& serverDepotId, const FString& Directory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SteamWorkshop_GetSubscribedItems(const int32 maxNumItemsToReturn, TArray<FSteamUGCItemId>& outItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SteamWorkshop_GetNumSubscribedItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SteamWorkshop_GetItemUpdateProgress(const FSteamUGCUpdateHandle& updateHandle, FWorkshopItemUpdateInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SteamWorkshop_GetItemStateFlag(const FSteamUGCItemId& ItemId, const EItemStateBP flagToQuery);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EItemStateBP> SteamWorkshop_GetItemState(const FSteamUGCItemId& ItemId);
    
    UFUNCTION(BlueprintPure)
    static bool SteamWorkshop_GetItemQueryStatistic(const FSteamUGCQueryHandle& queryHandle, const int32 ItemIndex, const TEnumAsByte<EItemStatisticBP> statToRetrieve, FUInt64& StatValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EResultBP SteamWorkshop_GetItemInstallInfo(const FSteamUGCItemId& ItemId, FSteamWorkshopItemInstallInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EResultBP SteamWorkshop_GetItemDownloadInfo(const FSteamUGCItemId& ItemId, FWorkshopItemDownloadInfo& downloadInfo);
    
    UFUNCTION(BlueprintCallable)
    static EResultBP SteamWorkshop_DownloadItem(const FSteamUGCItemId& ItemId, bool bHighPriority);
    
    UFUNCTION(BlueprintCallable)
    static void SteamWorkshop_ActivateGameOverlayToWorkshopItem(const FSteamUGCItemId& ItemId);
    
    UFUNCTION(BlueprintCallable)
    static bool SteamDelegate_OnWorkshopItemDownloaded_Unbind(FSteamDelegateOnWorkshopItemDownloadedDyn delegateToCall);
    
    UFUNCTION(BlueprintCallable)
    static bool SteamDelegate_OnWorkshopItemDownloaded_Bind(FSteamDelegateOnWorkshopItemDownloadedDyn delegateToCall);
    
    UFUNCTION(BlueprintCallable)
    static void PrintWorkshopItemDetails(const FSteamWorkshopItemDetails& itemDetails, float DisplayTime, FLinearColor Color, bool bPrintToScreen, bool bPrintToLog);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamWorkshopUpdateDetails MakeSteamWorkshopUpdateDetails(const FString& Title, const FString& Description, const FString& updateNotice, const FString& MetaData, const TArray<FString>& tags, const TArray<FSteamKeyValuePair>& keyValueTags, const FString& contentDirectory, const FString& previewImage, const TArray<FString>& additionalImages, const TArray<FString>& youtubeVideoIDs, const TArray<FString>& keysOfKeyValueTagsToRemove, const TArray<int32>& indexOfPreviewToRemove, const ESteamSupportedLanguages updateLanguage, const ESteamItemVisibility Visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamUGCQueryParameterTagsAllUserDetails MakeSteamUGCQueryParameterTagsAllUserDetails(const TArray<FSteamKeyValuePair>& requiredKeyValueTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamUGCQueryParameterTagsAllUser MakeSteamUGCQueryParameterTagsAllUser(const TArray<FString>& requiredTags, const TArray<FString>& excludedTags, const TArray<FSteamKeyValuePair>& requiredKeyValueTags);
    
};

