#pragma once
#include "CoreMinimal.h"
#include "EUWorksBeginAuthSessionResult.generated.h"

UENUM(BlueprintType)
enum class EUWorksBeginAuthSessionResult : uint8 {
    OK,
    InvalidTicket,
    DuplicateRequest,
    InvalidVersion,
    GameMismatch,
    ExpiredTicket,
};

