#include "VRStereoWidgetComponent.h"

void UVRStereoWidgetComponent::SetPriority(int32 InPriority) {
}

int32 UVRStereoWidgetComponent::GetPriority() const {
    return 0;
}

UVRStereoWidgetComponent::UVRStereoWidgetComponent() {
    this->Shape = NULL;
    this->bUseEpicsWorldLockedStereo = false;
    this->bIsSleeping = false;
    this->bNoAlphaChannel = false;
    this->bQuadPreserveTextureRatio = false;
    this->Priority = 0;
}

