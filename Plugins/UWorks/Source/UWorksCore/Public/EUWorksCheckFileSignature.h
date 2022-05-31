#pragma once
#include "CoreMinimal.h"
#include "EUWorksCheckFileSignature.generated.h"

UENUM(BlueprintType)
enum class EUWorksCheckFileSignature : uint8 {
    InvalidSignature,
    ValidSignature,
    FileNotFound,
    NoSignaturesFoundForThisApp,
    NoSignaturesFoundForThisFile,
};

