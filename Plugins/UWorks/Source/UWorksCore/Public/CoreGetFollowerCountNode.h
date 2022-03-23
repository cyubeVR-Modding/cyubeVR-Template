#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "GetFollowerCountDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "CoreGetFollowerCountNode.generated.h"

class UCoreGetFollowerCountNode;

UCLASS()
class UWORKSCORE_API UCoreGetFollowerCountNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetFollowerCountDelegate Completed;
    
    UCoreGetFollowerCountNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static UCoreGetFollowerCountNode* GetFollowerCountNode(FUWorksSteamID SteamID);
    
};

