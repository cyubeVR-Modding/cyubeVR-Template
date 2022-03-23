#pragma once
#include "CoreMinimal.h"
#include "SetUserItemVoteDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "SetUserItemVoteMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksPublishedFileID.h"
#include "UWorksRequestCoreSetUserItemVote.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreSetUserItemVote : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetUserItemVoteDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetUserItemVoteMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreSetUserItemVote();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksPublishedFileID PublishedFileID, bool bVoteUp);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bVoteUp);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

