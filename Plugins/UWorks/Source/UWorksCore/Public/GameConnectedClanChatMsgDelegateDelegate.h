#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "GameConnectedClanChatMsgDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGameConnectedClanChatMsgDelegate, FUWorksSteamID, SteamIDClanChat, FUWorksSteamID, SteamIDUser, int32, MessageID);

