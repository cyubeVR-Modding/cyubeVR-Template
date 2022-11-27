#include "DeerCPP.h"

class UMeshComponent;
class AChunkManager;

void ADeerCPP::UpdateColorsFromLoaded_Implementation() {
}

void ADeerCPP::StartMoving_Implementation() {
}

void ADeerCPP::SetMobilityAllEvent_Implementation(EComponentMobility::Type NewMobility) {
}

void ADeerCPP::SetDeadRagdoll() {
}

void ADeerCPP::SetDead(AChunkManager* ChunkManager) {
}

void ADeerCPP::SetComponentTickBP_Implementation() {
}

void ADeerCPP::ResetToPoolBP_Implementation() {
}

TArray<UMeshComponent*> ADeerCPP::GetMeshComponents() {
    return TArray<UMeshComponent*>();
}

void ADeerCPP::DoWeirdStuff_Implementation() {
}

void ADeerCPP::DoTick_Implementation() {
}

ADeerCPP::ADeerCPP() {
    this->WasLoaded = false;
    this->RecentlyRendered = false;
    this->WasVisibleLastFrame = true;
    this->IsDead = false;
}

