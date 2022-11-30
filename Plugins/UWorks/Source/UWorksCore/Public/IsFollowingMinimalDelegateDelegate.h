#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "EUWorksResult.h"
#include "IsFollowingMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FIsFollowingMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamID, bool, bIsFollowing);

