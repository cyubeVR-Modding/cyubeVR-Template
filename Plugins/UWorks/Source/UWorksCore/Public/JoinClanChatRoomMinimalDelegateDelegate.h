#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "EUWorksChatRoomEnterResponse.h"
#include "JoinClanChatRoomMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FJoinClanChatRoomMinimalDelegate, bool, bSuccessful, FUWorksSteamID, SteamIDClanChat, EUWorksChatRoomEnterResponse, ChatRoomEnterResponse);

