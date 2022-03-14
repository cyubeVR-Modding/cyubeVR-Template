#pragma once
#include "CoreMinimal.h"
#include "UWorksGameID.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "UserStatsReceivedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUserStatsReceivedDelegate, FUWorksGameID, GameID, EUWorksResult, Result, FUWorksSteamID, SteamID);

