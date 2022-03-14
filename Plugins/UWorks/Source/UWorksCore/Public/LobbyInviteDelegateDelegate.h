#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksGameID.h"
#include "LobbyInviteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLobbyInviteDelegate, FUWorksSteamID, SteamIDUser, FUWorksSteamID, SteamIDLobby, FUWorksGameID, GameID);

