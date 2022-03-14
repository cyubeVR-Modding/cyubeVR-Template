#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "GSClientGroupStatusDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGSClientGroupStatusDelegate, FUWorksSteamID, SteamIDUser, FUWorksSteamID, SteamIDGroup, bool, bMember, bool, bOfficer);

