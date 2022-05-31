#pragma once
#include "CoreMinimal.h"
#include "EUWorksUniverse.generated.h"

UENUM(BlueprintType)
enum class EUWorksUniverse : uint8 {
    Invalid,
    Public,
    Beta,
    Internal,
    Dev,
    Max,
};

