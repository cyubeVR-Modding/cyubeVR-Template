#pragma once
#include "CoreMinimal.h"
#include "EUWorksChatRoomEnterResponse.h"
#include "UWorksSteamID.h"
#include "JoinClanChatRoomDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FJoinClanChatRoomDelegate, bool, bSuccessful, FUWorksSteamID, SteamIDClanChat, EUWorksChatRoomEnterResponse, ChatRoomEnterResponse);

