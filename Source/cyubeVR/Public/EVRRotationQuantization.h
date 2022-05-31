#pragma once
#include "CoreMinimal.h"
#include "EVRRotationQuantization.generated.h"

UENUM(BlueprintType)
enum class EVRRotationQuantization : uint8 {
    RoundTo10Bits,
    RoundToShort,
};

