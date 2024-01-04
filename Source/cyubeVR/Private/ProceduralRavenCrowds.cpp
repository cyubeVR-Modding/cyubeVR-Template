#include "ProceduralRavenCrowds.h"
#include "Components/SceneComponent.h"

AProceduralRavenCrowds::AProceduralRavenCrowds(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Birds"));
    this->RMC = NULL;
    this->RuntimeMeshProvider = NULL;
}


