#pragma once
#include "CoreMinimal.h"
#include "EUWorksNotificationPosition.generated.h"

UENUM(BlueprintType)
enum class EUWorksNotificationPosition : uint8 {
    TopLeft,
    TopRight,
    BottomLeft,
    BottomRight,
};

