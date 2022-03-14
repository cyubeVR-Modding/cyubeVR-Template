#pragma once
#include "CoreMinimal.h"
#include "UWorksGameID.h"
#include "UserAchievementStoredDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FUserAchievementStoredDelegate, FUWorksGameID, GameID, bool, bGroupAchievement, const FString&, AchievementName, int32, CurrentProgress, int32, MaxProgress);

