#pragma once
#include "CoreMinimal.h"
#include "NavLinkComponent.h"
#include "SurfaceNavLinkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SURFACENAVPLUGIN_API USurfaceNavLinkComponent : public UNavLinkComponent {
    GENERATED_BODY()
public:
    USurfaceNavLinkComponent(const FObjectInitializer& ObjectInitializer);

};

