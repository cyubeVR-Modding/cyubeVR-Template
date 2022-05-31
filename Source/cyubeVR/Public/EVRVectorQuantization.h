#pragma once
#include "CoreMinimal.h"
#include "EVRVectorQuantization.generated.h"

UENUM(BlueprintType)
enum class EVRVectorQuantization : uint8 {
    RoundOneDecimal,
    RoundTwoDecimals,
};

