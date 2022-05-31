#pragma once
#include "CoreMinimal.h"
#include "EHTTPWebComFileUploadType.generated.h"

UENUM(BlueprintType)
enum class EHTTPWebComFileUploadType : uint8 {
    E_fut_put,
    E_fut_post,
    E_fut_MAX UMETA(Hidden),
};

