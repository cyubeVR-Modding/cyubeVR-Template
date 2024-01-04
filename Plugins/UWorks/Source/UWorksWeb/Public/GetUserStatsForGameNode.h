#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "GetUserStatsForGameDelegateDelegate.h"
#include "GetUserStatsForGameNode.generated.h"

class UGetUserStatsForGameNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetUserStatsForGameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUserStatsForGameDelegate Completed;
    
    UGetUserStatsForGameNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetUserStatsForGameNode* GetUserStatsForGameNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
};

