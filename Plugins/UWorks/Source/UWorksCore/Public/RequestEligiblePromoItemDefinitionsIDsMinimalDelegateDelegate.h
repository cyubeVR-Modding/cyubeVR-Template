#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "RequestEligiblePromoItemDefinitionsIDsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FiveParams(FRequestEligiblePromoItemDefinitionsIDsMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamID, int32, NumEligiblePromoItemsDefinitionsIDs, bool, bCachedData);

