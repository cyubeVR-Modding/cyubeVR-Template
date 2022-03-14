#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "GameRichPresenceJoinRequestedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameRichPresenceJoinRequestedDelegate, FUWorksSteamID, SteamIDFriend, const FString&, Connect);

