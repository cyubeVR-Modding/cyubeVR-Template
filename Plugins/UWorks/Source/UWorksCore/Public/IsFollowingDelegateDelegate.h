#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "IsFollowingDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FIsFollowingDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamID, bool, bIsFollowing);

