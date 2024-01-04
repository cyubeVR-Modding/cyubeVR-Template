#include "LivCustomClipPlane.h"

ULivCustomClipPlane::ULivCustomClipPlane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->CastShadow = false;
    this->OverrideMaterials.AddDefaulted(1);
}


