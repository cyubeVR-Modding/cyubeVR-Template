#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "SetLeaderboardScoreDelegateDelegate.h"
#include "SetLeaderboardScoreNode.generated.h"

class USetLeaderboardScoreNode;

UCLASS(Blueprintable)
class UWORKSWEB_API USetLeaderboardScoreNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetLeaderboardScoreDelegate Completed;
    
    USetLeaderboardScoreNode();

    UFUNCTION(BlueprintCallable)
    static USetLeaderboardScoreNode* SetLeaderboardScoreNode(const FString& Key, int32 AppID, int32 LeaderboardID, FUWorksSteamID SteamID, int32 score, const FString& ScoreMethod, TArray<uint8> Details);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

