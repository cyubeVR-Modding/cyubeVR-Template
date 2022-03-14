#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "GameConnectedFriendChatMsgDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameConnectedFriendChatMsgDelegate, FUWorksSteamID, SteamIDUser, int32, MessageID);

