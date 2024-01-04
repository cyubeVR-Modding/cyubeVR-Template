#include "SurfaceNavInvokerComponent.h"

USurfaceNavInvokerComponent::USurfaceNavInvokerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bCanEverAffectNavigation = true;
    this->NearBlockGenerationRadius = 0.00f;
    this->FarBlockGenerationRadius = 0.00f;
    this->MaxDistanceFromPlayerForGeneration = 0.00f;
}


