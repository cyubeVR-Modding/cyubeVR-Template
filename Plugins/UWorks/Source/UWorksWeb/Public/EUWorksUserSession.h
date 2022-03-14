#pragma once
#include "CoreMinimal.h"
#include "EUWorksUserSession.generated.h"

UENUM()
enum class EUWorksUserSession : uint8 {
    None,
    Client,
    Web,
};

