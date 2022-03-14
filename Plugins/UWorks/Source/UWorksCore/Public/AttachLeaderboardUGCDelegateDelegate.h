#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksSteamLeaderboard.h"
#include "AttachLeaderboardUGCDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAttachLeaderboardUGCDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamLeaderboard, SteamLeaderboard);

