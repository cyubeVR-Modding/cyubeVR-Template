#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "FindLeaderboardMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FFindLeaderboardMinimalDelegate, bool, bSuccessful, FUWorksSteamLeaderboard, SteamLeaderboard, bool, bLeaderboardFound);

