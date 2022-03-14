#pragma once
#include "CoreMinimal.h"
#include "EMeshObjectType.generated.h"

UENUM()
enum class EMeshObjectType : uint8 {
    BigGroundObject,
    WallObject,
    SpecialObject,
};

