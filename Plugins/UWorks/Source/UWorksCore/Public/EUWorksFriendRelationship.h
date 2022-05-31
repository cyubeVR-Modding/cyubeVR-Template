#pragma once
#include "CoreMinimal.h"
#include "EUWorksFriendRelationship.generated.h"

UENUM(BlueprintType)
enum class EUWorksFriendRelationship : uint8 {
    None,
    Blocked,
    RequestRecipient,
    Friend,
    RequestInitiator,
    Ignored,
    IgnoredFriend,
    Max = 0x8,
};

