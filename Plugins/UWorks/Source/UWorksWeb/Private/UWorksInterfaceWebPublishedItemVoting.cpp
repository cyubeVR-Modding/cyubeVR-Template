#include "UWorksInterfaceWebPublishedItemVoting.h"

UUWorksInterfaceWebPublishedItemVoting::UUWorksInterfaceWebPublishedItemVoting() {
}

void UUWorksInterfaceWebPublishedItemVoting::UserVoteSummaryMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs, const FUserVoteSummaryMinimalDelegate& Delegate) {
}

UUWorksRequestWebUserVoteSummary* UUWorksInterfaceWebPublishedItemVoting::UserVoteSummary() {
    return NULL;
}

void UUWorksInterfaceWebPublishedItemVoting::ItemVoteSummaryMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs, const FItemVoteSummaryMinimalDelegate& Delegate) {
}

UUWorksRequestWebItemVoteSummary* UUWorksInterfaceWebPublishedItemVoting::ItemVoteSummary() {
    return NULL;
}


