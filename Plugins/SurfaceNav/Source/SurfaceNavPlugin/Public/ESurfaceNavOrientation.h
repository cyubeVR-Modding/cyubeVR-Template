#pragma once
#include "CoreMinimal.h"
#include "ESurfaceNavOrientation.generated.h"

UENUM(BlueprintType)
enum ESurfaceNavOrientation {
    ORIENTATION_SN_ForwardVectorFacingSurface,
    ORIENTATION_SN_DownVectorFacingSurface,
    ORIENTATION_SN_UpVectorFacingSurface,
};

