#include "RuntimeMeshActor.h"
#include "RuntimeMeshComponent.h"

void ARuntimeMeshActor::SetRuntimeMeshMobility(ERuntimeMeshMobility NewMobility) {
}

ERuntimeMeshMobility ARuntimeMeshActor::GetRuntimeMeshMobility() {
    return ERuntimeMeshMobility::Movable;
}

URuntimeMeshComponent* ARuntimeMeshActor::GetRuntimeMeshComponent() const {
    return NULL;
}

ARuntimeMeshActor::ARuntimeMeshActor() {
    this->RuntimeMeshComponent = CreateDefaultSubobject<URuntimeMeshComponent>(TEXT("RuntimeMeshComponent0"));
}

