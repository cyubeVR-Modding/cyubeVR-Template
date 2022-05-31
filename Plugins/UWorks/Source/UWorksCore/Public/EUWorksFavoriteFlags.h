#pragma once
#include "CoreMinimal.h"
#include "EUWorksFavoriteFlags.generated.h"

UENUM(BlueprintType)
enum class EUWorksFavoriteFlags : uint8 {
    Unknown,
    Favorite,
    History,
};

