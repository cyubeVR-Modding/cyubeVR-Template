#pragma once
#include "CoreMinimal.h"
#include "EItemPreviewTypeBP.generated.h"

UENUM(BlueprintType)
enum class EItemPreviewTypeBP : uint8 {
    PT_Image,
    PT_YouTubeVideo,
    PT_Sketchfab,
    PT_EnvironmentMap_HorizontalCross,
    PT_EnvironmentMap_LatLong,
    PT_ReservedMax = 255,
};

