#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "GameConnectedChatJoinDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameConnectedChatJoinDelegate, FUWorksSteamID, SteamIDClanChat, FUWorksSteamID, SteamIDUser);

