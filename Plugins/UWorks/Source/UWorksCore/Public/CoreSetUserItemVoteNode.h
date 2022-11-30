#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SetUserItemVoteDelegateDelegate.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "CoreSetUserItemVoteNode.generated.h"

class UCoreSetUserItemVoteNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreSetUserItemVoteNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetUserItemVoteDelegate Completed;
    
    UCoreSetUserItemVoteNode();
    UFUNCTION(BlueprintCallable)
    static UCoreSetUserItemVoteNode* SetUserItemVoteNode(FUWorksPublishedFileID PublishedFileID, bool bVoteUp);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVoteUp);
    
};

