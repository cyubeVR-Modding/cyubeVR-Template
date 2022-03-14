#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "RankedByVoteDelegateDelegate.h"
#include "RankedByVoteMinimalDelegateDelegate.h"
#include "UWorksRequestWebRankedByVote.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebRankedByVote : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRankedByVoteDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRankedByVoteMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRankedByVote();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

