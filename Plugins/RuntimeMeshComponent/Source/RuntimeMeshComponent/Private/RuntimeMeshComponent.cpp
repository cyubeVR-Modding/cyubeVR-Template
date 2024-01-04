#include "RuntimeMeshComponent.h"

URuntimeMeshComponent::URuntimeMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetAddressable = true;
    this->RuntimeMeshReference = NULL;
}

void URuntimeMeshComponent::SetupMaterialSlot(int32 MaterialSlot, FName SlotName, UMaterialInterface* InMaterial) {
}

void URuntimeMeshComponent::SetRuntimeMeshMobility(ERuntimeMeshMobility NewMobility) {
}

void URuntimeMeshComponent::SetRuntimeMesh(URuntimeMesh* NewMesh) {
}

void URuntimeMeshComponent::Initialize(URuntimeMeshProvider* Provider) {
}

ERuntimeMeshMobility URuntimeMeshComponent::GetRuntimeMeshMobility() {
    return ERuntimeMeshMobility::Movable;
}

URuntimeMesh* URuntimeMeshComponent::GetRuntimeMesh() const {
    return NULL;
}

URuntimeMeshProvider* URuntimeMeshComponent::GetProvider() {
    return NULL;
}

URuntimeMesh* URuntimeMeshComponent::GetOrCreateRuntimeMesh() {
    return NULL;
}

TArray<FRuntimeMeshMaterialSlot> URuntimeMeshComponent::GetMaterialSlots() const {
    return TArray<FRuntimeMeshMaterialSlot>();
}

FRuntimeMeshCollisionHitInfo URuntimeMeshComponent::GetHitSource(int32 FaceIndex) const {
    return FRuntimeMeshCollisionHitInfo{};
}


