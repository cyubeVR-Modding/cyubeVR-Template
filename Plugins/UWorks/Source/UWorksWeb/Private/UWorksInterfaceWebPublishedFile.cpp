#include "UWorksInterfaceWebPublishedFile.h"

UUWorksInterfaceWebPublishedFile::UUWorksInterfaceWebPublishedFile() {
}

void UUWorksInterfaceWebPublishedFile::UpdateTagsMinimal(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, TArray<FString> AddTags, TArray<FString> RemoveTags, const FUpdateTagsMinimalDelegate& Delegate) {
}

UUWorksRequestWebUpdateTags* UUWorksInterfaceWebPublishedFile::UpdateTags() {
    return NULL;
}

void UUWorksInterfaceWebPublishedFile::SetDeveloperMetadataMinimal(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, const FString& MetaData, const FSetDeveloperMetadataMinimalDelegate& Delegate) {
}

UUWorksRequestWebSetDeveloperMetadata* UUWorksInterfaceWebPublishedFile::SetDeveloperMetadata() {
    return NULL;
}

void UUWorksInterfaceWebPublishedFile::QueryFilesMinimal(const FString& Key, uint8 queryType, int32 Page, int32 CreatorAppID, int32 AppID, TArray<FString> requiredTags, TArray<FString> excludedTags, TArray<FString> RequiredFlags, TArray<FString> OmittedFlags, const FString& searchText, uint8 fileType, FUWorksPublishedFileID ChildPublishedFileID, int32 Days, bool bIncludeRecentVotesOnly, FUWorksRequiredKVTags RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32 ReturnPlaytimeStats, int32 NumPerPage, bool bMatchAllTags, int32 CacheMaxAgeSeconds, int32 Language, bool bReturnMetaData, const FQueryFilesMinimalDelegate& Delegate) {
}

UUWorksRequestWebQueryFiles* UUWorksInterfaceWebPublishedFile::QueryFiles() {
    return NULL;
}


