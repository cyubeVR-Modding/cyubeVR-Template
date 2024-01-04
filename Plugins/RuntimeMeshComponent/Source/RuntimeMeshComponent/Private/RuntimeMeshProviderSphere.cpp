#include "RuntimeMeshProviderSphere.h"

URuntimeMeshProviderSphere::URuntimeMeshProviderSphere() {
    this->MaxLOD = 5;
    this->SphereRadius = 100.00f;
    this->MaxLatitudeSegments = 32;
    this->MinLatitudeSegments = 8;
    this->MaxLongitudeSegments = 16;
    this->MinLongitudeSegments = 5;
    this->LODMultiplier = 0.75f;
    this->SphereMaterial = NULL;
}

void URuntimeMeshProviderSphere::SetSphereRadius(float InSphereRadius) {
}

void URuntimeMeshProviderSphere::SetSphereMaterial(UMaterialInterface* InSphereMaterial) {
}

void URuntimeMeshProviderSphere::SetMinLongitudeSegments(int32 InMinLongitudeSegments) {
}

void URuntimeMeshProviderSphere::SetMinLatitudeSegments(int32 InMinLatitudeSegments) {
}

void URuntimeMeshProviderSphere::SetMaxLongitudeSegments(int32 InMaxLongitudeSegments) {
}

void URuntimeMeshProviderSphere::SetMaxLatitudeSegments(int32 InMaxLatitudeSegments) {
}

void URuntimeMeshProviderSphere::SetLODMultiplier(float InLODMultiplier) {
}

float URuntimeMeshProviderSphere::GetSphereRadius() const {
    return 0.0f;
}

UMaterialInterface* URuntimeMeshProviderSphere::GetSphereMaterial() const {
    return NULL;
}

int32 URuntimeMeshProviderSphere::GetMinLongitudeSegments() const {
    return 0;
}

int32 URuntimeMeshProviderSphere::GetMinLatitudeSegments() const {
    return 0;
}

int32 URuntimeMeshProviderSphere::GetMaxLongitudeSegments() const {
    return 0;
}

int32 URuntimeMeshProviderSphere::GetMaxLatitudeSegments() const {
    return 0;
}

float URuntimeMeshProviderSphere::GetLODMultiplier() const {
    return 0.0f;
}


