#pragma once
#include "CoreMinimal.h"
#include "EUWorksFailureType.generated.h"

UENUM()
enum class EUWorksFailureType : uint8 {
    FlushedCallbackQueue,
    PipeFail,
};

