#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "RequestClanOfficerListDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRequestClanOfficerListDelegate, bool, bSuccessful, FUWorksSteamID, SteamIDClan, int32, Officers, bool, bSuccess);

