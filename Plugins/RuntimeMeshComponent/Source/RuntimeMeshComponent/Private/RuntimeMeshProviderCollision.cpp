#include "RuntimeMeshProviderCollision.h"

void URuntimeMeshProviderCollision::SetRenderableSectionAffectsCollision(int32 SectionId, bool bCollisionEnabled) {
}

void URuntimeMeshProviderCollision::SetRenderableLODForCollision(int32 LODIndex) {
}

void URuntimeMeshProviderCollision::SetCollisionSettings(const FRuntimeMeshCollisionSettings& NewCollisionSettings) {
}

void URuntimeMeshProviderCollision::SetCollisionMesh(const FRuntimeMeshCollisionData& NewCollisionMesh) {
}

URuntimeMeshProviderCollision::URuntimeMeshProviderCollision() {
    this->LODForMeshCollision = 0;
}

