#include "RuntimeMeshActor.h"
#include "RuntimeMeshComponent.h"

ARuntimeMeshActor::ARuntimeMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<URuntimeMeshComponent>(TEXT("RuntimeMeshComponent0"));
    this->RuntimeMeshComponent = (URuntimeMeshComponent*)RootComponent;
}

void ARuntimeMeshActor::SetRuntimeMeshMobility(ERuntimeMeshMobility NewMobility) {
}

ERuntimeMeshMobility ARuntimeMeshActor::GetRuntimeMeshMobility() {
    return ERuntimeMeshMobility::Movable;
}

URuntimeMeshComponent* ARuntimeMeshActor::GetRuntimeMeshComponent() const {
    return NULL;
}


