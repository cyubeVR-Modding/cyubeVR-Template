#include "RuntimeMesh.h"

class URuntimeMeshProvider;
class UBodySetup;

void URuntimeMesh::Reset() {
}

bool URuntimeMesh::IsInitialized() const {
    return false;
}

void URuntimeMesh::Initialize(URuntimeMeshProvider* Provider) {
}

URuntimeMeshProvider* URuntimeMesh::GetProviderPtr() {
    return NULL;
}

FBoxSphereBounds URuntimeMesh::GetLocalBounds() const {
    return FBoxSphereBounds{};
}

FRuntimeMeshCollisionHitInfo URuntimeMesh::GetHitSource(int32 FaceIndex) const {
    return FRuntimeMeshCollisionHitInfo{};
}

UBodySetup* URuntimeMesh::GetBodySetup() {
    return NULL;
}

URuntimeMesh::URuntimeMesh() {
    this->MeshProviderPtr = NULL;
    this->BodySetup = NULL;
}

