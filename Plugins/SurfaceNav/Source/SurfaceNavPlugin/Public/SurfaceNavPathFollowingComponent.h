#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "SurfaceNavPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SURFACENAVPLUGIN_API USurfaceNavPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    USurfaceNavPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

