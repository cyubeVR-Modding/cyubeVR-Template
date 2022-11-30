#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "EUWorksResult.h"
#include "CreateLobbyMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FCreateLobbyMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamIDLobby);

