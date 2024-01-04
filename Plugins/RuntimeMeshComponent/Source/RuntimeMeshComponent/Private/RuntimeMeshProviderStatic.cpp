#include "RuntimeMeshProviderStatic.h"

URuntimeMeshProviderStatic::URuntimeMeshProviderStatic() {
    this->StoreEditorGeneratedDataForGame = true;
}

void URuntimeMeshProviderStatic::UpdateSectionFromComponents(int32 LODIndex, int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents) {
}

void URuntimeMeshProviderStatic::UpdateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshRenderableMeshData& SectionData) {
}

void URuntimeMeshProviderStatic::UnRegisterModifier(URuntimeMeshModifier* Modifier) {
}

void URuntimeMeshProviderStatic::SetShouldSerializeMeshData(bool bIsSerialized) {
}

void URuntimeMeshProviderStatic::SetRenderableSectionAffectsCollision(int32 SectionId, bool bCollisionEnabled, bool bForceUpdate) {
}

void URuntimeMeshProviderStatic::SetRenderableLODForCollision(int32 LODIndex) {
}

void URuntimeMeshProviderStatic::SetCollisionSettings(const FRuntimeMeshCollisionSettings& NewCollisionSettings) {
}

void URuntimeMeshProviderStatic::SetCollisionMesh(const FRuntimeMeshCollisionData& NewCollisionMesh) {
}

void URuntimeMeshProviderStatic::RemoveAllSectionsForLOD(int32 LODIndex) {
}

void URuntimeMeshProviderStatic::RegisterModifier(URuntimeMeshModifier* Modifier) {
}

TSet<int32> URuntimeMeshProviderStatic::GetSectionsForMeshCollision() const {
    return TSet<int32>();
}

FRuntimeMeshRenderableMeshData URuntimeMeshProviderStatic::GetSectionRenderDataAndClear(int32 LODIndex, int32 SectionId) {
    return FRuntimeMeshRenderableMeshData{};
}

FRuntimeMeshRenderableMeshData URuntimeMeshProviderStatic::GetSectionRenderData(int32 LODIndex, int32 SectionId) const {
    return FRuntimeMeshRenderableMeshData{};
}

FRuntimeMeshSectionProperties URuntimeMeshProviderStatic::GetSectionProperties(int32 LODIndex, int32 SectionId) const {
    return FRuntimeMeshSectionProperties{};
}

TArray<int32> URuntimeMeshProviderStatic::GetSectionIds(int32 LODIndex) const {
    return TArray<int32>();
}

FBoxSphereBounds URuntimeMeshProviderStatic::GetSectionBounds(int32 LODIndex, int32 SectionId) const {
    return FBoxSphereBounds{};
}

int32 URuntimeMeshProviderStatic::GetLODForMeshCollision() const {
    return 0;
}

int32 URuntimeMeshProviderStatic::GetLastSectionId(int32 LODIndex) const {
    return 0;
}

FRuntimeMeshCollisionSettings URuntimeMeshProviderStatic::GetCollisionSettingsStatic() const {
    return FRuntimeMeshCollisionSettings{};
}

FRuntimeMeshCollisionData URuntimeMeshProviderStatic::GetCollisionMeshStatic() const {
    return FRuntimeMeshCollisionData{};
}

bool URuntimeMeshProviderStatic::DoesSectionHaveValidMeshData(int32 LODIndex, int32 SectionId) const {
    return false;
}

void URuntimeMeshProviderStatic::CreateSectionFromComponents(int32 LODIndex, int32 SectionIndex, int32 MaterialSlot, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents, ERuntimeMeshUpdateFrequency UpdateFrequency, bool bCreateCollision) {
}

void URuntimeMeshProviderStatic::CreateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshSectionProperties& SectionProperties, const FRuntimeMeshRenderableMeshData& SectionData) {
}


