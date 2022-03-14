#include "RuntimeMeshCollisionSourceSectionInfo.h"

FRuntimeMeshCollisionSourceSectionInfo::FRuntimeMeshCollisionSourceSectionInfo() {
    this->StartIndex = 0;
    this->EndIndex = 0;
    this->SectionId = 0;
    this->SourceType = ERuntimeMeshCollisionFaceSourceType::Collision;
}

