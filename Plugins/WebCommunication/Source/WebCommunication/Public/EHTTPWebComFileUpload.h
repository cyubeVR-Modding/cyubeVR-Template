#pragma once
#include "CoreMinimal.h"
#include "EHTTPWebComFileUpload.generated.h"

UENUM(BlueprintType)
enum class EHTTPWebComFileUpload : uint8 {
    E_gd,
    E_ad,
    E_MAX UMETA(Hidden),
};

