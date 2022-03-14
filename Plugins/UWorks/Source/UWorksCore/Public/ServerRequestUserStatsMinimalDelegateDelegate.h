#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "ServerRequestUserStatsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FServerRequestUserStatsMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamIDUser);

