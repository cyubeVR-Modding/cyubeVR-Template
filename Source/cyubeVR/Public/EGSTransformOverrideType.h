#pragma once
#include "CoreMinimal.h"
#include "EGSTransformOverrideType.generated.h"

UENUM(BlueprintType)
enum class EGSTransformOverrideType : uint8 {
    None,
    OverridesWorldTransform,
    ModifiesWorldTransform,
};

