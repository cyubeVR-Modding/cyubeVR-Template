#pragma once
#include "CoreMinimal.h"
#include "EUWorksVRScreenshotType.generated.h"

UENUM(BlueprintType)
enum class EUWorksVRScreenshotType : uint8 {
    None,
    Mono,
    Stereo,
    MonoCubemap,
    MonoPanorama,
    StereoPanorama,
};

