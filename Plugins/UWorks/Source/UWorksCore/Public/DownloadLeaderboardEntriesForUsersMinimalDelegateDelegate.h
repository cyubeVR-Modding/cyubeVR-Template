#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboardEntries.h"
#include "UWorksSteamLeaderboard.h"
#include "DownloadLeaderboardEntriesForUsersMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FDownloadLeaderboardEntriesForUsersMinimalDelegate, bool, bSuccessful, FUWorksSteamLeaderboard, SteamLeaderboard, FUWorksSteamLeaderboardEntries, SteamLeaderboardEntries, int32, EntryCount);

