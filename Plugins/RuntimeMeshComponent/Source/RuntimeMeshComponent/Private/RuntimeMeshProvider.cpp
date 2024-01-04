#include "RuntimeMeshProvider.h"

URuntimeMeshProvider::URuntimeMeshProvider() {
}

void URuntimeMeshProvider::Shutdown() {
}

bool URuntimeMeshProvider::IsThreadSafe() {
    return false;
}

bool URuntimeMeshProvider::IsBound() const {
    return false;
}

void URuntimeMeshProvider::Initialize() {
}

bool URuntimeMeshProvider::HasCollisionMesh() {
    return false;
}

bool URuntimeMeshProvider::GetSectionMeshForLOD(int32 LODIndex, int32 SectionId, FRuntimeMeshRenderableMeshData& MeshData) {
    return false;
}

FRuntimeMeshCollisionSettings URuntimeMeshProvider::GetCollisionSettings() {
    return FRuntimeMeshCollisionSettings{};
}

bool URuntimeMeshProvider::GetCollisionMesh(FRuntimeMeshCollisionData& CollisionData) {
    return false;
}

FBoxSphereBounds URuntimeMeshProvider::GetBounds() {
    return FBoxSphereBounds{};
}

bool URuntimeMeshProvider::GetAllSectionsMeshForLOD(int32 LODIndex, TMap<int32, FRuntimeMeshSectionData>& MeshDatas) {
    return false;
}

void URuntimeMeshProvider::CollisionUpdateCompleted() {
}


