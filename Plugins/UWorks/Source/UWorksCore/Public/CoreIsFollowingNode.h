#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "IsFollowingDelegateDelegate.h"
#include "EUWorksResult.h"
#include "CoreIsFollowingNode.generated.h"

class UCoreIsFollowingNode;

UCLASS()
class UWORKSCORE_API UCoreIsFollowingNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FIsFollowingDelegate Completed;
    
    UCoreIsFollowingNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, bool bIsFollowing);
    
    UFUNCTION(BlueprintCallable)
    static UCoreIsFollowingNode* IsFollowingNode(FUWorksSteamID SteamID);
    
};

