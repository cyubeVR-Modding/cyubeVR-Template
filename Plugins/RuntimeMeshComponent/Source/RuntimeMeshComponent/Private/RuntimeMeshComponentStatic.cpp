#include "RuntimeMeshComponentStatic.h"
#include "RuntimeMeshProviderStatic.h"

URuntimeMeshComponentStatic::URuntimeMeshComponentStatic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RuntimeMesh = NULL;
    this->StaticProvider = CreateDefaultSubobject<URuntimeMeshProviderStatic>(TEXT("StaticProvider"));
    this->NormalsModifier = NULL;
    this->AdjacencyModifier = NULL;
}

void URuntimeMeshComponentStatic::UpdateSectionFromComponents(int32 LODIndex, int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents) {
}

void URuntimeMeshComponentStatic::UpdateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshRenderableMeshData& SectionData) {
}

void URuntimeMeshComponentStatic::SetRenderableSectionAffectsCollision(int32 SectionId, bool bCollisionEnabled) {
}

void URuntimeMeshComponentStatic::SetRenderableLODForCollision(int32 LODIndex) {
}

void URuntimeMeshComponentStatic::SetCollisionSettings(const FRuntimeMeshCollisionSettings& NewCollisionSettings) {
}

void URuntimeMeshComponentStatic::SetCollisionMesh(const FRuntimeMeshCollisionData& NewCollisionMesh) {
}

void URuntimeMeshComponentStatic::RemoveAllSectionsForLOD(int32 LODIndex) {
}

bool URuntimeMeshComponentStatic::HasTessellationTriangleGenerationEnabled() const {
    return false;
}

bool URuntimeMeshComponentStatic::HasNormalTangentGenerationEnabled() const {
    return false;
}

URuntimeMeshProviderStatic* URuntimeMeshComponentStatic::GetStaticProvider() {
    return NULL;
}

TSet<int32> URuntimeMeshComponentStatic::GetSectionsForMeshCollision() const {
    return TSet<int32>();
}

FRuntimeMeshRenderableMeshData URuntimeMeshComponentStatic::GetSectionRenderDataAndClear(int32 LODIndex, int32 SectionId) {
    return FRuntimeMeshRenderableMeshData{};
}

FRuntimeMeshRenderableMeshData URuntimeMeshComponentStatic::GetSectionRenderData(int32 LODIndex, int32 SectionId) const {
    return FRuntimeMeshRenderableMeshData{};
}

FRuntimeMeshSectionProperties URuntimeMeshComponentStatic::GetSectionProperties(int32 LODIndex, int32 SectionId) const {
    return FRuntimeMeshSectionProperties{};
}

TArray<int32> URuntimeMeshComponentStatic::GetSectionIds(int32 LODIndex) const {
    return TArray<int32>();
}

FBoxSphereBounds URuntimeMeshComponentStatic::GetSectionBounds(int32 LODIndex, int32 SectionId) const {
    return FBoxSphereBounds{};
}

int32 URuntimeMeshComponentStatic::GetLODForMeshCollision() const {
    return 0;
}

int32 URuntimeMeshComponentStatic::GetLastSectionId(int32 LODIndex) const {
    return 0;
}

FRuntimeMeshCollisionSettings URuntimeMeshComponentStatic::GetCollisionSettings() const {
    return FRuntimeMeshCollisionSettings{};
}

FRuntimeMeshCollisionData URuntimeMeshComponentStatic::GetCollisionMesh() const {
    return FRuntimeMeshCollisionData{};
}

void URuntimeMeshComponentStatic::EnableNormalTangentGeneration() {
}

void URuntimeMeshComponentStatic::EnabledTessellationTrianglesGeneration() {
}

bool URuntimeMeshComponentStatic::DoesSectionHaveValidMeshData(int32 LODIndex, int32 SectionId) const {
    return false;
}

void URuntimeMeshComponentStatic::DisableTessellationTrianglesGeneration() {
}

void URuntimeMeshComponentStatic::DisableNormalTangentGeneration() {
}

void URuntimeMeshComponentStatic::CreateSectionFromComponents(int32 LODIndex, int32 SectionIndex, int32 MaterialSlot, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents, ERuntimeMeshUpdateFrequency UpdateFrequency, bool bCreateCollision) {
}

void URuntimeMeshComponentStatic::CreateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshSectionProperties& SectionProperties, const FRuntimeMeshRenderableMeshData& SectionData) {
}

void URuntimeMeshComponentStatic::ClearSection(int32 LODIndex, int32 SectionId) {
}


