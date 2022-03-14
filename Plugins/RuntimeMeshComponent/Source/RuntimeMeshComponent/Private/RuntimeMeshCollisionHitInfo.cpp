#include "RuntimeMeshCollisionHitInfo.h"

FRuntimeMeshCollisionHitInfo::FRuntimeMeshCollisionHitInfo() {
    this->SourceType = ERuntimeMeshCollisionFaceSourceType::Collision;
    this->SectionId = 0;
    this->FaceIndex = 0;
    this->Material = NULL;
}

