#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "GetPlayerAchievementsDelegateDelegate.h"
#include "GetPlayerAchievementsMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetPlayerAchievements.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetPlayerAchievements : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPlayerAchievementsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPlayerAchievementsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPlayerAchievements();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

