#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ServerStoreUserStatsDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "CoreStoreUserStatsNode.generated.h"

class UCoreStoreUserStatsNode;

UCLASS()
class UWORKSCORE_API UCoreStoreUserStatsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FServerStoreUserStatsDelegate Completed;
    
    UCoreStoreUserStatsNode();
    UFUNCTION(BlueprintCallable)
    static UCoreStoreUserStatsNode* StoreUserStatsNode(FUWorksSteamID SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);
    
};

