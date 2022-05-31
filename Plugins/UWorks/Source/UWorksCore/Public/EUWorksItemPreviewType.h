#pragma once
#include "CoreMinimal.h"
#include "EUWorksItemPreviewType.generated.h"

UENUM(BlueprintType)
enum class EUWorksItemPreviewType : uint8 {
    Image,
    YouTubeVideo,
    Sketchfab,
    EnvironmentMap_HorizontalCross,
    EnvironmentMap_LatLong,
    ReservedMax = 0xFE,
};

