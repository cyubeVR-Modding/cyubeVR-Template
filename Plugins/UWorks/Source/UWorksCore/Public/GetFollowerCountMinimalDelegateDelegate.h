#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "GetFollowerCountMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FGetFollowerCountMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamID, int32, Count);

