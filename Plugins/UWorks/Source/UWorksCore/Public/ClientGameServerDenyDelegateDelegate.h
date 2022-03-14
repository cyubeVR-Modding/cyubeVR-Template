#pragma once
#include "CoreMinimal.h"
#include "EUWorksDenyReason.h"
#include "ClientGameServerDenyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FClientGameServerDenyDelegate, int32, AppID, const FString&, GameServerIP, int32, GameServerPort, bool, BSecure, EUWorksDenyReason, Reason);

