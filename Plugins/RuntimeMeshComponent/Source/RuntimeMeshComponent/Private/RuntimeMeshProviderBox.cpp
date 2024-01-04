#include "RuntimeMeshProviderBox.h"

URuntimeMeshProviderBox::URuntimeMeshProviderBox() {
    this->Material = NULL;
}

void URuntimeMeshProviderBox::SetBoxRadius(const FVector& InRadius) {
}

void URuntimeMeshProviderBox::SetBoxMaterial(UMaterialInterface* InMaterial) {
}

FVector URuntimeMeshProviderBox::GetBoxRadius() const {
    return FVector{};
}

UMaterialInterface* URuntimeMeshProviderBox::GetBoxMaterial() const {
    return NULL;
}


