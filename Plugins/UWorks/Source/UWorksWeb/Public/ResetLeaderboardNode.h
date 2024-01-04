#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ResetLeaderboardDelegateDelegate.h"
#include "ResetLeaderboardNode.generated.h"

class UResetLeaderboardNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UResetLeaderboardNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResetLeaderboardDelegate Completed;
    
    UResetLeaderboardNode();

    UFUNCTION(BlueprintCallable)
    static UResetLeaderboardNode* ResetLeaderboardNode(const FString& Key, int32 AppID, int32 LeaderboardID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

