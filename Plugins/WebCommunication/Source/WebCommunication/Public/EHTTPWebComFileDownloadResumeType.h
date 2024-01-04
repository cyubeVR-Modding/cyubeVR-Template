#pragma once
#include "CoreMinimal.h"
#include "EHTTPWebComFileDownloadResumeType.generated.h"

UENUM(BlueprintType)
enum class EHTTPWebComFileDownloadResumeType : uint8 {
    E_OVERWRITE,
    E_NOT_OVERWRITE,
    E_RESUME,
};

