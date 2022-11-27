#pragma once
#include "CoreMinimal.h"
#include "GetGlobalAchievementPercentagesForAppMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetGlobalAchievementPercentagesForAppDelegateDelegate.h"
#include "UWorksGameID.h"
#include "UWorksRequestWebGetGlobalAchievementPercentagesForApp.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetGlobalAchievementPercentagesForApp : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetGlobalAchievementPercentagesForAppDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetGlobalAchievementPercentagesForAppMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetGlobalAchievementPercentagesForApp();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

