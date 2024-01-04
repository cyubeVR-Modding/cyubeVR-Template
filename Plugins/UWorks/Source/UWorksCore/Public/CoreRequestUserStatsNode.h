#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksGameID.h"
#include "UWorksSteamID.h"
#include "EUWorksResult.h"
#include "RequestUserStatsDelegateDelegate.h"
#include "CoreRequestUserStatsNode.generated.h"

class UCoreRequestUserStatsNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreRequestUserStatsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestUserStatsDelegate Completed;
    
    UCoreRequestUserStatsNode();

    UFUNCTION(BlueprintCallable)
    static UCoreRequestUserStatsNode* RequestUserStatsNode(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result, FUWorksSteamID SteamID);
    
};

