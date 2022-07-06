#pragma once
#include "CoreMinimal.h"
#include "QueryFilesMinimalDelegateDelegate.h"
#include "UWorksInterfaceWeb.h"
#include "SetDeveloperMetadataMinimalDelegateDelegate.h"
#include "UWorksPublishedFileID.h"
#include "UpdateTagsMinimalDelegateDelegate.h"
#include "UWorksRequiredKVTags.h"
#include "UWorksInterfaceWebPublishedFile.generated.h"

class UUWorksRequestWebSetDeveloperMetadata;
class UUWorksRequestWebUpdateTags;
class UUWorksRequestWebQueryFiles;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebPublishedFile : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebPublishedFile();
    UFUNCTION(BlueprintCallable)
    static void UpdateTagsMinimal(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, TArray<FString> AddTags, TArray<FString> RemoveTags, const FUpdateTagsMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebUpdateTags* UpdateTags();
    
    UFUNCTION(BlueprintCallable)
    static void SetDeveloperMetadataMinimal(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, const FString& MetaData, const FSetDeveloperMetadataMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebSetDeveloperMetadata* SetDeveloperMetadata();
    
    UFUNCTION(BlueprintCallable)
    static void QueryFilesMinimal(const FString& Key, uint8 queryType, int32 Page, int32 CreatorAppID, int32 AppID, TArray<FString> requiredTags, TArray<FString> excludedTags, TArray<FString> RequiredFlags, TArray<FString> OmittedFlags, const FString& searchText, uint8 fileType, FUWorksPublishedFileID ChildPublishedFileID, int32 Days, bool bIncludeRecentVotesOnly, FUWorksRequiredKVTags RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32 ReturnPlaytimeStats, int32 NumPerPage, bool bMatchAllTags, int32 CacheMaxAgeSeconds, int32 Language, bool bReturnMetaData, const FQueryFilesMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebQueryFiles* QueryFiles();
    
};

