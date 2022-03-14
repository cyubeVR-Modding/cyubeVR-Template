#include "RuntimeTree.h"

class UProceduralMeshComponent;

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

ARuntimeTree::ARuntimeTree() {
    this->Type = ETreeType::Sycamore;
    this->ChunkManager = NULL;
    this->damaged = false;
    this->IsFalling = false;
    this->PMC = NULL;
    this->StaticMeshReference = NULL;
}

