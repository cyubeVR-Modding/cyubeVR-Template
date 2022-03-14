#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetGlobalAchievementPercentagesForAppDelegateDelegate.h"
#include "UWorksGameID.h"
#include "GetGlobalAchievementPercentagesForAppNode.generated.h"

class UGetGlobalAchievementPercentagesForAppNode;

UCLASS()
class UWORKSWEB_API UGetGlobalAchievementPercentagesForAppNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetGlobalAchievementPercentagesForAppDelegate Completed;
    
    UGetGlobalAchievementPercentagesForAppNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetGlobalAchievementPercentagesForAppNode* GetGlobalAchievementPercentagesForAppNode(FUWorksGameID GameID);
    
};

