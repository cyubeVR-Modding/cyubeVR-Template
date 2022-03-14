#pragma once
#include "CoreMinimal.h"
#include "EUWorksVRScreenshotType.generated.h"

UENUM()
enum class EUWorksVRScreenshotType : uint8 {
    None,
    Mono,
    Stereo,
    MonoCubemap,
    MonoPanorama,
    StereoPanorama,
};

