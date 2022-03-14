#pragma once
#include "CoreMinimal.h"
#include "EUWorksP2PSessionError.generated.h"

UENUM(BlueprintType)
enum class EUWorksP2PSessionError : uint8 {
    None,
    NotRunningApp,
    NoRightsToApp,
    DestinationNotLoggedIn,
    Timeout,
    Max,
};

