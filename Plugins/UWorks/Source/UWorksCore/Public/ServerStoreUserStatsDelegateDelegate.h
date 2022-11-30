#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "EUWorksResult.h"
#include "ServerStoreUserStatsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FServerStoreUserStatsDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamIDUser);

