#pragma once
#include "CoreMinimal.h"
#include "EUWorksNotificationPosition.generated.h"

UENUM()
enum class EUWorksNotificationPosition : uint8 {
    TopLeft,
    TopRight,
    BottomLeft,
    BottomRight,
};

