#include "DynamicResolutionScalingActor.h"

ADynamicResolutionScalingActor::ADynamicResolutionScalingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DynamicResolutionScalingActive = true;
    this->DynamicResolutionScalingActiveNew = true;
    this->DynamicResolutionScalingActiveInt = 1;
}

bool ADynamicResolutionScalingActor::IsVeryHighEndGPU() {
    return false;
}

bool ADynamicResolutionScalingActor::IsHighEndGPU() {
    return false;
}


