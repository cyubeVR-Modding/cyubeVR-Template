#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "LobbyDataUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLobbyDataUpdateDelegate, FUWorksSteamID, SteamIDLobby, FUWorksSteamID, SteamIDMember, bool, bSuccess);

