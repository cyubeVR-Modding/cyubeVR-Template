#pragma once
#include "CoreMinimal.h"
#include "EUWorksLeaderboardDisplayType.h"
#include "FindOrCreateLeaderboardDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUWorksLeaderboardSortMethod.h"
#include "UWorksSteamLeaderboard.h"
#include "CoreFindOrCreateLeaderboardNode.generated.h"

class UCoreFindOrCreateLeaderboardNode;

UCLASS()
class UWORKSCORE_API UCoreFindOrCreateLeaderboardNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFindOrCreateLeaderboardDelegate Completed;
    
    UCoreFindOrCreateLeaderboardNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    
    UFUNCTION(BlueprintCallable)
    static UCoreFindOrCreateLeaderboardNode* FindOrCreateLeaderboardNode(const FString& LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType);
    
};

