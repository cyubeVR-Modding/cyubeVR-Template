#pragma once
#include "CoreMinimal.h"
#include "GetLeaderboardsForGameDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetLeaderboardsForGameNode.generated.h"

class UGetLeaderboardsForGameNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetLeaderboardsForGameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetLeaderboardsForGameDelegate Completed;
    
    UGetLeaderboardsForGameNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetLeaderboardsForGameNode* GetLeaderboardsForGameNode(const FString& Key, int32 AppID);
    
};

