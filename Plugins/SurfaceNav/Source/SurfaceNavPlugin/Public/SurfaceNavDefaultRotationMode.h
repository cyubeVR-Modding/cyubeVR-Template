#pragma once
#include "CoreMinimal.h"
#include "SurfaceNavPawnRotationMode.h"
#include "SurfaceNavDefaultRotationMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class SURFACENAVPLUGIN_API USurfaceNavDefaultRotationMode : public USurfaceNavPawnRotationMode {
    GENERATED_BODY()
public:
    USurfaceNavDefaultRotationMode();

};

