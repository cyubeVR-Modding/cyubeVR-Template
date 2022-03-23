#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "SetUserStatsForGameDelegateDelegate.h"
#include "SetUserStatsForGameNode.generated.h"

class USetUserStatsForGameNode;

UCLASS()
class UWORKSWEB_API USetUserStatsForGameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetUserStatsForGameDelegate Completed;
    
    USetUserStatsForGameNode();
    UFUNCTION(BlueprintCallable)
    static USetUserStatsForGameNode* SetUserStatsForGameNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<FString> Name, TArray<int32> Value);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

