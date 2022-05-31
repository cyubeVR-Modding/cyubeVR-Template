#pragma once
#include "CoreMinimal.h"
#include "EBPHMDWornState.generated.h"

UENUM(BlueprintType)
enum class EBPHMDWornState : uint8 {
    Unknown,
    Worn,
    NotWorn,
};

