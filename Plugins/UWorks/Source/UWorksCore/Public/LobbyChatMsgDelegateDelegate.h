#pragma once
#include "CoreMinimal.h"
#include "EUWorksChatEntryType.h"
#include "UWorksSteamID.h"
#include "LobbyChatMsgDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLobbyChatMsgDelegate, FUWorksSteamID, SteamIDLobby, FUWorksSteamID, SteamIDUser, EUWorksChatEntryType, ChatEntryType, int32, ChatID);

