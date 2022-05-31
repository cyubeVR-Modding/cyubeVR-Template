#pragma once
#include "CoreMinimal.h"
#include "EUWorksChatRoomEnterResponse.h"
#include "UWorksSteamID.h"
#include "JoinLobbyDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FJoinLobbyDelegate, bool, bSuccessful, FUWorksSteamID, SteamIDLobby, const TArray<uint8>&, ChatPermissions, bool, bLocked, EUWorksChatRoomEnterResponse, ChatRoomEnterResponse);

