#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DeleteLeaderboardDelegateDelegate.h"
#include "DeleteLeaderboardNode.generated.h"

class UDeleteLeaderboardNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UDeleteLeaderboardNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeleteLeaderboardDelegate Completed;
    
    UDeleteLeaderboardNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UDeleteLeaderboardNode* DeleteLeaderboardNode(const FString& Key, int32 AppID, const FString& Name);
    
};

