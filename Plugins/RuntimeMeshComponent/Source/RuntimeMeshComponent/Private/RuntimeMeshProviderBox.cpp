#include "RuntimeMeshProviderBox.h"

class UMaterialInterface;

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

URuntimeMeshProviderBox::URuntimeMeshProviderBox() {
    this->Material = NULL;
}

