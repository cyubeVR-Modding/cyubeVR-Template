#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "EnumerateFollowingListMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FiveParams(FEnumerateFollowingListMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, const TArray<FUWorksSteamID>&, SteamIDs, int32, ResultsReturned, int32, TotalResultCount);

