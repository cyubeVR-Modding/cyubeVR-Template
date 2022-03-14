#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "LobbyGameCreatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLobbyGameCreatedDelegate, FUWorksSteamID, SteamIDLobby, FUWorksSteamID, SteamIDGameServer, const FString&, IP, int32, Port);

