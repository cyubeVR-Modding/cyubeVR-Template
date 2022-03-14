#pragma once
#include "CoreMinimal.h"
#include "EUWorksBeginAuthSessionResult.generated.h"

UENUM()
enum class EUWorksBeginAuthSessionResult : uint8 {
    OK,
    InvalidTicket,
    DuplicateRequest,
    InvalidVersion,
    GameMismatch,
    ExpiredTicket,
};

