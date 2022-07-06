#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RuntimeMeshMaterialSlot.h"
#include "RuntimeMeshLODProperties.h"
#include "RuntimeMeshSectionProperties.h"
#include "RuntimeMeshProviderTargetInterface.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class RUNTIMEMESHCOMPONENT_API URuntimeMeshProviderTargetInterface : public UObject {
    GENERATED_BODY()
public:
    URuntimeMeshProviderTargetInterface();
    UFUNCTION(BlueprintCallable)
    void SetupMaterialSlot(int32 MaterialSlot, FName SlotName, UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetSectionVisibility(int32 LODIndex, int32 SectionId, bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetSectionCastsShadow(int32 LODIndex, int32 SectionId, bool bCastsShadow);
    
    UFUNCTION(BlueprintCallable)
    void SetLODScreenSize(int32 LODIndex, float ScreenSize);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSection(int32 LODIndex, int32 SectionId);
    
    UFUNCTION(BlueprintCallable)
    void MarkSectionDirty(int32 LODIndex, int32 SectionId);
    
    UFUNCTION(BlueprintCallable)
    void MarkLODDirty(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void MarkCollisionDirty();
    
    UFUNCTION(BlueprintCallable)
    void MarkAllLODsDirty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaterialSlotNameValid(FName MaterialSlotName) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumMaterials();
    
    UFUNCTION(BlueprintCallable)
    TArray<FRuntimeMeshMaterialSlot> GetMaterialSlots();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetMaterialSlotNames();
    
    UFUNCTION(BlueprintCallable)
    FRuntimeMeshMaterialSlot GetMaterialSlot(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaterialIndex(FName MaterialSlotName);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInterface* GetMaterial(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void CreateSection(int32 LODIndex, int32 SectionId, const FRuntimeMeshSectionProperties& SectionProperties);
    
    UFUNCTION(BlueprintCallable)
    void ConfigureLODs(const TArray<FRuntimeMeshLODProperties>& InLODs);
    
    UFUNCTION(BlueprintCallable)
    void ClearSection(int32 LODIndex, int32 SectionId);
    
};

