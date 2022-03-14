#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "FindOrCreateLeaderboardMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FFindOrCreateLeaderboardMinimalDelegate, bool, bSuccessful, FUWorksSteamLeaderboard, SteamLeaderboard, bool, bLeaderboardFound);

