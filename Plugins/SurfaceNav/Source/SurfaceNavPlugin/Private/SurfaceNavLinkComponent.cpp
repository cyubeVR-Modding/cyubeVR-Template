#include "SurfaceNavLinkComponent.h"

USurfaceNavLinkComponent::USurfaceNavLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Links.AddDefaulted(1);
}


