#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "ServerRequestUserStatsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FServerRequestUserStatsDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamIDUser);

