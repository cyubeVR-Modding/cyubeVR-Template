#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "GSStatsUnloadedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSStatsUnloadedDelegate, FUWorksSteamID, SteamIDUser);

