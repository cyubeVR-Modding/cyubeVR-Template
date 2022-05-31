#pragma once
#include "CoreMinimal.h"
#include "EUWorksUserSession.generated.h"

UENUM(BlueprintType)
enum class EUWorksUserSession : uint8 {
    None,
    Client,
    Web,
};

