#include "RuntimeMeshCollisionSettings.h"

FRuntimeMeshCollisionSettings::FRuntimeMeshCollisionSettings() {
    this->bUseComplexAsSimple = false;
    this->bUseAsyncCooking = false;
    this->CookingMode = ERuntimeMeshCollisionCookingMode::CollisionPerformance;
}

