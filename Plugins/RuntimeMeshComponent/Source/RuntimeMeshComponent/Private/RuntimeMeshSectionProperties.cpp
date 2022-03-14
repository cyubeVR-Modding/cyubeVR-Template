#include "RuntimeMeshSectionProperties.h"

FRuntimeMeshSectionProperties::FRuntimeMeshSectionProperties() {
    this->UpdateFrequency = ERuntimeMeshUpdateFrequency::Average;
    this->MaterialSlot = 0;
    this->bIsVisible = false;
    this->bIsMainPassRenderable = false;
    this->bCastsShadow = false;
    this->bForceOpaque = false;
    this->bUseHighPrecisionTangents = false;
    this->bUseHighPrecisionTexCoords = false;
    this->NumTexCoords = 0;
    this->bWants32BitIndices = false;
}

