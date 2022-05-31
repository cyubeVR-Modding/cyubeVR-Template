#pragma once
#include "CoreMinimal.h"
#include "ResultSetSummaryMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksInterfaceWeb.h"
#include "RankedByVoteMinimalDelegateDelegate.h"
#include "RankedByTrendMinimalDelegateDelegate.h"
#include "RankedByPublicationOrderMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebPublishedItemSearch.generated.h"

class UUWorksRequestWebRankedByTrend;
class UUWorksRequestWebResultSetSummary;
class UUWorksRequestWebRankedByVote;
class UUWorksRequestWebRankedByPublicationOrder;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebPublishedItemSearch : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebPublishedItemSearch();
    UFUNCTION(BlueprintCallable)
    static void ResultSetSummaryMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags, const FResultSetSummaryMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebResultSetSummary* ResultSetSummary();
    
    UFUNCTION(BlueprintCallable)
    static void RankedByVoteMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags, const FRankedByVoteMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebRankedByVote* RankedByVote();
    
    UFUNCTION(BlueprintCallable)
    static void RankedByTrendMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, int32 Days, TArray<FString> tags, TArray<FString> UserTags, const FRankedByTrendMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebRankedByTrend* RankedByTrend();
    
    UFUNCTION(BlueprintCallable)
    static void RankedByPublicationOrderMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags, const FRankedByPublicationOrderMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebRankedByPublicationOrder* RankedByPublicationOrder();
    
};

