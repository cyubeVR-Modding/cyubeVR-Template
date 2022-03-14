#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksSteamLeaderboard.h"
#include "AttachLeaderboardUGCMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAttachLeaderboardUGCMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamLeaderboard, SteamLeaderboard);

