#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "SetUserItemVoteDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUWorksResult.h"
#include "CoreSetUserItemVoteNode.generated.h"

class UCoreSetUserItemVoteNode;

UCLASS()
class UWORKSCORE_API UCoreSetUserItemVoteNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetUserItemVoteDelegate Completed;
    
    UCoreSetUserItemVoteNode();
    UFUNCTION(BlueprintCallable)
    static UCoreSetUserItemVoteNode* SetUserItemVoteNode(FUWorksPublishedFileID PublishedFileID, bool bVoteUp);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVoteUp);
    
};

