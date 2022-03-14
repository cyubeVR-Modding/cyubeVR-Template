#include "RuntimeMeshLODProperties.h"

FRuntimeMeshLODProperties::FRuntimeMeshLODProperties() {
    this->ScreenSize = 0.00f;
    this->bCanGetSectionsIndependently = false;
    this->bCanGetAllSectionsAtOnce = false;
    this->bShouldMergeStaticSectionBuffers = false;
}

