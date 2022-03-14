#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "FriendRichPresenceUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFriendRichPresenceUpdateDelegate, FUWorksSteamID, SteamIDFriend, int32, AppID);

