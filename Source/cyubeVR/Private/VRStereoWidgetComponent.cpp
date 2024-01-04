#include "VRStereoWidgetComponent.h"

UVRStereoWidgetComponent::UVRStereoWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Shape = NULL;
    this->bUseEpicsWorldLockedStereo = false;
    this->bIsSleeping = false;
    this->bNoAlphaChannel = false;
    this->bQuadPreserveTextureRatio = false;
    this->Priority = 0;
}

void UVRStereoWidgetComponent::SetPriority(int32 InPriority) {
}

int32 UVRStereoWidgetComponent::GetPriority() const {
    return 0;
}


