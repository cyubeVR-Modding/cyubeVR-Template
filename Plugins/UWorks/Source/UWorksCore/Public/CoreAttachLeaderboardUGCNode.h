#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AttachLeaderboardUGCDelegateDelegate.h"
#include "UWorksSteamLeaderboard.h"
#include "UWorksUGCHandle.h"
#include "CoreAttachLeaderboardUGCNode.generated.h"

class UCoreAttachLeaderboardUGCNode;

UCLASS()
class UWORKSCORE_API UCoreAttachLeaderboardUGCNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAttachLeaderboardUGCDelegate Completed;
    
    UCoreAttachLeaderboardUGCNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamLeaderboard SteamLeaderboard);
    
    UFUNCTION(BlueprintCallable)
    static UCoreAttachLeaderboardUGCNode* AttachLeaderboardUGCNode(FUWorksSteamLeaderboard SteamLeaderboard, FUWorksUGCHandle UGCHandle);
    
};

