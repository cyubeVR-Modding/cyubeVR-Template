#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeMeshCollisionData.h"
#include "RuntimeMeshProvider.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeMeshRenderableMeshData.h"
#include "RuntimeMeshTangent.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeMeshCollisionSettings.h"
#include "RuntimeMeshSectionProperties.h"
#include "ERuntimeMeshUpdateFrequency.h"
#include "RuntimeMeshProviderStatic.generated.h"

class URuntimeMeshModifier;

UCLASS(Blueprintable)
class RUNTIMEMESHCOMPONENT_API URuntimeMeshProviderStatic : public URuntimeMeshProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StoreEditorGeneratedDataForGame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URuntimeMeshModifier*> CurrentMeshModifiers;
    
public:
    URuntimeMeshProviderStatic();
    UFUNCTION(BlueprintCallable)
    void UpdateSectionFromComponents(int32 LODIndex, int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshRenderableMeshData& SectionData);
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterModifier(URuntimeMeshModifier* Modifier);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldSerializeMeshData(bool bIsSerialized);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderableSectionAffectsCollision(int32 SectionId, bool bCollisionEnabled, bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderableLODForCollision(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionSettings(const FRuntimeMeshCollisionSettings& NewCollisionSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionMesh(const FRuntimeMeshCollisionData& NewCollisionMesh);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllSectionsForLOD(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterModifier(URuntimeMeshModifier* Modifier);
    
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
    FRuntimeMeshCollisionSettings GetCollisionSettingsStatic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRuntimeMeshCollisionData GetCollisionMeshStatic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSectionHaveValidMeshData(int32 LODIndex, int32 SectionId) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateSectionFromComponents(int32 LODIndex, int32 SectionIndex, int32 MaterialSlot, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents, ERuntimeMeshUpdateFrequency UpdateFrequency, bool bCreateCollision);
    
    UFUNCTION(BlueprintCallable)
    void CreateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshSectionProperties& SectionProperties, const FRuntimeMeshRenderableMeshData& SectionData);
    
};

