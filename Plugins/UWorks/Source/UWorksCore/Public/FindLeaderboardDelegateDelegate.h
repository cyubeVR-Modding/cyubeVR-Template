#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "FindLeaderboardDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFindLeaderboardDelegate, bool, bSuccessful, FUWorksSteamLeaderboard, SteamLeaderboard, bool, bLeaderboardFound);

