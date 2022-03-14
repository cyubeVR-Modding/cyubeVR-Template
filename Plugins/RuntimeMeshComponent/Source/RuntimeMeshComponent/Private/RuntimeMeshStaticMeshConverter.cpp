#include "RuntimeMeshStaticMeshConverter.h"

class UStaticMeshComponent;
class UStaticMesh;
class URuntimeMeshComponent;

bool URuntimeMeshStaticMeshConverter::CopyStaticMeshToRuntimeMesh(UStaticMesh* StaticMesh, URuntimeMeshComponent* RuntimeMeshComponent, int32 CollisionLODIndex, int32 MaxLODToCopy) {
    return false;
}

bool URuntimeMeshStaticMeshConverter::CopyStaticMeshSectionToRenderableMeshData(UStaticMesh* StaticMesh, int32 LODIndex, int32 SectionId, FRuntimeMeshRenderableMeshData& OutMeshData) {
    return false;
}

bool URuntimeMeshStaticMeshConverter::CopyStaticMeshLODToCollisionData(UStaticMesh* StaticMesh, int32 LODIndex, FRuntimeMeshCollisionData& OutCollisionData) {
    return false;
}

bool URuntimeMeshStaticMeshConverter::CopyStaticMeshComponentToRuntimeMesh(UStaticMeshComponent* StaticMeshComponent, URuntimeMeshComponent* RuntimeMeshComponent, int32 CollisionLODIndex, int32 MaxLODToCopy) {
    return false;
}

bool URuntimeMeshStaticMeshConverter::CopyStaticMeshCollisionToCollisionSettings(UStaticMesh* StaticMesh, FRuntimeMeshCollisionSettings& OutCollisionSettings) {
    return false;
}

URuntimeMeshStaticMeshConverter::URuntimeMeshStaticMeshConverter() {
}

