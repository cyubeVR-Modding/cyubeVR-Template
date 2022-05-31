#pragma once
#include "CoreMinimal.h"
#include "EHMDType.generated.h"

UENUM(BlueprintType)
enum class EHMDType : uint8 {
    Vive,
    Rift,
    WMR,
};

