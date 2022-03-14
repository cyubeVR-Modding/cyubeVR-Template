#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "RequestClanOfficerListMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FRequestClanOfficerListMinimalDelegate, bool, bSuccessful, FUWorksSteamID, SteamIDClan, int32, Officers, bool, bSuccess);

