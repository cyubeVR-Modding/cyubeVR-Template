#include "RuntimeMeshProviderPlane.h"

URuntimeMeshProviderPlane::URuntimeMeshProviderPlane() {
    this->VertsAB.AddDefaulted(3);
    this->VertsAC.AddDefaulted(3);
    this->ScreenSize.AddDefaulted(2);
    this->Material = NULL;
}


