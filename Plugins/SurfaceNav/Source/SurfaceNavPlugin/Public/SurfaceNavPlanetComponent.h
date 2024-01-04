#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurfaceNavPlanetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SURFACENAVPLUGIN_API USurfaceNavPlanetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USurfaceNavPlanetComponent(const FObjectInitializer& ObjectInitializer);

};

