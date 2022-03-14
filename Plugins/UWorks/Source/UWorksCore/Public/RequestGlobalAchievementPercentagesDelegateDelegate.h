#pragma once
#include "CoreMinimal.h"
#include "UWorksGameID.h"
#include "EUWorksResult.h"
#include "RequestGlobalAchievementPercentagesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRequestGlobalAchievementPercentagesDelegate, bool, bSuccessful, FUWorksGameID, GameID, EUWorksResult, Result);

