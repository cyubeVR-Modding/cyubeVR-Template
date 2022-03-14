#pragma once
#include "CoreMinimal.h"
#include "ESecondaryGripType.generated.h"

UENUM(BlueprintType)
enum class ESecondaryGripType : uint8 {
    SG_None,
    SG_Free,
    SG_SlotOnly,
    SG_Free_Retain,
    SG_SlotOnly_Retain,
    SG_FreeWithScaling_Retain,
    SG_SlotOnlyWithScaling_Retain,
    SG_Custom,
    SG_ScalingOnly,
    SG_MAX UMETA(Hidden),
};

