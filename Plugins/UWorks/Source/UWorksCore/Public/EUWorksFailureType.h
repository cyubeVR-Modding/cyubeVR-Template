#pragma once
#include "CoreMinimal.h"
#include "EUWorksFailureType.generated.h"

UENUM(BlueprintType)
enum class EUWorksFailureType : uint8 {
    FlushedCallbackQueue,
    PipeFail,
};

