#pragma once
#include "CoreMinimal.h"
#include "UWorksGameID.h"
#include "EUWorksResult.h"
#include "RequestGlobalStatsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRequestGlobalStatsDelegate, bool, bSuccessful, FUWorksGameID, GameID, EUWorksResult, Result);

