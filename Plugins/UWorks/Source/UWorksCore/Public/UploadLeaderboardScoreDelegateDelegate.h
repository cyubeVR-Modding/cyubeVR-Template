#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "UploadLeaderboardScoreDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FUploadLeaderboardScoreDelegate, bool, bSuccessful, bool, bSuccess, FUWorksSteamLeaderboard, SteamLeaderboard, int32, score, bool, bScoreChanged, int32, GlobalRankNew, int32, GlobalRankPrevious);

