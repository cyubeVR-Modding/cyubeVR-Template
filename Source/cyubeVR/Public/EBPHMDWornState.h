#pragma once
#include "CoreMinimal.h"
#include "EBPHMDWornState.generated.h"

UENUM()
enum class EBPHMDWornState : uint8 {
    Unknown,
    Worn,
    NotWorn,
};

