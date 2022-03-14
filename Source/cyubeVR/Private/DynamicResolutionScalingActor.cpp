#include "DynamicResolutionScalingActor.h"

bool ADynamicResolutionScalingActor::IsHighEndGPU() {
    return false;
}

ADynamicResolutionScalingActor::ADynamicResolutionScalingActor() {
    this->DynamicResolutionScalingActive = true;
    this->DynamicResolutionScalingActiveNew = true;
    this->DynamicResolutionScalingActiveInt = 1;
}

