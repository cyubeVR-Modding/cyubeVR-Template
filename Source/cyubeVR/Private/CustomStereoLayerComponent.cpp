#include "CustomStereoLayerComponent.h"

UCustomStereoLayerComponent::UCustomStereoLayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DoDestroy = false;
}

void UCustomStereoLayerComponent::UseOldLayerId() {
}

void UCustomStereoLayerComponent::MarkDirty() {
}

void UCustomStereoLayerComponent::ManualDestroy() {
}


