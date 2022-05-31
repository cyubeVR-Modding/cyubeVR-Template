#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeMeshRenderableMeshData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeMeshTangent.h"
#include "RuntimeMeshCollisionSettings.h"
#include "RuntimeMeshCollisionData.h"
#include "RuntimeMeshSectionProperties.h"
#include "UObject/NoExportTypes.h"
#include "ERuntimeMeshUpdateFrequency.h"
#include "RuntimeMeshComponentStatic.generated.h"

class URuntimeMeshModifierAdjacency;
class URuntimeMesh;
class URuntimeMeshProviderStatic;
class URuntimeMeshModifierNormals;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RUNTIMEMESHCOMPONENT_API URuntimeMeshComponentStatic : public URuntimeMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeMesh* RuntimeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeMeshProviderStatic* StaticProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeMeshModifierNormals* NormalsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeMeshModifierAdjacency* AdjacencyModifier;
    
public:
    URuntimeMeshComponentStatic();
    UFUNCTION(BlueprintCallable)
    void UpdateSectionFromComponents(int32 LODIndex, int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshRenderableMeshData& SectionData);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderableSectionAffectsCollision(int32 SectionId, bool bCollisionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderableLODForCollision(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionSettings(const FRuntimeMeshCollisionSettings& NewCollisionSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionMesh(const FRuntimeMeshCollisionData& NewCollisionMesh);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllSectionsForLOD(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTessellationTriangleGenerationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNormalTangentGenerationEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    URuntimeMeshProviderStatic* GetStaticProvider();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<int32> GetSectionsForMeshCollision() const;
    
    UFUNCTION(BlueprintCallable)
    FRuntimeMeshRenderableMeshData GetSectionRenderDataAndClear(int32 LODIndex, int32 SectionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRuntimeMeshRenderableMeshData GetSectionRenderData(int32 LODIndex, int32 SectionId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRuntimeMeshSectionProperties GetSectionProperties(int32 LODIndex, int32 SectionId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSectionIds(int32 LODIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds GetSectionBounds(int32 LODIndex, int32 SectionId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLODForMeshCollision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastSectionId(int32 LODIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRuntimeMeshCollisionSettings GetCollisionSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRuntimeMeshCollisionData GetCollisionMesh() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableNormalTangentGeneration();
    
    UFUNCTION(BlueprintCallable)
    void EnabledTessellationTrianglesGeneration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSectionHaveValidMeshData(int32 LODIndex, int32 SectionId) const;
    
    UFUNCTION(BlueprintCallable)
    void DisableTessellationTrianglesGeneration();
    
    UFUNCTION(BlueprintCallable)
    void DisableNormalTangentGeneration();
    
    UFUNCTION(BlueprintCallable)
    void CreateSectionFromComponents(int32 LODIndex, int32 SectionIndex, int32 MaterialSlot, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents, ERuntimeMeshUpdateFrequency UpdateFrequency, bool bCreateCollision);
    
    UFUNCTION(BlueprintCallable)
    void CreateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshSectionProperties& SectionProperties, const FRuntimeMeshRenderableMeshData& SectionData);
    
    UFUNCTION(BlueprintCallable)
    void ClearSection(int32 LODIndex, int32 SectionId);
    
};

