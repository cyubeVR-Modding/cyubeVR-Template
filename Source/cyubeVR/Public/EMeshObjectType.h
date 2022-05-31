#pragma once
#include "CoreMinimal.h"
#include "EMeshObjectType.generated.h"

UENUM(BlueprintType)
enum class EMeshObjectType : uint8 {
    BigGroundObject,
    WallObject,
    SpecialObject,
};

