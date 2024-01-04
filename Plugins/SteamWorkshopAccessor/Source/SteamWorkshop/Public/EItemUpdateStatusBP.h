#pragma once
#include "CoreMinimal.h"
#include "EItemUpdateStatusBP.generated.h"

UENUM(BlueprintType)
enum class EItemUpdateStatusBP : uint8 {
    US_Invalid,
    US_PreparingConfig,
    US_PreparingContent,
    US_UploadingContent,
    US_UploadingPreviewFile,
    US_CommittingChanges,
};

