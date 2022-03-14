#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "RequestEligiblePromoItemDefinitionsIDsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FRequestEligiblePromoItemDefinitionsIDsDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamID, int32, NumEligiblePromoItemsDefinitionsIDs, bool, bCachedData);

