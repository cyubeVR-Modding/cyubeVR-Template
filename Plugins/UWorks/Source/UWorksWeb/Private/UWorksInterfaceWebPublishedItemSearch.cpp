#include "UWorksInterfaceWebPublishedItemSearch.h"

class UUWorksRequestWebRankedByTrend;
class UUWorksRequestWebResultSetSummary;
class UUWorksRequestWebRankedByVote;
class UUWorksRequestWebRankedByPublicationOrder;

void UUWorksInterfaceWebPublishedItemSearch::ResultSetSummaryMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags, const FResultSetSummaryMinimalDelegate& Delegate) {
}

UUWorksRequestWebResultSetSummary* UUWorksInterfaceWebPublishedItemSearch::ResultSetSummary() {
    return NULL;
}

void UUWorksInterfaceWebPublishedItemSearch::RankedByVoteMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags, const FRankedByVoteMinimalDelegate& Delegate) {
}

UUWorksRequestWebRankedByVote* UUWorksInterfaceWebPublishedItemSearch::RankedByVote() {
    return NULL;
}

void UUWorksInterfaceWebPublishedItemSearch::RankedByTrendMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, int32 Days, TArray<FString> tags, TArray<FString> UserTags, const FRankedByTrendMinimalDelegate& Delegate) {
}

UUWorksRequestWebRankedByTrend* UUWorksInterfaceWebPublishedItemSearch::RankedByTrend() {
    return NULL;
}

void UUWorksInterfaceWebPublishedItemSearch::RankedByPublicationOrderMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags, const FRankedByPublicationOrderMinimalDelegate& Delegate) {
}

UUWorksRequestWebRankedByPublicationOrder* UUWorksInterfaceWebPublishedItemSearch::RankedByPublicationOrder() {
    return NULL;
}

UUWorksInterfaceWebPublishedItemSearch::UUWorksInterfaceWebPublishedItemSearch() {
}

