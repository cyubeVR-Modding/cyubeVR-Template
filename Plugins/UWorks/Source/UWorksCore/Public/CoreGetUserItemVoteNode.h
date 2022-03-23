#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksPublishedFileID.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetUserItemVoteDelegateDelegate.h"
#include "CoreGetUserItemVoteNode.generated.h"

class UCoreGetUserItemVoteNode;

UCLASS()
class UWORKSCORE_API UCoreGetUserItemVoteNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserItemVoteDelegate Completed;
    
    UCoreGetUserItemVoteNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped);
    
    UFUNCTION(BlueprintCallable)
    static UCoreGetUserItemVoteNode* GetUserItemVoteNode(FUWorksPublishedFileID PublishedFileID);
    
};

