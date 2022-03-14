#pragma once
#include "CoreMinimal.h"
#include "UWorksGameID.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "RequestUserStatsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRequestUserStatsDelegate, bool, bSuccessful, FUWorksGameID, GameID, EUWorksResult, Result, FUWorksSteamID, SteamID);

