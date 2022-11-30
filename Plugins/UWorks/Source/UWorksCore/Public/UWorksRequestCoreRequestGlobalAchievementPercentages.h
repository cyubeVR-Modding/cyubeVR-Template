#pragma once
#include "CoreMinimal.h"
#include "RequestGlobalAchievementPercentagesMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "RequestGlobalAchievementPercentagesDelegateDelegate.h"
#include "UWorksGameID.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreRequestGlobalAchievementPercentages.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreRequestGlobalAchievementPercentages : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestGlobalAchievementPercentagesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestGlobalAchievementPercentagesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestGlobalAchievementPercentages();
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

