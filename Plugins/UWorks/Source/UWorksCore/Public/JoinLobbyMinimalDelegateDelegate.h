#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "EUWorksChatRoomEnterResponse.h"
#include "JoinLobbyMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_FiveParams(FJoinLobbyMinimalDelegate, bool, bSuccessful, FUWorksSteamID, SteamIDLobby, const TArray<uint8>&, ChatPermissions, bool, bLocked, EUWorksChatRoomEnterResponse, ChatRoomEnterResponse);

