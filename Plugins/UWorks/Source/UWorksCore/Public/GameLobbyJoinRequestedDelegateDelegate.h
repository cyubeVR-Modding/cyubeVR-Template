#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "GameLobbyJoinRequestedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameLobbyJoinRequestedDelegate, FUWorksSteamID, SteamIDLobby, FUWorksSteamID, SteamIDFriend);

