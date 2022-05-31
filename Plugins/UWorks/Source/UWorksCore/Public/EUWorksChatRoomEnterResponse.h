#pragma once
#include "CoreMinimal.h"
#include "EUWorksChatRoomEnterResponse.generated.h"

UENUM(BlueprintType)
enum class EUWorksChatRoomEnterResponse : uint8 {
    Unknown,
    Success,
    DoesntExist,
    NotAllowed,
    Full,
    Error,
    Banned,
    Limited,
    ClanDisabled,
    CommunityBan,
    MemberBlockedYou,
    YouBlockedMember,
};

