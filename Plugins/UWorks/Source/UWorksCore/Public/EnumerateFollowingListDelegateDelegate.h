#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "EnumerateFollowingListDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FEnumerateFollowingListDelegate, bool, bSuccessful, EUWorksResult, Result, const TArray<FUWorksSteamID>&, SteamIDs, int32, ResultsReturned, int32, TotalResultCount);

