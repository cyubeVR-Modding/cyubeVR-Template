#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "P2PSessionRequestDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FP2PSessionRequestDelegate, FUWorksSteamID, SteamIDRemote);

