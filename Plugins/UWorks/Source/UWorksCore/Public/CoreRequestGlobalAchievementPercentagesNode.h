#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RequestGlobalAchievementPercentagesDelegateDelegate.h"
#include "UWorksGameID.h"
#include "EUWorksResult.h"
#include "CoreRequestGlobalAchievementPercentagesNode.generated.h"

class UCoreRequestGlobalAchievementPercentagesNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreRequestGlobalAchievementPercentagesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestGlobalAchievementPercentagesDelegate Completed;
    
    UCoreRequestGlobalAchievementPercentagesNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestGlobalAchievementPercentagesNode* RequestGlobalAchievementPercentagesNode();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
    
};

