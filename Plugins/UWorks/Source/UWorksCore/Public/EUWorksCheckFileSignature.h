#pragma once
#include "CoreMinimal.h"
#include "EUWorksCheckFileSignature.generated.h"

UENUM()
enum class EUWorksCheckFileSignature {
    InvalidSignature,
    ValidSignature,
    FileNotFound,
    NoSignaturesFoundForThisApp,
    NoSignaturesFoundForThisFile,
};

