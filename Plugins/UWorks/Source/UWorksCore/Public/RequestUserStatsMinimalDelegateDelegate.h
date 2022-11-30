#pragma once
#include "CoreMinimal.h"
#include "UWorksGameID.h"
#include "UWorksSteamID.h"
#include "EUWorksResult.h"
#include "RequestUserStatsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FRequestUserStatsMinimalDelegate, bool, bSuccessful, FUWorksGameID, GameID, EUWorksResult, Result, FUWorksSteamID, SteamID);

