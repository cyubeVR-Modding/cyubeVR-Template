#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceWeb.h"
#include "UWorksSteamID.h"
#include "UserVoteSummaryMinimalDelegateDelegate.h"
#include "ItemVoteSummaryMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebPublishedItemVoting.generated.h"

class UUWorksRequestWebUserVoteSummary;
class UUWorksRequestWebItemVoteSummary;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebPublishedItemVoting : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebPublishedItemVoting();
    UFUNCTION(BlueprintCallable)
    static void UserVoteSummaryMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs, const FUserVoteSummaryMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebUserVoteSummary* UserVoteSummary();
    
    UFUNCTION(BlueprintCallable)
    static void ItemVoteSummaryMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs, const FItemVoteSummaryMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebItemVoteSummary* ItemVoteSummary();
    
};

