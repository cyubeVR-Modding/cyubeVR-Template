#pragma once
#include "CoreMinimal.h"
#include "EUWorksDenyReason.generated.h"

UENUM(BlueprintType)
enum class EUWorksDenyReason : uint8 {
    Invalid,
    InvalidVersion,
    Generic,
    NotLoggedOn,
    NoLicense,
    Cheater,
    LoggedInElseWhere,
    UnknownText,
    IncompatibleAnticheat,
    MemoryCorruption,
    IncompatibleSoftware,
    SteamConnectionLost,
    SteamConnectionError,
    SteamResponseTimedOut,
    SteamValidationStalled,
    SteamOwnerLeftGuestUser,
};

