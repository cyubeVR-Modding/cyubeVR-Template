#pragma once
#include "CoreMinimal.h"
#include "UWorksGameID.h"
#include "EUWorksResult.h"
#include "RequestGlobalStatsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRequestGlobalStatsMinimalDelegate, bool, bSuccessful, FUWorksGameID, GameID, EUWorksResult, Result);

