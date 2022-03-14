#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "FindOrCreateLeaderboardDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFindOrCreateLeaderboardDelegate, bool, bSuccessful, FUWorksSteamLeaderboard, SteamLeaderboard, bool, bLeaderboardFound);

