#include "RuntimeMeshProviderCollision.h"

URuntimeMeshProviderCollision::URuntimeMeshProviderCollision() {
    this->LODForMeshCollision = 0;
}

void URuntimeMeshProviderCollision::SetRenderableSectionAffectsCollision(int32 SectionId, bool bCollisionEnabled) {
}

void URuntimeMeshProviderCollision::SetRenderableLODForCollision(int32 LODIndex) {
}

void URuntimeMeshProviderCollision::SetCollisionSettings(const FRuntimeMeshCollisionSettings& NewCollisionSettings) {
}

void URuntimeMeshProviderCollision::SetCollisionMesh(const FRuntimeMeshCollisionData& NewCollisionMesh) {
}


