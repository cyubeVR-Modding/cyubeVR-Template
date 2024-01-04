#include "RuntimeMeshComponentSettings.h"

URuntimeMeshComponentSettings::URuntimeMeshComponentSettings() {
    this->DefaultUpdateFrequency = ERuntimeMeshUpdateFrequency::Average;
    this->bUse32BitIndicesByDefault = false;
    this->bUseHighPrecisionTexCoordsByDefault = false;
    this->bUseHighPrecisionTangentsByDefault = false;
    this->bCookCollisionAsync = false;
    this->DefaultCookingMode = ERuntimeMeshCollisionCookingMode::CookingPerformance;
    this->SystemThreadDivisor = 2;
    this->ThreadPriority = ERuntimeMeshThreadingPriority::BelowNormal;
    this->ThreadStackSize = 0;
    this->MaxAllowedTimePerTick = 11.00f;
}


