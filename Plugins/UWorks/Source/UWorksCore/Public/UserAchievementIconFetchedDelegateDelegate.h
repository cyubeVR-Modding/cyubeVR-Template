#pragma once
#include "CoreMinimal.h"
#include "UWorksGameID.h"
#include "UserAchievementIconFetchedDelegateDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FUserAchievementIconFetchedDelegate, FUWorksGameID, GameID, const FString&, AchievementName, bool, bAchieved, UTexture2D*, Icon);

