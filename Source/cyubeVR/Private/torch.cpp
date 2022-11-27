#include "torch.h"

void Atorch::SetColor_Implementation(FColor Color_, EBlockTypeBP Type) {
}

void Atorch::SetActive_Implementation(bool Active) {
}

void Atorch::DetachFromChunk_Implementation() {
}

Atorch::Atorch() {
    this->TypeCPP = EBlockTypeBP::Stone;
    this->P_LOD0 = NULL;
    this->P_2_LOD0 = NULL;
    this->P_LOD1 = NULL;
    this->Rotation = ERotation::Right;
}

