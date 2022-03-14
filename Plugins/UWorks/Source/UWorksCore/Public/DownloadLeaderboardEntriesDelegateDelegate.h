#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "UWorksSteamLeaderboardEntries.h"
#include "DownloadLeaderboardEntriesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDownloadLeaderboardEntriesDelegate, bool, bSuccessful, FUWorksSteamLeaderboard, SteamLeaderboard, FUWorksSteamLeaderboardEntries, SteamLeaderboardEntries, int32, EntryCount);

