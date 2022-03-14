#pragma once
#include "CoreMinimal.h"
#include "FindLeaderboardDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamLeaderboard.h"
#include "CoreFindLeaderboardNode.generated.h"

class UCoreFindLeaderboardNode;

UCLASS()
class UWORKSCORE_API UCoreFindLeaderboardNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFindLeaderboardDelegate Completed;
    
    UCoreFindLeaderboardNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    
    UFUNCTION(BlueprintCallable)
    static UCoreFindLeaderboardNode* FindLeaderboardNode(const FString& LeaderboardName);
    
};

