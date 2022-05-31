#pragma once
#include "CoreMinimal.h"
#include "EUWorksOverlaySpecific.generated.h"

UENUM(BlueprintType)
enum class EUWorksOverlaySpecific : uint8 {
    SteamID,
    Chat,
    JoinTrade,
    Stats,
    Achievements,
    FriendAdd,
    FriendRemove,
    FriendRequestAccept,
    FriendRequestIgnore,
};

