#pragma once
#include "CoreMinimal.h"
#include "EUWorksUniverse.generated.h"

UENUM()
enum class EUWorksUniverse : uint8 {
    Invalid,
    Public,
    Beta,
    Internal,
    Dev,
    Max,
};

