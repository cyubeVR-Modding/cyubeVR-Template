#include "RuntimeMeshProviderTargetInterface.h"

class UMaterialInterface;

void URuntimeMeshProviderTargetInterface::SetupMaterialSlot(int32 MaterialSlot, FName SlotName, UMaterialInterface* InMaterial) {
}

void URuntimeMeshProviderTargetInterface::SetSectionVisibility(int32 LODIndex, int32 SectionId, bool bIsVisible) {
}

void URuntimeMeshProviderTargetInterface::SetSectionCastsShadow(int32 LODIndex, int32 SectionId, bool bCastsShadow) {
}

void URuntimeMeshProviderTargetInterface::SetLODScreenSize(int32 LODIndex, float ScreenSize) {
}

void URuntimeMeshProviderTargetInterface::RemoveSection(int32 LODIndex, int32 SectionId) {
}

void URuntimeMeshProviderTargetInterface::MarkSectionDirty(int32 LODIndex, int32 SectionId) {
}

void URuntimeMeshProviderTargetInterface::MarkLODDirty(int32 LODIndex) {
}

void URuntimeMeshProviderTargetInterface::MarkCollisionDirty() {
}

void URuntimeMeshProviderTargetInterface::MarkAllLODsDirty() {
}

bool URuntimeMeshProviderTargetInterface::IsMaterialSlotNameValid(FName MaterialSlotName) const {
    return false;
}

int32 URuntimeMeshProviderTargetInterface::GetNumMaterials() {
    return 0;
}

TArray<FRuntimeMeshMaterialSlot> URuntimeMeshProviderTargetInterface::GetMaterialSlots() {
    return TArray<FRuntimeMeshMaterialSlot>();
}

TArray<FName> URuntimeMeshProviderTargetInterface::GetMaterialSlotNames() {
    return TArray<FName>();
}

FRuntimeMeshMaterialSlot URuntimeMeshProviderTargetInterface::GetMaterialSlot(int32 SlotIndex) {
    return FRuntimeMeshMaterialSlot{};
}

int32 URuntimeMeshProviderTargetInterface::GetMaterialIndex(FName MaterialSlotName) {
    return 0;
}

UMaterialInterface* URuntimeMeshProviderTargetInterface::GetMaterial(int32 SlotIndex) {
    return NULL;
}

void URuntimeMeshProviderTargetInterface::CreateSection(int32 LODIndex, int32 SectionId, const FRuntimeMeshSectionProperties& SectionProperties) {
}

void URuntimeMeshProviderTargetInterface::ConfigureLODs(const TArray<FRuntimeMeshLODProperties>& InLODs) {
}

void URuntimeMeshProviderTargetInterface::ClearSection(int32 LODIndex, int32 SectionId) {
}

URuntimeMeshProviderTargetInterface::URuntimeMeshProviderTargetInterface() {
}

