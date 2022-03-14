#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ComputeNewPlayerCompatibilityDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "CoreComputeNewPlayerCompatibilityNode.generated.h"

class UCoreComputeNewPlayerCompatibilityNode;

UCLASS()
class UWORKSCORE_API UCoreComputeNewPlayerCompatibilityNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FComputeNewPlayerCompatibilityDelegate Completed;
    
    UCoreComputeNewPlayerCompatibilityNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate, FUWorksSteamID SteamIDCandidate);
    
    UFUNCTION(BlueprintCallable)
    static UCoreComputeNewPlayerCompatibilityNode* ComputeNewPlayerCompatibilityNode(FUWorksSteamID SteamIDNewPlayer);
    
};

