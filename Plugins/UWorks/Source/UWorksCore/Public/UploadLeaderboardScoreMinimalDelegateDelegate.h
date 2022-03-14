#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "UploadLeaderboardScoreMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_SevenParams(FUploadLeaderboardScoreMinimalDelegate, bool, bSuccessful, bool, bSuccess, FUWorksSteamLeaderboard, SteamLeaderboard, int32, score, bool, bScoreChanged, int32, GlobalRankNew, int32, GlobalRankPrevious);

