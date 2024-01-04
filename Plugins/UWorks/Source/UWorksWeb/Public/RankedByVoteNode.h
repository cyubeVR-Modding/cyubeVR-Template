#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "RankedByVoteDelegateDelegate.h"
#include "RankedByVoteNode.generated.h"

class URankedByVoteNode;

UCLASS(Blueprintable)
class UWORKSWEB_API URankedByVoteNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankedByVoteDelegate Completed;
    
    URankedByVoteNode();

    UFUNCTION(BlueprintCallable)
    static URankedByVoteNode* RankedByVoteNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

