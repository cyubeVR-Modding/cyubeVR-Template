#pragma once
#include "CoreMinimal.h"
#include "EUWorksFriendFlags.generated.h"

UENUM(BlueprintType)
enum class EUWorksFriendFlags : uint8 {
    Blocked,
    FriendshipRequested,
    Immediate,
    ClanMember,
    OnGameServer,
    HasPlayedWith,
    FriendOfFriend,
    RequestingFriendship,
    RequestingInfo,
    Ignored,
    IgnoredFriend,
    Suggested,
    ChatMember,
    All,
};

