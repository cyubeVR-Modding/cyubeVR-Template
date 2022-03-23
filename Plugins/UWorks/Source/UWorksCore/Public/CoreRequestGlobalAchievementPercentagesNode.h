#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "RequestGlobalAchievementPercentagesDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksGameID.h"
#include "CoreRequestGlobalAchievementPercentagesNode.generated.h"

class UCoreRequestGlobalAchievementPercentagesNode;

UCLASS()
class UWORKSCORE_API UCoreRequestGlobalAchievementPercentagesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestGlobalAchievementPercentagesDelegate Completed;
    
    UCoreRequestGlobalAchievementPercentagesNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestGlobalAchievementPercentagesNode* RequestGlobalAchievementPercentagesNode();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
    
};

