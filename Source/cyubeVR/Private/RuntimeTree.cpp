#include "RuntimeTree.h"
#include "Components/SceneComponent.h"

ARuntimeTree::ARuntimeTree(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Type = ETreeType::Sycamore;
    this->ChunkManager = NULL;
    this->IsFalling = false;
    this->PMC = NULL;
    this->StaticMeshReference = NULL;
}

void ARuntimeTree::SpawnLogs(UProceduralMeshComponent* CutNew) {
}

void ARuntimeTree::SetupWind(int32 From, int32 To) {
}

void ARuntimeTree::SetActive_Implementation() {
}

void ARuntimeTree::ResetToPoolBP_Implementation() {
}

void ARuntimeTree::RegisterToolHit(FVector Location, bool& NowFall) {
}


