#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "UWorksSteamLeaderboardEntries.h"
#include "DownloadLeaderboardEntriesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FDownloadLeaderboardEntriesMinimalDelegate, bool, bSuccessful, FUWorksSteamLeaderboard, SteamLeaderboard, FUWorksSteamLeaderboardEntries, SteamLeaderboardEntries, int32, EntryCount);

