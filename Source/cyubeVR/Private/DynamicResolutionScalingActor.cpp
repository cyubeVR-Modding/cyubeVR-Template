#include "DynamicResolutionScalingActor.h"

bool ADynamicResolutionScalingActor::IsVeryHighEndGPU() {
    return false;
}

bool ADynamicResolutionScalingActor::IsHighEndGPU() {
    return false;
}

ADynamicResolutionScalingActor::ADynamicResolutionScalingActor() {
    this->DynamicResolutionScalingActive = true;
    this->DynamicResolutionScalingActiveNew = true;
    this->DynamicResolutionScalingActiveInt = 1;
}

