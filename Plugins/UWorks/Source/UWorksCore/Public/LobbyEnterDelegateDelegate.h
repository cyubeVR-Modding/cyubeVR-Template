#pragma once
#include "CoreMinimal.h"
#include "EUWorksChatRoomEnterResponse.h"
#include "UWorksSteamID.h"
#include "LobbyEnterDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLobbyEnterDelegate, FUWorksSteamID, SteamIDLobby, bool, bLocked, EUWorksChatRoomEnterResponse, ChatRoomEnterResponse);

