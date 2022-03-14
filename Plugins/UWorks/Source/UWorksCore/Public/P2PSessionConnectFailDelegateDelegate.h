#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "EUWorksP2PSessionError.h"
#include "P2PSessionConnectFailDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FP2PSessionConnectFailDelegate, FUWorksSteamID, SteamIDRemote, EUWorksP2PSessionError, P2PSessionError);

