#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "LobbyKickedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLobbyKickedDelegate, FUWorksSteamID, SteamIDLobby, FUWorksSteamID, SteamIDAdmin, bool, bKickedDueToDisconnect);

