#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "EUWorksResult.h"
#include "ServerStoreUserStatsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FServerStoreUserStatsMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamIDUser);

