#pragma once
#include "CoreMinimal.h"
#include "UWorksGameID.h"
#include "EUWorksResult.h"
#include "RequestGlobalAchievementPercentagesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRequestGlobalAchievementPercentagesMinimalDelegate, bool, bSuccessful, FUWorksGameID, GameID, EUWorksResult, Result);

