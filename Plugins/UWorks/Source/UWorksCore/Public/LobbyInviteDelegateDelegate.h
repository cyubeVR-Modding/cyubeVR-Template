#pragma once
#include "CoreMinimal.h"
#include "UWorksGameID.h"
#include "UWorksSteamID.h"
#include "LobbyInviteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLobbyInviteDelegate, FUWorksSteamID, SteamIDUser, FUWorksSteamID, SteamIDLobby, FUWorksGameID, GameID);

