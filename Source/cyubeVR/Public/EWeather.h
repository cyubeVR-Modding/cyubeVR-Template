#pragma once
#include "CoreMinimal.h"
#include "EWeather.generated.h"

UENUM(BlueprintType)
enum class EWeather : uint8 {
    Regular,
    Rain,
    Snow,
    Invalid,
};

