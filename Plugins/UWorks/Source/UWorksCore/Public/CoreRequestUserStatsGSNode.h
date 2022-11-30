#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "ServerRequestUserStatsDelegateDelegate.h"
#include "CoreRequestUserStatsGSNode.generated.h"

class UCoreRequestUserStatsGSNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreRequestUserStatsGSNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FServerRequestUserStatsDelegate Completed;
    
    UCoreRequestUserStatsGSNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestUserStatsGSNode* RequestUserStatsGSNode(FUWorksSteamID SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);
    
};

