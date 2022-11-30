#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "EUWorksResult.h"
#include "CreateLobbyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCreateLobbyDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamIDLobby);

