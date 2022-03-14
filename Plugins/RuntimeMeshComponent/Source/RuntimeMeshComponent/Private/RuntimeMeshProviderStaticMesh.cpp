#include "RuntimeMeshProviderStaticMesh.h"

class UStaticMesh;

void URuntimeMeshProviderStaticMesh::SetStaticMesh(UStaticMesh* InStaticMesh) {
}

void URuntimeMeshProviderStaticMesh::SetMaxLOD(int32 InMaxLOD) {
}

void URuntimeMeshProviderStaticMesh::SetComplexCollisionLOD(int32 InLOD) {
}

UStaticMesh* URuntimeMeshProviderStaticMesh::GetStaticMesh() const {
    return NULL;
}

int32 URuntimeMeshProviderStaticMesh::GetMaxLOD() const {
    return 0;
}

int32 URuntimeMeshProviderStaticMesh::GetComplexCollisionLOD() const {
    return 0;
}

URuntimeMeshProviderStaticMesh::URuntimeMeshProviderStaticMesh() {
    this->StaticMesh = NULL;
    this->MaxLOD = 8;
    this->ComplexCollisionLOD = 0;
}

