#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "GameConnectedChatLeaveDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGameConnectedChatLeaveDelegate, FUWorksSteamID, SteamIDClanChat, FUWorksSteamID, SteamIDUser, bool, bKicked, bool, bDropped);

