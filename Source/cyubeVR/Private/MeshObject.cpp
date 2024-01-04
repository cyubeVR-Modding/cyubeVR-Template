#include "MeshObject.h"

AMeshObject::AMeshObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = EBlockTypeBP::Stone;
    this->Life = 100.00f;
    this->Destroyed = false;
    this->bDoInstantDestroy = false;
    this->OverlapBoundingBox = NULL;
}

void AMeshObject::SetReadyForSaving() {
}

void AMeshObject::SetPreviewValid_Implementation(bool IsValid) {
}

void AMeshObject::SetIsPreview_Implementation(bool IsPreview) {
}

void AMeshObject::MarkForSave() {
}

void AMeshObject::DestroyMeshObject() {
}

void AMeshObject::DestroyEvent_Implementation() {
}

void AMeshObject::DamageMeshObject(float Damage, bool& Destroyed_) {
}

bool AMeshObject::CanDamageObject() {
    return false;
}


