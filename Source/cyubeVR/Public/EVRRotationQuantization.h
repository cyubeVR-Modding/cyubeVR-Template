#pragma once
#include "CoreMinimal.h"
#include "EVRRotationQuantization.generated.h"

UENUM()
enum class EVRRotationQuantization : uint8 {
    RoundTo10Bits,
    RoundToShort,
};

